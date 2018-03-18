import java.util.*;

public class ElectionVote {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int K = input.nextInt();
		int N = input.nextInt();
		int[] A = new int[N+1];
		
		for (int i = 1; i <= N; i++) {
			A[i] = input.nextInt();
		}
	
		int[] Teeb=new int[K+1];
		for(int i=1;i<=K;i++){
			Teeb[i]=i;
		}
		
		int[] G=new int[K+1];
		
		for(int i=1;i<=N;i++){
			for(int j=1;j<=K;j++){
				if(A[i]==Teeb[j]) G[j]++;
			}
		}
		
		for(int i=1;i<=K;i++){
			System.out.println((i)+" "+G[i]);
		}
	}
}
