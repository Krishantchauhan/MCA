
// Q6 - Create a Class “Person” and declare the following variable name (string) and save it in a file called “Person.java”. Create a Class called Employee that will inherit the Person Class , the other data members of Employee Class are AnnualSalary (double), YearOfJoininging (int) and MobileNumber (long). Your Class Should have the necessary constructors and the getter and the setter methods. Do create Class Test having main method to fully check your class definition.
import java.util.*;

class person {
    String name;

    void setname(String name) {
        this.name = name;
    }

    String getname() {
        return name;
    }

}

class Test {

    public static void main(String[] arg) {

        Scanner sc = new Scanner(System.in);
        employee e1 = new employee();

        System.out.println("Enter the Name ");
        e1.setname(sc.next());
        System.out.println("Enter the salary ");
        e1.setsal(sc.nextDouble());
        System.out.println("Enter the joinning year ");
        e1.setjoin(sc.nextInt());
        System.out.println("Enter the Mobile NO. ");
        e1.setmob(sc.nextLong());

        System.out.println(e1.getname());
        System.out.println(e1.getsal());
        System.out.println(e1.getjoin());
        System.out.println(e1.getmob());
    }
}