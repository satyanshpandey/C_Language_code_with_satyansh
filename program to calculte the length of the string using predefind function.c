/*program to calculte the length of the string using predefind function*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[22];
	int i;
	printf("enter the value of the string");
	gets(s);
	i=strlen(s);
	printf("the length is:%d",i);
	getch();
}
