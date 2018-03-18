public class NewClass1 {
	///ทำไม่ต้อง public คือเหมือนเราเปิดมันอนุญาติให้มันเข้าถึง
	public static void main(String args[]){
		Student stu = new Student(); ///คล้ายๆเหมือนตอนประกาศ _Scanner
		stu.printINFO();
		stu.setID("0748522");
		System.out.println(stu.getID); /// ไปดึงค่า  IDมาปิ้น
	}
}

class Student{
	
	private String name;
	private String ID;
	private int score;
	
	///Constructor method
	Student(){ ///ฟังก์ชันชื่อเดียวกับคลาส
		name = "None";
		ID = "NO_ID";
		score = 0; 
	}
	
	public setID(String str){
		ID=str;
	}
	public String getID(){
		return ID;
	}
	
	public void printINFO(){
		System.out.println(ID+" "+ name);
	}
}
