
public class Main {
	public static void main(String[] args){
		
		String[] words = {"funk", "chunk", "furry", "baconator"};
		String s = "jabaribookerjabaribooker";
		String a = "Bacon ";
		String b = "monster";
		String c = "    Computational!   ";
		
		
		/**	startsWith **/
		
		//This is an enhanced for loop:
		//reads as for each string "w" in the array words, similar to python
		for(String w: words){
			if(w.startsWith("fu")){
				//the method "startsWith" checks to see if the beginning of a string start with the same characters
				//returns true or false
				System.out.println(w + " starts with fu");
			}
		}
		
		/**	endsWith **/
		for(String w: words){
			if(w.endsWith("unk")){
				//the method "endsWith" checks to see if the ending of a string ends with the same characters
				//returns true or false
				System.out.println(w + " ends with unk");
			}
		}
		
		/**	indexOf **/
		
		System.out.println(s.indexOf('r'));
		//indexOf returns the index of the first character(or part of the string) to match that in the parameters
		//within a string. if -1 is returned, then the character(s) are not found in the string, or at least not
		//in the same order typed
		
		System.out.println(s.indexOf('r', 5));
		//with a number as another parameter, it starts from than index and finds the next instance of the character
		
		/**	concat **/
		
		System.out.println(a.concat(b));
		//concatenates, or combines, two strings together
		
		/**	replace **/
		
		System.out.println(a.replace('B', 'F'));
		//replaces the character, or part of the string, in the first parameter with that of the second
		
		/**	toUpperCase and toLowerCase **/
		
		System.out.println(b.toUpperCase());
		System.out.println(b.toLowerCase());
		//takes no parameters, only changes all characters in the given string to uppercase or lowercase
		
		/**	trim **/
		
		System.out.println(c.trim());
		// removes all spaces from in front of or behind the whole string, nothing in between
	}
}
