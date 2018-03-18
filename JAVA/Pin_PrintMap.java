import java.util.*;

public class Pin_PrintMap {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int x = input.nextInt();
		int y = input.nextInt();
		int n = input.nextInt();
		char A[][]=new char[x][y];
		
		for (int r = 0; r < x; r++) {
			for (int c = 0; c < y; c++) {
				A[r][c] = '_';
			}
			System.out.println();
			}
		for (int i = 0; i < n; i++) {
			int a = input.nextInt();
			int b = input.nextInt();
			 A[a-1][b-1] = 'X';
		}
		
		for (int r = 0; r < x; r++) {
			for (int c = 0; c < y; c++) {
				System.out.print(A[r][c]);
			}
			System.out.println();
		}


}}