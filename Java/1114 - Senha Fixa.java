import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
         Scanner input =new Scanner(System.in);
         int senha=0,log=2;
         senha = input.nextInt();
             do{
             if (senha == 2002){
                System.out.print("Acesso Permitido");
                log=1;
             }else{
                System.out.print("Senha Invalida");
                log=2;
             }
            }
             while (log == 2);   
 }}


 // não rolou