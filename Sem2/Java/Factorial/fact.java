// Write a java program find factorial of a Number should be entered through command line

class fact {
    public static void main(String[] args) {
        int f = 1;
        int n = Integer.parseInt(args[0]);
        while (n > 0) {
        f = f * n;
        n--;
        }

        System.out.println("factorial: " + f);
    }
}