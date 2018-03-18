import java.util.Scanner;

public class Test3 {
	public static void main(String[] ags) throws Exception {
		Scanner in = new Scanner(System.in);

		String ch = in.nextLine();

		Stack s1 = new Stack();
		for (int i = 0; i < ch.length(); i++) {
			char x = ch.charAt(i);

			if (x == '(' || x == '[' || x == '{') {
				s1.push(x);
			} else if (x == ')' || x == ']' || x == '}') {
				if (s1.isEmptyStack()) {
					s1.push(x);
				} else {
					char y = (char) s1.peek();
					s1.pop();
					if (y == '(' && x != ')')
						throw new Exception("Error");

					if (y == '[' && x != ']')
						throw new Exception("Error");

					if (y == '{' && x != '}')
						throw new Exception("Error");
				}
			}
		}
		if (s1.isEmptyStack())
			System.out.println("the symbols are balanced otherwise ");
		else
			System.out.println("(error) the symbols are not balanced");
	}

}

class Stack {

	private int maxStackSize = 100;
	private int stackTop = 0;
	private Object[] list;

	public Stack() {
		list = new Object[maxStackSize];
	}

	public Stack(int size) {
		list = new Object[size];
		maxStackSize = size;
	}

	public void initializeStack() {
		for (int i = 0; i < stackTop; i++)
			list[i] = null;
		stackTop = 0;
	}

	public boolean isEmptyStack() {
		return (stackTop == 0);
	}

	private boolean isFullStack() {
		return false;
	}

	public void push(Object newItem) throws Exception {
		if (isFullStack())
			throw new Exception("StackOverflow");
		list[stackTop] = newItem;
		stackTop++;
	}

	public Object peek() throws Exception {
		if (isEmptyStack())
			throw new Exception("StackUnderflow");
		return list[stackTop - 1];
	}

	public void pop() throws Exception {
		if (isEmptyStack())
			throw new Exception("StackUnderflow");
		stackTop--;
		list[stackTop] = null;
	}

	public int getSize() {
		return stackTop;
	}

	public int getMaxSize() {
		return maxStackSize;
	}
}
