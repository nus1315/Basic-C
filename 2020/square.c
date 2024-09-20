#include<stdio.h>
#include<conio.h>
int main ()
{
	float W,L,R;
	printf(" Wide = ");
	scanf ("%f",&W);
	printf(" Long = ");
	scanf ("%f",&L);
	R=W*L;
	printf(" Rectangle = %.2f ",R);
	getch();
}