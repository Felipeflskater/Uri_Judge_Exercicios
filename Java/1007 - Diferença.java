import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
         Scanner input =new Scanner(System.in);
         int a, b, c, d, diferenca;
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            d = input.nextInt();
            diferenca = a * b - c * d;
        System.out.print("DIFERENCA = "+ diferenca +"\n");
 }}