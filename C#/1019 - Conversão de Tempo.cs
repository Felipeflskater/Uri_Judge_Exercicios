using System; 

class URI {

    static void Main(string[] args) { 

     int N,m,s,h;
	   N = Convert.ToInt32(System.Console.ReadLine());
	   m = N/60;
	   s = N%60;
	   h = m/60;
	   m = m%60;
	   Console.Write(h+":"+m+":"+s+"\n");

    }

}