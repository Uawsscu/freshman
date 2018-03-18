import java.util.Scanner;
public class TicTacToe {
  public static void main(String[] args) {
    char[][] table = new char[3][];
    for (int i=0;i<3;i++) table[i] = new char[3];
    for (int i=0;i<3;i++) 
      for (int j=0;j<3;j++) 
        table[i][j] = Integer.toString((i*3)+(j+1)).charAt(0);
    //---- print table
    for (int i=0;i<3;i++){
      for (int j=0;j<3;j++)
        System.out.print(table[i][j]+" ");
      System.out.println();
    }
    //---- print table        
    int player = 1;
    char symbol = 'X';
    int row,col,num;
    boolean flag = false; //no one win
    Scanner in = new Scanner(System.in);
    do{
      System.out.print("Player 1 choose 1-9:");
      num = in.nextInt(); 
      row = (num-1)/3; col = (num-1)%3;
      table[row][col] = symbol;
      //---- print table
      for (int i=0;i<3;i++){
        for (int j=0;j<3;j++)
          System.out.print(table[i][j]+" ");
        System.out.println();
      }
      //---- print table
      //---- check win or lost ----//
      //chk row 
      if ((table[row][0]==table[row][1])&&(table[row][1]==table[row][2]))
          flag = true; // end game
      //chk col
       
      //chk diagonal
       
      if (flag==true) {
        System.out.println("player "+player+" win"); 
      }
      else
      //---- change player ----//
      if (player == 1) {symbol = 'O'; player = 2;}
      else {symbol = 'X'; player = 1;}
    }while (flag==false);
  }
}

/* 5x5
 * a b c d e
 * f g h i j
 * k l m n o
 * p q r s t
 * u v w x y
 * แล้วผู้เล่นเลือกตัวอักษร แล้วใส่เลข 1 หรือ 2 ในช่องที่เลือกแทนเช่น
 * player1 select a จะแทนa ด้วยเลข 1
 * 1 b c d e*/
 */