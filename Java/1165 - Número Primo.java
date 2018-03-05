import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
         Scanner input =new Scanner(System.in);
         
         	int N,X,S;
		    X=input.nextInt();
		    for (int i=0;i < X;i++){
			    S=0;
			    N=input.nextInt();
			    for (int t=1;t <= N;t++){
				    if (N % t == 0){
			    	    S = S + 1;
				    }	
			    }
			    if (S == 2){
			        System.out.print(N+" eh primo\n");
			    }
		    	else{
			        System.out.print(N+" nao eh primo\n");
			    }
		    }
 }}