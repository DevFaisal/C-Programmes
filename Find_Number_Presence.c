#include<stdio.h>
int main()
{
	int arr[10];
	int i=0,find,temp=0;
	printf("Enter 10 numbers in an Aarray \n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	printf("Enter number which to find");
	scanf("%d",&find);
	
	for(i=0;i<10;i++){
		printf("Elements Entered : %d\n ",arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(find==arr[i]){
			temp++;
		}
		
	}
	printf("Number %d is %d times in it",find,temp);
}
