import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class calculator_sum_add extends JFrame implements ActionListener {
    private JTextField num1Field, num2Field, resultField;
    private JButton addButton, subtractButton;

    public calculator_sum_add() {
        // Set up the frame
        setTitle("Calculator");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(4, 2));

        // Create and add components to the frame
        JLabel num1Label = new JLabel("Number 1:");
        num1Field = new JTextField();
        JLabel num2Label = new JLabel("Number 2:");
        num2Field = new JTextField();
        JLabel resultLabel = new JLabel("Result:");
        resultField = new JTextField();
        resultField.setEditable(false);

        addButton = new JButton("Add");
        addButton.addActionListener(this);
        subtractButton = new JButton("Subtract");
        subtractButton.addActionListener(this);

        add(num1Label);
        add(num1Field);
        add(num2Label);
        add(num2Field);
        add(resultLabel);
        add(resultField);
        add(addButton);
        add(subtractButton);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == addButton) {
            int num1 = Integer.parseInt(num1Field.getText());
            int num2 = Integer.parseInt(num2Field.getText());
            int result = num1 + num2;
            resultField.setText(String.valueOf(result));
        } else if (e.getSource() == subtractButton) {
            int num1 = Integer.parseInt(num1Field.getText());
            int num2 = Integer.parseInt(num2Field.getText());
            int result = num1 - num2;
            resultField.setText(String.valueOf(result));
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            calculator_sum_add calculator = new calculator_sum_add();
            calculator.setVisible(true);
        });
    }
}
