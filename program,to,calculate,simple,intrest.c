//program to calculate the simple intrest :-
main()
{
	float principle,rate,time,simple_intrest;
	printf("enter principle amount:- ");
	scanf("%f",&principle);
	printf("enter the rate of the intrest:- ");
	scanf("%f",&rate);
	printf("enter the time in a year:- ");
	scanf("%f",&time);
	simple_intrest=(principle*rate*time)/100;
	printf("\n simple intrest=%2f",simple_intrest);
	
}
