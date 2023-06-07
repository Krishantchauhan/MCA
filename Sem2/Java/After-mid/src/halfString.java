public class halfString {
    public static String getFirstHalf(String str) {
        if (str.length() % 2 == 0) {
            return str.substring(0, str.length() / 2);
        } else {
            return null;
        }
    }

    public static void main(String[] args) {
        String input1 = "Krishant";
        String input2 = "Krisiya";

        String result1 = getFirstHalf(input1);
        String result2 = getFirstHalf(input2);

        System.out.println("Result 1: " + result1);
        System.out.println("Result 2: " + result2);
    }
}
