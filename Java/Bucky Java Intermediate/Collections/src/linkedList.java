import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

/*linkedlists are lists just like arraylists, but they have a few exclusive
 *methods*/

public class linkedList {
	
	public static void main(String[] args){
		String[] things = {"apples", "noobs", "pwnge", "bacon", "goats"};
		String[] things2 = {"sausage", "bacon", "goats", "harrypotter"};
		
		List<String> list1 = new LinkedList<String>();
		List<String> list2 = new LinkedList<String>();
		
		for(String x: things){
			list1.add(x);
		}
		
		for(String y: things2){
			list2.add(y);
		}
		
		list1.addAll(list2);
		/*adds all elements of the list in the parameter and adds them to
		list1*/
		
		list2 = null;
		
		printMe(list1);
		removeStuff(list1, 2, 5);
		printMe(list1);
		reverseMe(list1);
	}

	private static void printMe(List<String> l) {
		for(String b : l){
			System.out.printf("%s ",b);
		}
		
		System.out.println();
	}
	
	private static void removeStuff(List<String> l, int from, int to) {
		l.subList(from, to).clear();
		//sublist get values from the first parameter to the second
		//clear removes a value(s) from a list
	}
	
	private static void reverseMe(List<String> l) {
		ListIterator<String> jabber = l.listIterator(l.size());
		//similar to a normal iteration, but this is for linkedlist only
		//the parameter tells to what point do you want the iterator to add the values of the list
		
		while(jabber.hasPrevious()){	//similar to hasNext, but goes backwards through the list
			System.out.printf("%s ", jabber.previous());	//similar to next, but in reverse order
		}
	}
	
}
