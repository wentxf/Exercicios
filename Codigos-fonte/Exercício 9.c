/*
	Leia uma temperatura em °C e apresente-a convertida em K.
	A fórmula de conversão é: K=C+273,15.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	float k,c;
	
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CP_UTF8);
	
	printf("Informe a temperatura em Celsius (°C): ");
	scanf("%f",&c);

	system("cls");
	
	k = c + 273.15;
		
	printf("%.2f°C = %.2fK\n\n",c,k);
	
	system("pause");
}