import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class NextRound {
    private static Scanner scan = new Scanner(System.in);
    public static void main(String[] args){
        int n = scan.nextInt(), k = scan.nextInt();
        scan.nextLine();
        List<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; ++i)
            arr.add(scan.nextInt());
        int atK = arr.get(k-1);
        if (atK == 0){
            int firstOccurrence = arr.indexOf(atK);
            System.out.println(firstOccurrence);
        } else
            System.out.println(arr.lastIndexOf(atK) + 1);
    }
}
