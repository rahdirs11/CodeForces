import java.io.*;

public class PetyaStrings{
	private static final BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args)throws IOException{
		String a = buff.readLine().toLowerCase(), b = buff.readLine().toLowerCase();
		if (a.compareTo(b) > 0)
			System.out.println(1);
		else if (a.compareTo(b) < 0)
			System.out.println(-1);
		else System.out.println(0);
	}
}