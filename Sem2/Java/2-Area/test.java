// Q2 - Akshay wants to calculate the area of Square, Rectangle and Circle. 
// Create three different methods having same name calculateArea(). Take input from command line.


// Akshay want to calculate the area of three shape square, rectangle and triangle define three different method having same name i.e 
// CalculateArea()

class Area
	{

		void calculateArea(int s)
		{
			System.out.println("Area of Square "+(s*s));
		}
		void calculateArea(int l, int b)
		{
			System.out.println("Area of rectangle "+(l*b));
		}
		void calculateArea(double b,double h)
		{
			double res = 0.5*b*h;
			System.out.println("Area of triangle "+res);
		}
	}

class test 
{

	public static void main(String[] args)
	{
		Area obj1 =new Area();
		obj1.calculateArea(4);
		obj1.calculateArea(4,5);
		obj1.calculateArea(10.0,5.0);
	}
}