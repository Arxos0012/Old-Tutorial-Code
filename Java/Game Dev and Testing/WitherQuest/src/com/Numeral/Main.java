package com.Numeral;
import java.awt.Canvas;
import java.awt.Dimension;

import javax.swing.JFrame;


public class Main extends Canvas{
	public static int width = 800, height = 600;
	
	public JFrame frame;
	private Thread gamethread;
	private boolean running = false;
	
	public Main(){
		frame = new JFrame();
		Dimension size = new Dimension(width,height);
		setPreferredSize(size);
	}
	
	/*GRAPHICS NOTES:
	 * Have a background and the foreground where most of the game takes place separated.
	 * */
	
	public synchronized void start(){
		
	}
	
	public synchronized void stop(){}
	
	public static void main(String[] args) {
		Main main = new Main();
		main.frame.setTitle("WitherQuest");
		main.frame.add(main);
		main.frame.pack();
		main.frame.setVisible(true);
		main.frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}
