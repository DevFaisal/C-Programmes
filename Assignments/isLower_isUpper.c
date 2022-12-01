#include<stdio.h>
int main()
{
	char x;
	printf("Enter a Char to Check Lower or Upper Case :");
	scanf("%c",&x);
	if(x>='A' && x<= 'Z')
		printf("Upper Case");
		
	else if(x>='a' && x<='z')
		printf("Lower Case");
		
	else if(x>=' ' && x<='`')
		printf("Special Symbol");

	getch();	
	return 0;
}
