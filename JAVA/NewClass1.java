public class NewClass1 {
	///������ͧ public �������͹����Դ�ѹ͹حҵ�����ѹ��Ҷ֧
	public static void main(String args[]){
		Student stu = new Student(); ///����������͹�͹��С�� _Scanner
		stu.printINFO();
		stu.setID("0748522");
		System.out.println(stu.getID); /// 仴֧���  ID�һ��
	}
}

class Student{
	
	private String name;
	private String ID;
	private int score;
	
	///Constructor method
	Student(){ ///�ѧ��ѹ�������ǡѺ����
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
