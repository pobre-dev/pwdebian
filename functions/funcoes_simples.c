#include <stdio.h>
#include <locale.h>

int soma_inteiros (int n1, int n2){
	int soma = 0;
	soma = n1+n2;
	return soma;
}

int main ()
{
	setlocale (LC_ALL,""); 

	int number1, number2, resultado;

	puts ("Informe dois números inteiros:");
	scanf ("%i %i", &number1, &number2);

	resultado = soma_inteiros (number1, number2);
	printf ("\n\nA soma entre %i e %i é %i.\n\n", number1, number2, resultado);

	return 0;

}
