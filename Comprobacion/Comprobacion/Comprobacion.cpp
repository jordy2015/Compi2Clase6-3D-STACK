// Comprobacion.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"


void imprimir(int x){
	int y = x;
	printf("%d\n",y);
	
}

void arreglo(){
	int array[2];
	array[0]=1;
	array[1]=2;
	int y=array[1];
	imprimir(y);
}

int suma(int x, int y){
	return x+y;
}

int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
} 

void main(){
	int x=5;
	imprimir(x);
	arreglo();
	
	x=suma(3,5);
	imprimir(x);
	x=factorial(5);
	imprimir(x);

	_gettch();
}




