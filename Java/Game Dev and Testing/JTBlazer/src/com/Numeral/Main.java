package com.Numeral;
import com.Numeral.Graphics.Screen;
import com.Numeral.Graphics.Sprite;
import com.Numeral.Controls.Keyboard;

import javax.swing.JFrame;
import java.awt.Graphics;
import java.awt.image.BufferStrategy;
import java.awt.image.BufferedImage;
import java.awt.image.DataBufferInt;
import java.awt.Dimension;
import java.awt.Canvas;

public class Main extends Canvas implements Runnable{
	private static final long serialVersionUID = 1L;
	
	public static int width = 800, height = 600; //Previously 900 and 900*9/16
	
	private JFrame frame;
	private Thread gameThread;
	private boolean running = false;
	
	private Screen screen;
	private Keyboard keyboard;
	
	private BufferedImage image = new BufferedImage(width,height,BufferedImage.TYPE_INT_RGB);
	private int[] pixels = ((DataBufferInt)image.getRaster().getDataBuffer()).getData();
	
	public int playerX = 0, playerY = height/2 - Sprite.player[0].getSize()/2;
	private int playerAnimationCounter = 0;
	public Sprite currentSprite = Sprite.player[playerAnimationCounter];
	
	public Main(){
		Dimension size = new Dimension(width, height);
		setPreferredSize(size);
		frame = new JFrame();
		keyboard = new Keyboard();
		
		screen = new Screen(width, height);
		addKeyListener(keyboard);
	}
	
	private synchronized void start(){
		gameThread = new Thread(this, "The Game Display");
		gameThread.start();
		running = true;
	}
	
	private synchronized void stop(){
		try{
			gameThread.join();
		}catch(InterruptedException ie){
			ie.printStackTrace();
		}
	}
	
	public void run(){
		requestFocus();
		
		long lastTime = System.nanoTime();
		long timer = System.currentTimeMillis();
		
		//frame rating
		double ns = 1_000_000_000.0/60.0;
		double delta = 0;
		
		//player animation
		long animationTime = System.nanoTime();
		double ans = 1_000_000_000.0/5.0;
		double aniDelta = 0;
		
		int updates = 0, frames = 0;
		long now, anNow;
		
		while(running){
			now = System.nanoTime();
			anNow = System.nanoTime();
			
			delta += (now - lastTime) / ns;
			lastTime = now;
			
			aniDelta += (anNow - animationTime) / ans;
			animationTime = anNow;
			
			while(delta >= 1){
				update();
				updates++;
				delta--;
			}
			
			while(aniDelta >= 1){
				playerAnimationCounter++;
				aniDelta--;
			}
			
			render();
			frames++;
			
			if(System.currentTimeMillis() - timer >= 1000){
				timer += 1000;
				frame.setTitle("JTBlazer  |  " + updates + " ups, " + frames + " fps");
				frames = 0;
				updates = 0;
			}
		}
		stop();
	}
	
	public void update(){
		keyboard.updateKeys();
		if(keyboard.up && playerY > 0) playerY -= 5;
		if(keyboard.down && playerY + currentSprite.getSize() < height) playerY += 5;
		if(keyboard.left && playerX > 0) playerX -= 5;
		if(keyboard.right && playerX + currentSprite.getSize() < width) playerX += 5;
		
		currentSprite = Sprite.player[playerAnimationCounter % 2];
		
		if(keyboard.space)boosted();
	}
	
	public void render(){
		BufferStrategy bs = getBufferStrategy();
		if(bs == null){
			createBufferStrategy(3);
			return;
		}
		
		screen.clear();
		screen.generateImage();
		screen.drawPlayer(playerX, playerY, width, currentSprite);
		
		for(int i=0; i<pixels.length; i++){
			pixels[i] = screen.pixels[i];
		}
		
		Graphics g = bs.getDrawGraphics();
		
		g.drawImage(image, 0, 0, width, height, null);
		
		g.dispose();
		bs.show();
	}
	
	private void boosted(){
		currentSprite = Sprite.boosted;
	}
	
	public static void main(String[] args){
		Main main = new Main();
		main.frame.setResizable(false);
		main.frame.setTitle("JTBlazer");
		main.frame.add(main);
		main.frame.pack();
		main.frame.setLocationRelativeTo(null);
		main.frame.setVisible(true);
		main.frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		main.start();
	}
}
