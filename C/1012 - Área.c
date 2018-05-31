#include <stdio.h>
int main(){
	double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
	scanf ("%lf",&A);
	scanf ("%lf",&B);
	scanf ("%lf",&C);
	TRIANGULO = A * C / 2;
	CIRCULO = 3.14159 * C * C;
	TRAPEZIO = ((A + B) * C)/2;
	QUADRADO = B * B;
	RETANGULO = A * B;
	printf ("TRIANGULO: %.3f",TRIANGULO);
	printf ("\n");
	printf ("CIRCULO: %.3f",CIRCULO);
	printf ("\n");
	printf ("TRAPEZIO: %.3f",TRAPEZIO);
	printf ("\n");
	printf ("QUADRADO: %.3f",QUADRADO);
	printf ("\n");
	printf ("RETANGULO: %.3f",RETANGULO);
	printf ("\n");
}