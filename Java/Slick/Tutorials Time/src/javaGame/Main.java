package javaGame;

import org.newdawn.slick.*;
import org.newdawn.slick.state.*;

public class Main extends StateBasedGame{
	
	public static final String GAMENAME= "Comp Trials";
	public static final int MENU = 0, PLAY = 1;
	
	public Main(String gameName){
		super(gameName);
		this.addState(new Menu(MENU));
		this.addState(new Play(PLAY));
	}
	
	public static void main(String[] args){}
	
}
