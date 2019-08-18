/*redius of circle in c language
program to muse of symbolic constant */
#include<stdio.h>
#include<conio.h>
int main()
{
	float r ,r1;
	const double PI=3.14;
	printf("\nenter the redius for circle=");
	scanf("%f",&r);
	r1=PI*r*r;
    printf("\n area of circle=%f",r1);
	getch();	
}
