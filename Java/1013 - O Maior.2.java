import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        int v1,v2,v3,a,b,maiorab;
        v1=input.nextInt();
        v2=input.nextInt();
        v3=input.nextInt();
        a=v1;
        b=v2;
        maiorab=(a+b+(Math.abs(a-b)))/2;
        a=maiorab;
        b=v3;
        maiorab=(a+b+(Math.abs(a-b)))/2;
        System.out.print(maiorab+" eh o maior\n");
    }
}