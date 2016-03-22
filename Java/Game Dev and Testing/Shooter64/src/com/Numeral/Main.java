package com.Numeral;

import javax.swing.JFrame;
import java.awt.Canvas;
import java.awt.Dimension;
import java.awt.image.DataBufferInt;
import java.awt.image.BufferedImage;
import java.awt.image.BufferStrategy;
import java.awt.Graphics;
import java.awt.Color;

public class Main extends Canvas implements Runnable{
	public static int width = 800, height = 600;
	
	BufferStrategy bs;
	Graphics g;
	
	JFrame frame;
	Thread gameThread;
	boolean running = false;
	
	public Main(){
		Dimension size = new Dimension(width, height);
		setPreferredSize(size);
		frame = new JFrame();
	}
	
	private synchronized void start(){
		gameThread = new Thread(this, "Game Display");
		gameThread.start();

		createBufferStrategy(3);
		bs = getBufferStrategy();
		g = bs.getDrawGraphics();
		
		running = true;
	}
	
	private synchronized void stop(){
		try{
			gameThread.join();
		}catch(InterruptedException ie){
			ie.printStackTrace();
		}
	}
	
	private void render(){
		g.setColor(new Color(0,0,0));
		g.drawRect(0, 0, width, height);
		
		g.dispose();
		bs.show();
	}
	private void update(){}
	
	public void run(){
		while(running){
			
			update();
			render();
		}
		stop();
	}
	
	public static void main(String[] args){
		Main main = new Main();
		main.frame.setResizable(false);
		main.frame.setTitle("Shooter64");
		main.frame.add(main);
		main.frame.pack();
		main.frame.setVisible(true);
		main.frame.setLocationRelativeTo(null);
		main.frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		main.start();
	}
}
