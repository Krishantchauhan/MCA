import java.util.Scanner;

public class pingen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your 3 tripple digit numbers:");
        int pin1 = sc.nextInt();
        int pin2 = sc.nextInt();
        int pin3 = sc.nextInt();

        int pin = 10000, mn = 0, mx = 0, flag = 0;
        int count = 1;
        while (flag < 3) {
            mx = Math.max(pin1 % 10, mx);
            mx = Math.max(mx, pin2 % 10);
            mx = Math.max(mx, pin3 % 10);
            mn = Math.min(pin1 % 10, pin2 % 10);
            mn = Math.min(pin3 % 10, mn);
            pin = pin + mn * count;
            pin1 = pin1 / 10;
            pin3 = pin3 / 10;
            pin2 = pin2 / 10;
            flag++;
            count *= 10;
        }
        pin = pin + mx * count;
        count *= 10;
        pin %= count;
        System.out.println(pin);
        // StringBuilder pins = new StringBuilder(String.valueOf(pin));
        // System.out.println("PIN: " + pins.reverse());
    }
}
