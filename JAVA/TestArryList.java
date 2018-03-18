import java.util.Scanner;
import java.util.ArrayList;
public class TestArryList {
public static void main(String[] args){
	Scanner input=new Scanner(System.in);
 System.out.print("Enter : ");
 int N=input.nextInt();
 
 int[][] A=new int[N][];

		 for(int i=0;i<N;i++){
			 A[i]=new int[i+1];
			 A[i][0]=i;
			 for(int j=0;j<i+1;j++)
				 A[i][j]=(i+1)*(j+1);
			 }
		 for(int i=0;i<N;i++){
		 for(int j=0;j<i+1;j++){
		 System.out.print(A[i][j]+" ");
		 
		 }System.out.println();
		 }
}
}