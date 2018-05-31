#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
	cin >> A >> B >> C;
	TRIANGULO = A * C / 2;
	CIRCULO = 3.14159 * C * C;
	TRAPEZIO = ((A + B) * C)/2;
	QUADRADO = B * B;
	RETANGULO = A * B;
	printf ("TRIANGULO: %.3f",TRIANGULO);
	cout << endl;
	printf ("CIRCULO: %.3f",CIRCULO);
	cout << endl;
	printf ("TRAPEZIO: %.3f",TRAPEZIO);
	cout << endl;
	printf ("QUADRADO: %.3f",QUADRADO);
	cout << endl;
	printf ("RETANGULO: %.3f",RETANGULO);
	cout << endl;
}