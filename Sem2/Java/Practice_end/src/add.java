import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class add {
    public static void main(String[] args) {
        Addition ob1=new Addition();

    }
}


class Addition extends JFrame implements ActionListener {
    JTextField t1,t2;
    JButton btn;
    JLabel l;

    Addition(){
        JLabel nm1=new JLabel("Num 1:");
        t1=new JTextField(5);
        JLabel nm2=new JLabel("Num 2:");
        t2=new JTextField(5);

        btn = new JButton("Sum");
        l=new JLabel("Result");
        add(t1);
        add(t2);
        add(btn);
        add(l);

        btn.addActionListener(this);

        setLayout(new FlowLayout());
        setVisible(true);
        setSize(400,400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        int num1=Integer.parseInt(t1.getText());
        int num2= Integer.parseInt(t2.getText());

        int sum=num1+num2;

        l.setText(sum+ "");
    }
}