import java.util.*;
import java.io.*;

public class PrimeThread implements Runnable{
	
	int start;
	int stop;
	String file;
	boolean lead = false;
	
	public void run(){}
	
	public PrimeThread(int startVal, int stopVal, String filename, boolean isLead){
		
	}
	
	//Determines if a number is prime.
	public static boolean isPrime(int toTest){
		if(toTest == 2){
			return true;
		}
		
		for(int n=3; n<toTest; n+=2){
			if(toTest % n == 0){
				return false;
			}
		}
		return true;
	}
}
