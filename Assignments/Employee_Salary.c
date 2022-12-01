#include<stdio.h>
int main(){

	int BS, HRA, DA,Gross;
	printf("Enter the Base Salary of an Employee : ");
	scanf("%d",&BS);

	if(BS<1500){
		HRA = BS/100*10;
		DA = BS/100*90;
	}
	else
	{
		HRA = 500;
		DA = BS/100*90;
	}
	Gross = BS+HRA+DA;
	printf("Gross Salary of Employee is %d",Gross);
	getch();
	return 0;
}
