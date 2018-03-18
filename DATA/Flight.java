public class Flight {
	public static void main(String[] args) {

	}

}

class Flight2 {
	String FlightNo;
	String FlightDate;
	int MalePassenger;
	int FemalePassenger;
	int NoCrew;
	double LoadWeight;

	Flight2() {
		this.FlightNo = " ";
		this.FlightDate = " ";
		this.MalePassenger = 0;
		this.FemalePassenger = 0;
		this.NoCrew = 0;
		this.LoadWeight = 0.0;
	}

	Flight2(String flightNo, String flightDate, int malePassenger,
			int femalePassenger, int noCrew, double loadWeight) {
		FlightNo = flightNo;
		FlightDate = flightDate;
		MalePassenger = malePassenger;
		FemalePassenger = femalePassenger;
		NoCrew = noCrew;
		LoadWeight = loadWeight;
	}

	public void setValues(String FlightNo, String FlightDate,
			int MalePassenger, int FemalePassenger, int NoCrew,
			double LoadWeight) {
		this.FlightNo = FlightNo;
		this.FlightDate = FlightDate;
		this.MalePassenger = MalePassenger;
		this.FemalePassenger = FemalePassenger;
		this.NoCrew = NoCrew;
		this.LoadWeight = LoadWeight;
	}

	public void printFlight() {
		System.out.println("FlightNo : " + FlightNo);
		System.out.println("FlightDate : " + FlightDate);
		System.out.println("MalePassenger : " + MalePassenger);
		System.out.println("FemalePassenger : " + FemalePassenger);
		System.out.println("LoadWeight : " + LoadWeight);
		System.out.println("NoCrew : " + NoCrew);
		System.out.println(MalePassenger + FemalePassenger);
	}
}

class Airlines extends Flight2{
	
	public void addFlight(){
		
	}
}