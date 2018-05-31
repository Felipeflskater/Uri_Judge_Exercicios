import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 

	int N1,N2,N3;
	Scanner input = new Scanner(System.in);
	N1=input.nextInt();
	N2=input.nextInt();
	N3=input.nextInt();
	if (N1 < N2 && N1 < N3){
		if (N2 < N3){
		    System.out.print(N1+"\n");
			System.out.print(N2+"\n");
			System.out.print(N3+"\n");
		}
		else if (N2 > N3){
			System.out.print(N1+"\n");
			System.out.print(N3+"\n");
			System.out.print(N2+"\n");
		}
		
	}
	else if (N1 > N2 && N2 < N3){
		if (N1 < N3){
			System.out.print(N2+"\n");
			System.out.print(N1+"\n");
			System.out.print(N3+"\n");
		}
		else if (N1 > N3){
			System.out.print(N2+"\n");
			System.out.print(N3+"\n");
			System.out.print(N1+"\n");
		}
		
	}
	else if (N1 > N3 && N2 > N3){
		if (N1 < N2){
		    System.out.print(N3+"\n");
			System.out.print(N1+"\n");
			System.out.print(N2+"\n");
		}
		else if (N1 > N2){
			System.out.print(N3+"\n");
			System.out.print(N2+"\n");
			System.out.print(N1+"\n");
		}
		
	}
	System.out.print("\n");
	System.out.print(N1+"\n");
	System.out.print(N2+"\n");
	System.out.print(N3+"\n");

 
    }
 
}