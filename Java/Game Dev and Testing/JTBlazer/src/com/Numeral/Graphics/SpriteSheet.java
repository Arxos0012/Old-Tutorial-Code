package com.Numeral.Graphics;
import java.awt.image.BufferedImage;
import java.io.IOException;
import javax.imageio.ImageIO;

public class SpriteSheet {
	public int[] pixels;
	final int SIZE;
	String path;
	
	public static SpriteSheet player = new SpriteSheet("/sprites/player.png", 360);
	
	public SpriteSheet(String path, int size){
		this.path = path;
		this.SIZE = size;
		
		pixels = new int[SIZE*SIZE];
		load();
	}
	
	private void load(){
		try{
			BufferedImage image = ImageIO.read(SpriteSheet.class.getResource(path));
			int width = image.getWidth();
			int height = image.getHeight();
			image.getRGB(0, 0, width, height, pixels, 0, width);
		}catch(IOException ioe){
			ioe.printStackTrace();
		}
	}
	
	public int getSize(){
		return SIZE;
	}
}
