import java.util.Scanner;

public class jagged {
    public static void main(String[] args) {
        int sum = 0;
        int a[][] = new int[3][];
        a[0] = new int[3];
        a[1] = new int[3];
        a[2] = new int[3];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < a[i].length; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] % 2 == 0) {
                    sum = sum + a[i][j];
                }
            }
        }
        System.out.println("The sum of even digit -" + sum);

    }
}