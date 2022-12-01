#include<stdio.h>
int main()
{
	int Year;
	printf("Enter the Year : ");
	scanf("%d",&Year);

	if(Year%4==0)
		printf("The Year %d is a Leap Year",Year);
	else
		printf("The Year %d is Not a Leap Year",Year);

	getch();
	return 0;
}

