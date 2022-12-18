#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
#define M_PI 3.14
int main()
{ 
	setlocale(LC_ALL, "Rus");
	float x, y; 
	printf("Введите переменную x от [1;3]\n");
	scanf_s("%f", &x);
	printf(" ________________\n");
	printf("|   x   |   f(x) |\n");
	y = pow(x, 2) - cos(M_PI * x) * cos(M_PI * x);
	printf("|  %.2f |  %.2f  |\n", x, y);
	printf(" ----------------\n");
}
