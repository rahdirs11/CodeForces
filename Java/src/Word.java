import java.util.Scanner;
public class Word {
    public static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        String s = scanner.nextLine().trim();
        int lowerCase = 0, upperCase = 0;
        for (int i = 0; i < s.length(); ++i) {
            char c = s.charAt(i);
            if (Character.isLowerCase(c)) {
                ++lowerCase;
            } else if (Character.isUpperCase(c)) {
                ++upperCase;
            }
        }
        System.out.println(lowerCase >= upperCase? s.toLowerCase(): s.toUpperCase());


    }
}
