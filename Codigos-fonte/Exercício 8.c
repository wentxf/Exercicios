/*
	Leia uma temperatura em K e apresente-a convertida em °C.
	A fórmula de conversão é: C=K-273,15.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float c,k;
	
	UINT cpage_utf8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a temperatura em Kelvin (K): ");
	scanf("%f",&k);
	
	c=k-273.15;
	
	system("cls");
	
	printf("%.2fK = %.2f°C\n\n",k,c);
	
	system("pause");
}