import java.util.Scanner;

public class Del {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the size of an Array ");
        n = sc.nextInt();
        int[] a = new int[n];
        System.out.println("Enter the Element of an Array ");
        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        int pos;

        System.out.println("Enter the position to delet ");
        pos = sc.nextInt();

        System.out.println("Before Deletion");
        for (int i = 0; i < n; i++)
            System.out.print(" " + a[i]);

        System.out.println("\nAfter Deletion");

        for (int i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        for (int i = 0; i < n - 1; i++)
            System.out.print(" " + a[i]);

    }
}
