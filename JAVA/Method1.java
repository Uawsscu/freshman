public class Method1 {
	public static String ID_Student(){
		return "123456";
	}
public static void printSomething(String str){ 
	System.out.println(str);
}
public static int summation(int a,int b){ ///�Ѻ���2���
	return a+b;
}

public static void printName(){ ///����͹�ѧ��ѹ
	System.out.println("Somsri 422R");
	}
public static void main(String[] args){
	printName(); ///����͹���¡��ѧ��ѹ
	System.out.println(ID_Student());
	printSomething("SC_SU");
	int sum = summation(5,10); ///���2��� >>>��ͧ����������ǻ��鹵����
	System.out.println("Score= "+sum);
}
}
