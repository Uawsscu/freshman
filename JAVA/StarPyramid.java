import java.util.Scanner;
public class StarPyramid {
public static void main(String[] args){
	Scanner input=new Scanner(System.in);
	int N=input.nextInt();
	for(int i=0;i<N;i++){
		for(int tab=N-1;tab>i;tab--){
			System.out.print(" ");
		}
		for(int dok=0;dok<(i*2)+1;dok++){
			System.out.print("*");
		}
		System.out.println();
	}
}
}

