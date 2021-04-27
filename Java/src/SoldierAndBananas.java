import java.util.Scanner;

public class SoldierAndBananas {
    private static final Scanner scan = new Scanner(System.in);
    public static void main(String[] args){
        int k, n, w;
        k = scan.nextInt();
        n = scan.nextInt();
        w = scan.nextInt();
        long totalCost = 0;
        for (int i = 1; i <= w; ++i)
            totalCost += i * k;
        System.out.println(totalCost <= n? 0: (totalCost - n));
    }
}
