
public class Main {
	public static void main(String[] args){
		System.out.println(fact(5));
	}
	
	//Recursion the reference of a method, back to itself until it can reach a stopping point
	public static long fact(long n){
		if(n <= 1){
			return 1;//1! = 1, 0! = 1 :P
		}else{
			return n*fact(n-1);
			/*when the code reaches this point, it multiplies the given number times
			 *the factorial of one less than itself, and again and again until it reaches 1
			 */
		}
	}
}
