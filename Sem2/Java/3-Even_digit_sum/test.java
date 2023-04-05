// Q3 - Write a JAVA program to compute the sum of even digits in a 5 digit number.

class test {
    public static void main(String[] args) {
        int num, rem, sum = 0;
        num = Integer.parseInt(args[0]);
        int count = 0;
        while (num > 0) {
            rem = num % 10;
            if (count % 2 == 0)
                sum += rem;
            num = num / 10;
            count++;
        }
        System.out.println("Sum of even digits is " + sum);
    }
}
