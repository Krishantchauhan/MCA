import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RadioButtonDemoApp extends JFrame {
    private JLabel selectedLabel;

    public RadioButtonDemoApp() {
        // Set up the frame
        setTitle("Radio Button Demo");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        // Create radio buttons
        JRadioButton radioButton1 = new JRadioButton("Option 1");
        JRadioButton radioButton2 = new JRadioButton("Option 2");
        JRadioButton radioButton3 = new JRadioButton("Option 3");

        // Create button group
        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(radioButton1);
        buttonGroup.add(radioButton2);
        buttonGroup.add(radioButton3);

        // Create action listener for radio buttons
        ActionListener radioButtonListener = new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                JRadioButton selectedRadioButton = (JRadioButton) e.getSource();
                selectedLabel.setText("Selected: " + selectedRadioButton.getText());
            }
        };

        // Add action listener to radio buttons
        radioButton1.addActionListener(radioButtonListener);
        radioButton2.addActionListener(radioButtonListener);
        radioButton3.addActionListener(radioButtonListener);

        // Create label to display selected option
        selectedLabel = new JLabel("Selected: ");

        // Add components to the frame
        add(radioButton1);
        add(radioButton2);
        add(radioButton3);
        add(selectedLabel);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            RadioButtonDemoApp radioButtonDemoApp = new RadioButtonDemoApp();
            radioButtonDemoApp.setVisible(true);
        });
    }
}
