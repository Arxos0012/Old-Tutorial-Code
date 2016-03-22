package com.Numeral.Controls;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class Keyboard implements KeyListener{
	
	private boolean[] keys = new boolean[120];
	public boolean up, down, left, right;
	
	private final boolean PRESSED = true, TYPED = true, RELEASED = false;
	
	public void updateKeys(){
		up = keys[KeyEvent.VK_W];
		down = keys[KeyEvent.VK_S];
		left = keys[KeyEvent.VK_A];
		right = keys[KeyEvent.VK_D];
	}
	
	public void keyPressed(KeyEvent event){
		keys[event.getKeyCode()] = PRESSED;
	}
	
	public void keyReleased(KeyEvent event){
		keys[event.getKeyCode()] = RELEASED;
	}

	public void keyTyped(KeyEvent event){
		keys[event.getKeyCode()] = TYPED;
	}

}
