class College
{
    /* Constructor */
    College()
    {
        System.out.println("College constructor executed");
    }
}

class Department extends College
{
    /* Constructor */

    Department()
    {
        super();
        System.out.println("Department constructor executed");
    }
}

class Student extends Department
{
    /* Constructor */
    Student()
    {
        super();
        System.out.println("Student constructor executed");
    }
}
public class test
{
    /* Driver Code */
    public static void main(String ar[])
    {
        /* Create instance of Student class */
        System.out.println("Order of constructor execution in Multilevel inheritance...");
        Student ob1=new Student();
    }
}