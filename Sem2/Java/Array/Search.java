import java.util.Scanner;

public class Search {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the size of an Array ");
        n = sc.nextInt();
        int[] a = new int[n];
        System.out.println("Enter the Element of an Array ");
        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        int key;

        System.out.println("Enter the element to Search ");
        key = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                System.out.println(key + " is Present at Position " + (i + 1));
                break;
            }
        }

    }
}
