import java.util.Scanner;
public class AddMenu {
public static void main(String[] args){
	int N;

	System.out.print("Add menu : ");
	Scanner input=new Scanner(System.in);
	N=input.nextInt();	
	int pay[]=new int[N];
	for(int i=0;i<N;i++){
		System.out.print("menu "+(i+1)+" : ");
		pay[i]=input.nextInt();
	}
	
	System.out.println("Start Menu");
	int x,y;
	int Bill=0;
	for(int i=0;i<N;i++){
		int sum=0;
		x=input.nextInt();
		y=input.nextInt();
		if(x==i+1) sum=y*pay[i];
		Bill+=sum;
	}
	System.out.print("Bill : "+Bill);
}
}
