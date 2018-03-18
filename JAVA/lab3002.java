import java.util.Scanner;
public class lab3002 {
public static void main(String[] args){
Scanner input=new Scanner(System.in);
float d,h;
float F;
d=input.nextFloat();
h=input.nextFloat();
F=(d*d)/(16*h);
System.out.print(F);
}
}
