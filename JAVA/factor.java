import java.util.Scanner;
public class factor {
public static void main(String[] args){
	Scanner input=new Scanner(System.in);
	int N=input.nextInt();

	for(int i=1;i<=N;i++){
		int c=0;	
		if(N%i==0) {
			for(int j=1;j<=30000;j++){
				if(i%j==0) c++;
			}
			if(c==2) System.out.println(i+" Y");
			else System.out.println(i+" N");
		}

	}
	
}
}

