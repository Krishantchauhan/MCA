import java.util.Scanner;

public class ncopy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String st = sc.nextLine();
        String firstTwoChars = st.substring(0, 2);
        String result = "";

        for (int i = 0; i < st.length(); i++) {
            result += firstTwoChars;
        }

        System.out.println("Output: " + result);
    }
}
