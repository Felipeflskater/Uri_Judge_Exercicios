import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
         Scanner input =new Scanner(System.in);
         int N,X,S;
		 X= input.nextInt();
		    for (int i=0;i < X;i++){
			    S=0;
			    N=input.nextInt();
			for (int t=1;t < N;t++){
				if (N % t == 0){
				    S = S + t;
				}	
			}
			if (N == S){
			    System.out.print(N+" eh perfeito\n");
			}
			else{
			    System.out.print(N+" nao eh perfeito\n");
			}
		}
    }}