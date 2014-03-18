import java.io.PrintWriter;
import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
	static Scanner cin = new Scanner(System.in);
	static PrintWriter cout = new PrintWriter(System.out, true);

	public static void main(String[] args) 
	{
		BigDecimal a,c;
		int b;
		while (cin.hasNext()) 
		{
			a = cin.nextBigDecimal();
			b = cin.nextInt();
			c = a.pow(b);
			String ans = c.toPlainString();
			if (ans.contains(".") == false) 
			{
				cout.println(ans);
			} 
			else 
			{
				int x = 0, y = ans.length() - 1;
				while (ans.charAt(x) == '0') x++;
				while (ans.charAt(y) == '0') y--;
				if (ans.charAt(y) != '.') y++;
				cout.println(ans.substring(x, y));
			}

		}
	}
}
