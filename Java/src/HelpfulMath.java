import java.io.*;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Vector;

public class HelpfulMath {
    public static void main(String[] args) throws IOException{
        BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
        String input = buff.readLine();
        List<String> numbers = new Vector<>(Arrays.asList(input.split("\\+")));
        Collections.sort(numbers);
        for (int i = 0; i < numbers.size(); ++i)
            System.out.print(i != numbers.size() - 1? numbers.get(i) + "+": numbers.get(i));
    }
}
