#include<stdio.h>
#include<conio.h>
int main ()
{
	float H,B,A;
	printf(" High = ");
	scanf ("%f",&H);
	printf(" Base = ");
	scanf ("%f",&B);
	A=0.5*H*B;
	printf(" Triangle = %.2f ",A);
	getch();
}