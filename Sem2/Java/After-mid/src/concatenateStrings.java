public class concatenateStrings {
    public static String concatenate(String str1, String str2) {
        String result = str1 + str2;

        if (result.length() >= 2 && result.charAt(0) == result.charAt(1)) {
            return result.substring(1).toLowerCase();
        } else {
            return result.toLowerCase();
        }
    }

    public static void main(String[] args) {
        String input1 = "Kris";
        String input2 = "hant";

        String result = concatenate(input1, input2);

        System.out.println("Result: " + result);
    }
}
