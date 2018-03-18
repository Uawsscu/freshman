import java.util.*;

public class Puzzle8Queen {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int[][] Table = new int[8][8];

		int[] X = new int[8];
		int[] Y = new int[8];
		for (int i = 0; i < 8; i++) {
			X[i] = -1;
			Y[i] = -1;
		}
		int x, y;
	for (int i = 1; i <=7; i++) {
			x = input.nextInt();
			y = input.nextInt();
			X[x-1] = 0;
			Y[y-1] = 0;
		}

		
		
		for (int i = 0; i <8; i++) {
			if(X[i]==Y[i]&&X[i]!=0)System.out.print("nowhere");
			else{if (X[i] == -1)
				System.out.print((i + 1) + " ");
			if (Y[i] == -1)
				System.out.print((i + 1) + " ");

		}
		}
	}

}
