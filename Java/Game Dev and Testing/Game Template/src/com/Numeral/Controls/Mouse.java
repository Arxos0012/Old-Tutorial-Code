package com.Numeral.Controls;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;


public class Mouse implements MouseListener{
	private boolean[] buttons = new boolean[2];
	public boolean M1, M2;
	private final boolean PRESSED = true, RELEASED = false, CLICKED = true;
	
	
	public void updateMouse(){
		M1 = buttons[MouseEvent.BUTTON1];
		M2 = buttons[MouseEvent.BUTTON2];
	}
	
	public void mouseClicked(MouseEvent event){
		buttons[event.getButton()] = CLICKED;
	}
	
	public void mouseEntered(MouseEvent event){}

	public void mouseExited(MouseEvent event){}

	public void mousePressed(MouseEvent event){
		buttons[event.getButton()] = PRESSED;
	}

	public void mouseReleased(MouseEvent event){
		buttons[event.getButton()] = RELEASED;
	}
	
}
