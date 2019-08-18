/*write a program to find addition,subtraction,multiplication and division of two numbers*/
main()
{
	int a,b,add,sub,mul,div;
	printf("\n enter the value of the a and b:");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("\n your addition is the add=%d",add);
	sub=a-b;
	printf("\n your subtraction is the sub=%d:",sub);
	mul=a*b;
	printf("\n your multiplication is the mul=%d:",mul);
	div=a/b;
	printf("\n your division is the div=%d:",div);
	getch();
}
