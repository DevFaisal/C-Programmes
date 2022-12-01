#include<stdio.h>
int main()

{
    int arr[5],i;
    printf("Enter the Elements in an Array: ");
    
	for(i=0;i<5;i++)
	{
        scanf("%d",&arr[i]);
    }

    for(i=5;i>=0;i--){
        printf("%d\n",arr[i]);
    }

    return 0;
}
