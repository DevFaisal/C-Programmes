#include<stdio.h>
int main()
{
	int num,temp,ex;
	printf("Enter a Five Digit Number : ");
	scanf("%d",&num);
	printf("Number Entered is %d\n",num);
	ex = num;

	temp = num%10;  //5
	temp =temp*10;  //50
	num = num/10;   //1234

	temp = temp+num%10;  // 54
	temp = temp*10;      // 540
	num = num/10;       //123

	temp = temp+num%10;  //543
	temp = temp*10;      //5430
	num = num/10;        //12

	temp = temp+num%10;   //5432
	temp = temp*10;       //54320
	num = num/10;         //1

	temp = temp+num%10;   //54321

	printf("Reversed Number is %d\n",temp);

	if(ex==temp)
		printf("Original and Reverse are Same\n");
	else
		printf("Original and Reverse Not Same");

	getch();
	return 0;
}
