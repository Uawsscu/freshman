import java.util.*;
import java.math.*;

public class hh {
	
	public static void main(String[] args) {

	}
}

class Triangle {
	double base;
	static double height;
	String title;
	boolean equalSide;
	double side;

	// //CONSTuC
	Triangle(double base, double height, String title) {
		base = this.base;
		height = this.height;
		title = this.title;
	}

	void Triangle(double base, double height) {
		base = this.base;
		height = this.height;
	}

	Triangle(double side, String title) {
		side = this.side;
		title = this.title;
	}

	Triangle(double side) {
		side = Math.sqrt(height - (base / 2) * (base / 2));
	}

	Triangle(String title) {
		title = this.title;
	}

	Triangle() {

	}

	// //
	public void setBase(double base) {
		this.base = base;
	}

	public void setHeight(double height) {
		this.height = height;
	}

	public void setBaseHeight(double base, double height) {
		this.base = base;
		this.height = height;
	}

	public void setSide(double side) {
		this.side = side;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public double getBase() {
		return base;
	}

	public double getHeight() {
		return height;
	}

	public double getSide() {
		return side;
	}

	public String getTitle() {
		return title;
	}

	public String toString() {
		return " ";
	}

	public boolean isEquilatera() {
		return false;
	}

	public double getAre() {
		return 0.5 * base * height;
	}
}


class TriangleSet{
	
}
