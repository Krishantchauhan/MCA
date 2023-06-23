import javax.swing.*;
import java.awt.*;
import java.util.Locale;

public class ra {
    public static void main(String[] args) {
//        Radiodemo ob1=new Radiodemo();
//        String n1="Kri";
//        String n2="Siya";
//        String name=n1+n2;
//        System.out.println(name.toLowerCase());
    }
}

class Radiodemo extends JFrame{
    JRadioButton r1,r2;
    Radiodemo(){
        r1= new JRadioButton("Male");
        r2= new JRadioButton("FeMale");
        ButtonGroup bg =new ButtonGroup();
        bg.add(r1);
        bg.add(r2);
        add(r1);
        add(r2);

        setVisible(true);
        setSize(400,400);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

}
