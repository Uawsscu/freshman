import java.util.Scanner;
import java.util.ArrayList;
public class lotterry {
  public static void main(String[] args){
	  Scanner input = new Scanner(System.in);
	  int N = input.nextInt();
	  int A[][] = new int [N][];
	   int num;
	   int B[] = new int[N];
	  for(int i=0; i<N; i++){
		   num  = input.nextInt();
		   B[i] = num;
	     A[i] = new int[num];
		  for(int j=0; j<num; j++){
			  A[i][j] = input.nextInt();
		  }
	  }
	  int number;
	  int count=0;
  ArrayList<Integer> lotterry = new ArrayList<Integer>();
  do{
		  number = input.nextInt();
		  count++;
		 lotterry.add(number);
	  }while(number>0);
          lotterry.remove(count-1);
           int lot=0;
           int nub;
           int numbers;
          do{
        	  for(int a=0; a<lotterry.size(); a++){
        		  nub=0;
        	  for(int i=0; i<N; i++){
        		  for(int j=0; j<B[i]; j++){
        			  if(lotterry.get(a)==A[i][j]){
        				  nub++;
        				  number = i+1;
        			  }
        		  }
        	  }
        	  lot++;
        	  if(nub==1){
        		 System.out.println("Reward"+" "+number); 
        	  }else{
        		  System.out.println("Sorry");
        	  }
          } 
          }while(lot<lotterry.size());
  }
}
