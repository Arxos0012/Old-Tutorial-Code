package com.Numeral.Graphics;

public class Sprite {
	int x, y;
	public int[] pixels;
	private final int SIZE;
	SpriteSheet sheet;
	
	public static Sprite[] player = {new Sprite(SpriteSheet.player, 0,0,60), new Sprite(SpriteSheet.player, 1,0,60)};
	public static Sprite boosted = new Sprite(SpriteSheet.player, 2,0,120);
	
	public Sprite(SpriteSheet sheet, int x, int y, int size){
		this.sheet = sheet;
		this.x = x;
		this.y = y;
		this.SIZE = size;
		
		pixels = new int[SIZE*SIZE];
		
		load();
	}
	
	private void load(){
		for(int y=0; y<SIZE; y++){
			for(int x=0; x<SIZE; x++){
				pixels[x+y*SIZE] = sheet.pixels[((this.x*SIZE) + x) + ((this.y*SIZE) + y)*sheet.getSize()];
			}
		}
	}
	
	public int getSize(){
		return SIZE;
	}
}
