import java.util.*;
import java.util.Scanner;

public class Random {
	public static void main(String[] arg){
		System.out.println("����µ���Ţ  : �س���͡�� 7 ����");
		System.out.println("�ӹǹ���������� 1 �֧ 100");
		Scanner input = new Scanner(System.in);
		int myNumber= 1+(int)(100*Math.random());
		int K=0;
		boolean correct =false;
		while (true){
			System.out.println("�ӹǹ����ͧ���  = ");
			int yourNumber =input.nextInt();
			correct =(yourNumber ==myNumber);
			if(!correct){
				if(yourNumber < myNumber)
					System.out.println("�ҡ����");
				else
					System.out.println("���¡���");
			}
			K++;
			if(correct || K==7) break;
		}
		if(correct)
			System.out.println("���ǵ��");
		else{
			System.out.println("�Դ�����Ѵ�ͧ");
			System.out.println("�ӹǹ���١��ͧ���"+myNumber);
		}
	}
}
