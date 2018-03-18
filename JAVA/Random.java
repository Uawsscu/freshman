import java.util.*;
import java.util.Scanner;

public class Random {
	public static void main(String[] arg){
		System.out.println("เกมทายตัวเลข  : คุณมีโอกาส 7 ครั้ง");
		System.out.println("จำนวนอยู่ระหว่า 1 ถึง 100");
		Scanner input = new Scanner(System.in);
		int myNumber= 1+(int)(100*Math.random());
		int K=0;
		boolean correct =false;
		while (true){
			System.out.println("จำนวนที่ต้องการ  = ");
			int yourNumber =input.nextInt();
			correct =(yourNumber ==myNumber);
			if(!correct){
				if(yourNumber < myNumber)
					System.out.println("มากกว่า");
				else
					System.out.println("น้อยกว่า");
			}
			K++;
			if(correct || K==7) break;
		}
		if(correct)
			System.out.println("ถั่วต้ม");
		else{
			System.out.println("ผิดอยู่สัดตอง");
			System.out.println("จำนวนที่ถูกต้องคือ"+myNumber);
		}
	}
}
