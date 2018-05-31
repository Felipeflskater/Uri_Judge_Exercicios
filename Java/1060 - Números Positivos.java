import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
  Scanner input = new Scanner(System.in);
        float n;
	int i=0,cont=0;
        String temp;
	do{
		n = input.nextFloat();
		if(n>0){
		cont = cont+1;
		}
		i++;
	}while(i<6);
	System.out.print(cont+" valores positivos\n");
        }  
    }