import java.util.Arrays;
import java.util.LinkedList;


public class Conversion {
	public static void main(String[] args) {
		String[] stuff = {"babies", "watermelons", "melons", "fudge"};
		LinkedList<String> thelist = new LinkedList<String>(Arrays.asList(stuff));
		//Arrays.asList sets "thelist" equal to the array "stuff" by treating it as one
		//LinkedList can only take collections in the parameter, which is why you use asList
		
		thelist.add("pumpkin");
		thelist.addFirst("FIRST!");	//adds value as the first value
		
		stuff = thelist.toArray(new String[thelist.size()]);
		//converts "thelist" back to an array
		
		for(String x: stuff){
			System.out.printf("%s ", x);
		}
	}
}
