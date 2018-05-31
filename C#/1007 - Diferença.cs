using System; 

class URI {

    static void Main(string[] args) { 

         int a, b, c, d, diferenca;
            a = Convert.ToInt32(System.Console.ReadLine());
            b = Convert.ToInt32(System.Console.ReadLine());
            c = Convert.ToInt32(System.Console.ReadLine());
            d = Convert.ToInt32(System.Console.ReadLine());
            diferenca = a * b - c * d;
        Console.Write("DIFERENCA = "+ diferenca +"\n");

    }

}