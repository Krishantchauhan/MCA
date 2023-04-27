import java.util.Scanner;

class cyclic {

    public static void main(String[] args) {
        int sum = 0;
        int count = 1;
        // int num = 12345;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number ");
        int num = sc.nextInt();
        int temp = num;

        // while (temp > 0) {
        // temp = temp / 10;
        // count = count * 10;
        // }

        // count = count / 10;
        // temp = num;

        // while (temp > 0) {
        // int rem = temp % 10;
        // sum += rem;
        // temp /= 10;
        // }

        // temp = num;
        // int sum2 = 0;
        // int sum3 = sum;

        // while (temp > 0) {
        // int rem = temp / count;
        // sum2 += rem;
        // sum = (sum + sum3) - sum2;
        // temp = temp % count;
        // count /= 10;
        // }

        int prod = 0;
        for (int i = 0; i < 5; i++) {
        int rem = num % 10;
        prod = prod + rem * rem;
        num /= 10;
        }

        System.out.println("The Sum is =" + prod);

    }

}