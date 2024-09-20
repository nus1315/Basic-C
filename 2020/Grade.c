#include <stdio.h>
#include <conio.h>
 main()
{
 int score;
 float GRADE;
printf("Input Score=");
scanf("%d",&score);
if(score>=80)
GRADE =4.0;
else if(score>=75)
GRADE =3.5;
else if(score>=70)
GRADE =3.0;
else if(score>=65)
GRADE =2.5;
else if(score>=60)
GRADE =2.0;
else if(score>=55)
GRADE =1.5;
else if(score>=50)
GRADE =1.0;
else GRADE =0;
printf("score =%d-->GRADE = %.2f",score,GRADE);
getch();
}