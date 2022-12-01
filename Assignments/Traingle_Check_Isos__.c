#include<stdio.h>
int main()
{
	int x,y,z,temp;
	printf("Enter the Three Side of a Traingle\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x==y && y==z)
		printf("Equilateral Traingle");
	else if(x==y || x==z || y==z)
		printf("Isosceles Traingle");

	else if (x>y&&x>z)
		if (x*x == y*y + z*z)
			printf("Right Angled Traingle");
	
	else if (y>x&&y>z)
		if (y*y == x*x + z*z)
			printf("Right Angled Traingle");
	
	else if (z>x&&z>y){
		if (z*z == x*x + y*y)
			printf("Right Angled Traingle");
	}
	


getch();
return 0;
}
