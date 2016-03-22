import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;

public class ArrayList_and_Iterator {
	public static void main(String[] args){
		String[] things = {"eggs", "laser", "hats", "pie"};
		String[] morethings = {"laser", "pie"};
		
		//lists are similar to array, but do not require a set limit of items,
		//this can be determined later
		List<String> list1 = new ArrayList<String>();
		List<String> list2 = new ArrayList<String>();
		
		//add array items to list
		
		/****************************************/
		for(String x: things){
			list1.add(x);	//adds an object to the list
		}
		
		for(String y: morethings){
			list2.add(y);
		}
		
		
		/****************************************/
		for(int i=0; i<list1.size(); i++){
			System.out.printf("%s ", list1.get(i));
			//get returns a specific value from a list
			//just type in the index of the desired value
		}
		
		System.out.println();
		
		for(int i=0; i<list2.size(); i++){
			System.out.printf("%s ", list2.get(i));
		}
		
		
		/****************************************/
		editlist(list1, list2);
		System.out.println();
		for(int i=0; i<list1.size(); i++){
			System.out.printf("%s ", list1.get(i));
		}
	}
	
	public static void editlist(Collection<String> l1, Collection<String> l2){	//list extends Collection
		Iterator<String> it = l1.iterator();	//collection specially designed for loops
		while(it.hasNext()){
			//has next will check if there is still a value to left in the iteration that hasn't gone through the loop
			if(l2.contains(it.next())){
				it.remove();}
			//if l2 contains the value from it (or l1), the computer will remove that value
		}
	}
}
