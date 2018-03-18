public class Method1 {
	public static String ID_Student(){
		return "123456";
	}
public static void printSomething(String str){ 
	System.out.println(str);
}
public static int summation(int a,int b){ ///รับค่า2ตัว
	return a+b;
}

public static void printName(){ ///เหมือนฟังก์ชัน
	System.out.println("Somsri 422R");
	}
public static void main(String[] args){
	printName(); ///เหมือนเรียกใช้ฟังก์ชัน
	System.out.println(ID_Student());
	printSomething("SC_SU");
	int sum = summation(5,10); ///ใส่2ตัว >>>ต้องใส่ตัวแปรแล้วปริ้นตัวแปร
	System.out.println("Score= "+sum);
}
}
