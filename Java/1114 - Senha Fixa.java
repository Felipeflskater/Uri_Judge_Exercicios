import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
         Scanner input =new Scanner(System.in);
         int senha;
             do{
                senha = input.nextInt();
             if (senha == 2002){
                System.out.print("Acesso Permitido\n");
             }else{
                System.out.print("Senha Invalida\n");
             }
            }
             while (senha != 2002);   
 }}