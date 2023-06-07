import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MouseListenerDemoApp extends JFrame implements MouseListener {
    private JLabel messageLabel;

    public MouseListenerDemoApp() {
        // Set up the frame
        setTitle("Mouse Listener Demo");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        // Create label to display mouse events
        messageLabel = new JLabel();

        // Add mouse listener to the frame
        addMouseListener(this);

        // Add label to the frame
        add(messageLabel);
    }

    public void mouseClicked(MouseEvent e) {
        messageLabel.setText("Mouse Clicked");
    }

    public void mousePressed(MouseEvent e) {
        messageLabel.setText("Mouse Pressed");
    }

    public void mouseReleased(MouseEvent e) {
        messageLabel.setText("Mouse Released");
    }

    public void mouseEntered(MouseEvent e) {
        messageLabel.setText("Mouse Entered");
    }

    public void mouseExited(MouseEvent e) {
        messageLabel.setText("Mouse Exited");
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            MouseListenerDemoApp mouseListenerDemoApp = new MouseListenerDemoApp();
            mouseListenerDemoApp.setVisible(true);
        });
    }
}
