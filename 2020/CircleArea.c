#include<stdio.h>
#include<conio.h>
int main ()
{
	float R,A;
	printf(" radius = ");
	scanf ("%f",&R);
	A=3.14*R*R;
	printf(" Area = %.2f ",A);
	getch();
}