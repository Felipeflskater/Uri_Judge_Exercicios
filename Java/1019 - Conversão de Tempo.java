import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
  Scanner input = new Scanner(System.in);
        	int N,m,s,h;
	        N=input.nextInt();
	        m = N/60;
	        s = N%60;
	        h = m/60;
	        m = m%60;
	        System.out.print(h+":"+m+":"+s+"\n");

     }
    }