import java.util.Scanner;
import java.util.List;
import java.util.Vector;

public class Plentiful {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int plentifulSum = 0;
        if (n >= 12) {
            List<Integer> plentifulCandidates = new Vector<>();
            for (int i = 12; i <= n; ++i)
                if (!isPrime(i))
                    plentifulCandidates.add(i);
            for (int i: plentifulCandidates)
                if (isPlentiful(i)) plentifulSum += i;
        }
        System.out.println(plentifulSum);
    }

    public static boolean isPrime(int n){
        for (int i = n / 2; i >= 2; --i)
            if (n % i == 0) return false;
        return true;
    }

    public static boolean isPlentiful(int n){
        int facSum = 0;
        for (int i = 1; i <= Math.floor(Math.sqrt(n)); ++i){
            if (n % i == 0){
                facSum += i;
                if (n / i != i && n / i <= n / 2)
                    facSum += n / i;
            }
        }
        return facSum > n;
    }


}
