#include<stdio.h>
#include<conio.h>
int main ()
{
	float C,P,R,E,M,B;
	printf(" PENCIL = ");
	scanf ("%f",&C );
	printf("PEN = ");
	scanf ("%f",&P );
	printf(" RULER = ");
	scanf ("%f",&R );
	printf(" ERASER= ");
	scanf ("%f",&E );
	printf(" BOOK = ");
	scanf ("%f",&B );
	M=((5*C)+(7*P)+(10*R)+(5*E)+(10*B));
	printf(" TOTAL PRICE  = %.2f ",M);
	getch();
}