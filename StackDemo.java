import java.util.Stack;

public class StackDemo {

	public static void main(String[] args) {

		Stack<Integer> s = new Stack();
        Stack<Character> sc = new Stack(); 
        Stack<String> sstr = new Stack(); 
        
        // Stack<int> sc = new Stack(); 
        

		s.push(10);
		s.push(20);
//		s.push("ram");

		System.out.println(s.size());// total number of elements
		System.out.println(s.peek());// top -> 20

		System.out.println("pop =>" + s.pop()); // 20
		System.out.println(s.size());// total number of elements
		System.out.println(s.peek());// top -> 20

		s.push(30);
		s.push(40);

		System.out.println(s);

	}

}

//LiFo 
//stack top push pop --> 
//java --> Stack --> logic  