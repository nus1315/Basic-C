#include<stdio.h>
#include<conio.h>
int main ()
{
	float e,E,N;
	printf(" Unit Electriccity now = ");
	scanf ("%f",&e);
	printf(" Electriccity now = ");
	scanf ("%f",&N);
	E=(N-e)*5;
	printf(" Electriccity cost = %.2f ",E);
	getch();
}