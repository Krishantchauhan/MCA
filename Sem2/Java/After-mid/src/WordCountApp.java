import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class WordCountApp extends JFrame implements ActionListener {
    private JTextArea textArea;
    private JLabel wordCountLabel, charCountLabel;

    public WordCountApp() {
        // Set up the frame
        setTitle("Word Count");
        setSize(500, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        // Create and add components to the frame
        textArea = new JTextArea();
        JButton countButton = new JButton("Count");
        countButton.addActionListener(this);

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(countButton);

        wordCountLabel = new JLabel("Word Count: 0");
        charCountLabel = new JLabel("Character Count: 0");

        add(textArea, BorderLayout.CENTER);
        add(buttonPanel, BorderLayout.SOUTH);
        add(wordCountLabel, BorderLayout.WEST);
        add(charCountLabel, BorderLayout.EAST);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("Count")) {
            String text = textArea.getText();
            int wordCount = 0;
            int charCount = text.length();

            if (!text.trim().isEmpty()) {
                wordCount = text.trim().split("\\s+").length;
            }

            wordCountLabel.setText("Word Count: " + wordCount);
            charCountLabel.setText("Character Count: " + charCount);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            WordCountApp wordCountApp = new WordCountApp();
            wordCountApp.setVisible(true);
        });
    }
}
