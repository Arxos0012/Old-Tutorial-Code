import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Sorting {
	public static void main(String[] args) {
		String[] random = {"computers", "neutrinos", "origami", "gamma", "log"};
		List<String> list = Arrays.asList(random);
		
		Collections.sort(list);	//sorts the list in alphabetical/numerical order		
		System.out.printf("%s\n", list);
		
		Collections.sort(list, Collections.reverseOrder());	//sorts the list in the opposite order
		System.out.printf("%s\n", list);
		
		/*this is ment to show collection that the Collection class has useful methods that cannot
		 * be performed on arrays*/
	}
}
