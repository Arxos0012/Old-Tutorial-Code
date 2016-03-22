package com.Numeral.Graphics;

import com.Numeral.Graphics.Sprite;

public class Screen {
	private int width, height;
	public int[] pixels;
	
	public Screen(int width, int height){
		this.width = width;
		this.height = height;
		
		pixels = new int[width*height];
	}
	
	public void clear(){
		for(int i=0; i<pixels.length; i++){
			pixels[i] = 0;
		}
	}
	
	public void generateImage(){
		for(int y=0; y<height; y++){
			for(int x=0; x<width; x++){
				pixels[x+y*width] = 0xff0000ff;
			}
		}
	}
	
	public void drawPlayer(int playerX, int playerY, int imageWidth, Sprite currentSprite){
		int playerPixelColor = 0;
		for(int y=0; y<Sprite.player[0].getSize(); y++){
			for(int x=0; x<Sprite.player[0].getSize(); x++){
				playerPixelColor = currentSprite.pixels[x+y*currentSprite.getSize()];
				if(playerPixelColor != 0xffff00ff) pixels[(playerX+x)+(playerY+y)*imageWidth] = playerPixelColor;
			}
		}
	}
}
