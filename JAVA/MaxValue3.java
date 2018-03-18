import java.util.Scanner;
public class MaxValue3 {
public static void main(String[] args){
	System.out.print("Please enter 10 nubber");
	Scanner in = new Scanner(System.in);
	int[] number=new int[10];
	int[] maxValue=new int[3];
	for(int i=0;i<10;i++)
		number[i]=in.nextInt();
		int max,index;
		for(int K=0;K<3;K++){
			max=Integer.MIN_VALUE; index=-1;
			for(int i=0;i<10;i++){
				if(number[i]>max){
					max=number[i];
					index=i;
				}
			}
			maxValue[K]=max;
			number[index]=Integer.MIN_VALUE;
		}
	System.out.println("The 3 max value is ");
	for(int k=0;k<3;k++) System.out.print(maxValue[k]+" ");
}
}
