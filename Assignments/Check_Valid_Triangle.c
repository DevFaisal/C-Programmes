#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the Angles of a Traingle\n : ");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x+y+z==180)
		printf("The Entered Traingle is Valid");
	else
		printf("The Entered Traingle is not Valid");
	
	getch();
	return 0;
}
