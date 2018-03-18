import java.util.Scanner;
public class GPA{
public static void main(String[] args){
	Scanner input=new Scanner(System.in);
	int N=input.nextInt();
	int A[]=new int[N];
	int B[]=new int[N];
	float SumScore=0;
	int sumA=0;
	for(int i=0;i<N;i++){
	float sumAB=0;	
		A[i]=input.nextInt();
		B[i]=input.nextInt();
		sumAB=A[i]*B[i];
		SumScore+=sumAB;
		sumA+=A[i];
	}
	float GPA=0;
	GPA=SumScore/sumA;
	System.out.print(sumA+" ");
	System.out.printf("%.2f",GPA);
}
}