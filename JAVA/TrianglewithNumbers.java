import java.util.Scanner;
public class TrianglewithNumbers {
public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	int N=input.nextInt();
	for(int i=0;i<N;i++){
		for(int tab =N-1;tab>i;tab--)
			System.out.print(" ");
		int c=0;
		for(int one=i;one>0;one--){
			c++;
			System.out.print(c);
		}
		int New=i+1;
		System.out.print(New);
		for(int two=i;two>0;two--){
			New--;
			System.out.print(New);
		}
		System.out.println();
	}
}
}
