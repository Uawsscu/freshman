import java.util.*;

public class Tree {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String ch = in.nextLine();
		for (int i = 0; i < ch.length(); i++) {
			ch.charAt(i);
		}

		Tree left = new Tree(ch.charAt(1), new Tree(ch.charAt(3)), new Tree(
				ch.charAt(4)));
		Tree right = new Tree(ch.charAt(2), new Tree(ch.charAt(5)), new Tree(
				ch.charAt(6)));
		Tree tree = new Tree(ch.charAt(0), left, right);
		tree.printPreOrder(tree);
		System.out.println();
		tree.printInOrder(tree);
		System.out.println();
		tree.printPostOrder(tree);
	}

	public char info = ' ';
	public Tree left = null;
	public Tree right = null;

	public Tree(char info, Tree left, Tree right) {
		this.info = info;
		this.left = left;
		this.right = right;
	}

	public Tree(char info) {
		this(info, null, null);
	}

	public Tree() {
		this(' ', null, null);
	}

	public void setInfo(char info) {
		this.info = info;
	}

	public void setLeft(Tree left) {
		this.left = left;
	}

	public void setRight(Tree right) {
		this.right = right;
	}

	public Object getInfo() {
		return this.info;
	}

	public Tree getLeft() {
		return this.left;
	}

	public Tree getRight() {
		return this.right;
	}

	public static void printPreOrder(Tree tree) {
		if (tree == null) { // empty tree
			System.out.print("-");
			return;
		}
		System.out.print(tree.getInfo());
		System.out.print(" ");
		printPreOrder(tree.getLeft());
		printPreOrder(tree.getRight());
		System.out.print(" ");
	}

	public static void printPostOrder(Tree tree) {
		if (tree == null) { // empty tree
			System.out.print("-");
			return;
		}
		System.out.print(" ");
		printPostOrder(tree.getLeft());
		printPostOrder(tree.getRight());
		System.out.print(" ");
		System.out.print(tree.getInfo());
	}

	public static void printInOrder(Tree tree) {
		if (tree == null) { // empty tree
			System.out.print("-");
			return;
		}
		System.out.print(" ");
		printInOrder(tree.getLeft());
		System.out.print(tree.getInfo());
		printInOrder(tree.getRight());
		System.out.print(" ");
	}
}
