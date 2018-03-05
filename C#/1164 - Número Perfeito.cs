using System; 

class URI {

    static void Main(string[] args) { 

        int N,X,S;
		 X= Convert.ToInt32(System.Console.ReadLine());
		    for (int i=0;i < X;i++){
			    S=0;
			    N=Convert.ToInt32(System.Console.ReadLine());
			for (int t=1;t < N;t++){
				if (N % t == 0){
				    S = S + t;
				}	
			}
			if (N == S){
			    Console.Write(N+" eh perfeito\n");
			}
			else{
			     Console.Write(N+" nao eh perfeito\n");
			}
		}

    }

}