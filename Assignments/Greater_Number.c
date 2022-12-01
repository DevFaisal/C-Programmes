#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter Three Numbers \n");
	scanf("%d%d%d",&x,&y,&z);
	
	if (x>y && x>z)
		 printf("%d is the Greater Number from %d %d %d",x,x,y,z);
	else if(y>x && y>z)
		printf("%d is the Greater Number from %d %d %d",y,x,y,z);
	else if (z>x && z>y)
		printf("%d is the Greater Number from %d %d %d",z,x,y,z);
	else if (x==y && x==z)
		printf("The Entered Number are Same");
	getch();
	return 0;
}
