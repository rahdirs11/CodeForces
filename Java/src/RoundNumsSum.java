import java.util.List;
import java.util.Scanner;
import java.util.Vector;


public class RoundNumsSum {
    public static void printBinaryString(int number){
        List<Integer> binaryString = new Vector<Integer>();
        int len = Integer.valueOf(number).toString().length() - 1;
        int count = 0;
        while (true){
            int d = number % (int)Math.pow(10, len);
            if (d == 0){
                ++count;
                binaryString.add(number);
                // System.out.print(number + " ");
                break;
            } else if (d % 10 == d) {
                count += 2;
                binaryString.add(number-d);
                binaryString.add(d);
                // System.out.print(number-d + " " + d);
                break;
            } else {
                ++count;
                binaryString.add(number-d);
                // System.out.print((number-d) + " ");
                number -= (number-d);
                len = (Integer.valueOf(number)).toString().length() - 1;
            }
        }
        System.out.println(count);
        for (int bs: binaryString) System.out.print(bs + " ");
        System.out.println();

    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int test = scan.nextInt();
        scan.nextLine();
        while (test >= 1){
            printBinaryString(scan.nextInt());
            --test;
        }
    }
}
