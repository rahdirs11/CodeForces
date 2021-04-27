import java.util.Scanner;

public class Username {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; ++i) {
            a[i] = scan.nextInt();
        }
        System.out.println(amazingPerformance(a));
        scan.close();
    }

    public static int amazingPerformance(int[] a) {
        int count = 0, best = -1, worst = -1;
        int i = 1;
        while (i < a.length && a[i] == a[0]) {
            ++i;
        }
        while (i < a.length) {
            if (best == -1) {
                if (a[i] > a[0]) {
                    best = a[i];
                    worst = a[0];
                } else {
                    best = a[0];
                    worst = a[i];
                }
                ++count;
            } else if (a[i] > best) {
                best = a[i];
                ++count;
            } else if (a[i] < worst) {
                worst = a[i];
                ++count;
            }
            ++i;
        }
        return count;
    }
}