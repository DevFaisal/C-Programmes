//Largest element in an Array
#include<stdio.h>
int main(){

    int arr[8]={1,3,5,7,-1,8,0,2};
    int lar = arr[0],i;

    for(i=0;i<=8;i++){

        if(arr[i]>lar)
        {
            lar = arr[i];
        }
    }
    printf("Largest element in an Array %d",lar);

	return 0;
}

