#include <stdio.h>
#include <conio.h>
 int main()
 {
 	int i,n;
 	printf("master = ");
 	scanf("%d" ,&n);
 	for(i=1;i<=12;i++)
 	printf("\n%d x %d=%d" ,n,i,n*i);
 	getch();
 }