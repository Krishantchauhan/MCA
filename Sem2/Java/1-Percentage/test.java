// Q1 - Akshay scored 45, 67, 98 and 70 marks in 4 subjects. Write a java code to
//  calculate his Average marks and percentage using Command line Arguments.


class test
	{
		public static void main(String[] args)
		{
			double sum=0;
			double per;
			for(int i=0;i<args.length; i++)
			{
				
				sum=sum + Integer.parseInt(args[i]);

			}
			per =(sum/400)*100;
			System.out.println("Percentage of 4 subject is : "+per);
		}
	}