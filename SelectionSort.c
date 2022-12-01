//Selection SORT
#include<stdio.h>
int main(){
	
	int arr[5]={6,5,4,-1,7};
	int i,j,temp;
	for(i=0;i<5;i++) 
	{
        int smallest = i;
            for (j = i + 1; j < 5; j++) //This loop will do the comparision
			{
                if (arr[smallest] > arr[j]) {
                    smallest = j;
                }
            }
        int temp = arr[smallest];   // This Statement will do the Swap funtion
        arr[smallest] = arr[i];
        arr[i] = temp;
	
    }
    
    for(i=0;i<5;i++)  //This will print the Reversed Array
	{
    	printf("Sorted Array is %d\n",arr[i]);
	}

 return 0;
}

