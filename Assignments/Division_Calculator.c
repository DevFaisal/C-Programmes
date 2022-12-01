#include<stdio.h>
int main(){
	
	float per;
	printf("Enter the Percentage Obatained : ");
	scanf("%f",&per);
	
	if(per>=60)
		printf("First Division");
	else if (per>=50 && per<=59)
		printf("Second Division");
	else if (per>=40 && per<49)
		printf("Third Division");
	else 
		printf("Failed");
		
	getch();	
	return 0;
	
}
