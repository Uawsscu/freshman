import java.util.Scanner;
public class Valentine {
public static void main(String[] args){
	Scanner input=new Scanner(System.in);
	int N=input.nextInt();
	if(N>0){
	for(int tab=N-1;tab>0;tab--){
		System.out.print(" ");
	}
	System.out.println("/"+"\\"+"/"+"\\");

//บน
	int T=N;
	for(int i=1;i<N;i++){
		for(int tab=N-1;tab>i;tab--){
			System.out.print(" ");
		}
		System.out.print("/");
		
		for(int tabM=N-2;tabM<T;tabM++){
			System.out.print("  ");
		}
		T++;
		System.out.println("\\");
	}
//ล่าง
	int h=N;
	for(int i=0;i<=N;i++){
		for(int tab1=0;tab1<i;tab1++){
			System.out.print(" ");
		}
		System.out.print("\\");
		
		for(int MidT=h;MidT>0;MidT--){
		System.out.print("  ");	
		}
		System.out.println("/");
		h--;
	}
	
	}
}
}
