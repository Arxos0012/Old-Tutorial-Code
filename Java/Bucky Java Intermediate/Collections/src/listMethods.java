import java.util.*;

public class listMethods {
	public static void main(String[] args) {
		
		//convert array to list
		String[] transport = {"car", "truck", "plane", "bike"};
		List<String> list1 = Arrays.asList(transport);
		
		ArrayList<String> list2 = new ArrayList<String>();
		list2.add("gmail");
		list2.add("google");
		list2.add("maps");
		
		for(String x: list2){
			System.out.printf("%s ", x);
		}
		
		Collections.addAll(list2, transport);
		//adds all elements of the second parameter to the first parameter
		
		System.out.println();
		
		for(String x: list2){
			System.out.printf("%s ", x);
		}
		System.out.println();
		
		/*********************/
		
		System.out.println(Collections.frequency(list2, "google"));
		//the frequency method returns how many times a element is found in a list
		
		boolean tof = Collections.disjoint(list1, list2);
		// the disjoint method returns "true" if the list being compared have no
		//elements in common
		
		if(tof){
			System.out.println("These lists have nothing in common");
		}else{
			System.out.println("These lists have at least one element in common.");
		}
		
		
	}
}
