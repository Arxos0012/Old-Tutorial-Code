import java.util.*;
public class Main {
	public static void main(String[] args) {
		Stack<String> stack = new Stack<String>();	
		//Stacks are similar to lists and arrays, but elements are add/removed differently
		
		stack.push("bottom");	//push adds an element to the top of the stack
		printStack(stack);
		stack.push("second");
		printStack(stack);
		stack.push("third");
		printStack(stack);
		
		stack.pop();	//pop removes the topmost element from the stack
		printStack(stack);
		stack.pop();
		printStack(stack);
		stack.pop();
		printStack(stack);
	}

	private static void printStack(Stack<String> s){
		if(s.isEmpty()){
			System.out.println("The stack is empty.");
		}else{
			System.out.printf("%s TOP\n", s);
			//the "TOP" in the console marks that the top of the stack next to it
			//NEAT TRICK: you can pass an entire String stack in a printf function
		}
	}
}
