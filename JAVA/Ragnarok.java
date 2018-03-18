public class Ragnarok {

	static void printPlayer(Novice n) {
System.out.println("Name : "+n.getName());
System.out.println("Level : "+n.getLevel());
System.out.println("Exp : "+n.getExp());
System.out.println("Hp : "+n.getHp());
System.out.println("SP : "+n.getSP());
System.out.println("Atk : "+n.getAtk());
System.out.println("Def : "+n.getDef());
	}

	public static void main(String[] args) {
		
		Novice n1 = new Novice("UsslaJlwaJ");
printPlayer(n1);
	}
}

class Novice {
	String name;
	int level;
	int exp;
	int hp; // /เลือด
	int sp; // /พลัง
	int atk;
	int def;

	Novice(String name) {
		this.name = name;
		level = 1;
		hp = 50;
		sp = 20;
		atk = 25;
		def = 5;
	}
	public int getExp(){
	return exp;
	}
	public void setExp(int exp) {
		this.exp = exp;
	}

	public String getName() {
		return name;
	}

	// //
	public int getLevel() {
		return level;
	}

	public void setLevel(int level) {
		this.level = level;
	}

	// ///
	public int getHp() {
		return hp;
	}

	public void setHp(int hp) {
		this.hp = hp;
	}
	public int getSP() {
		return sp;
	}

	public void setSP(int hp) {
		this.sp = sp;
	}
	// ///
	public int getAtk() {
		return atk;
	}

	public void setatk(int atk) {
		this.atk = atk;
	}

	// ///
	public int getDef() {
		return def;
	}

	public void setDef(int def) {
		this.def = def;
	}
	
	
}
