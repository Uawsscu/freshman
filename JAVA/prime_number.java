import java.util.Scanner;
public class prime_number {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int N=input.nextInt();
		int c=0;
		for(int i=1;i<=100000;i++){
			if(N%i==0) c++;
		}
		if(c==2) System.out.print("Y");
		else System.out.print("N");
	}

}
