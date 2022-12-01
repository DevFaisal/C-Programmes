//Binary Search
#include<stdio.h>
int BinarySearch(int[],int,int);

int main(){
	
	int arr[]= {1,2,3,4,5,6,7,8};
	int key = 4;
	int len = 8;
	
	int res = BinarySearch(arr,key,len);
	printf("Found at %d",res);
	
}
int BinarySearch(int arr[],int key,int len){
		
		int start = 0;
		int end = len-1;
		
		while(start<=end){
			
			int mid = (start+end)/2;
			if(arr[mid]==key){
				return mid;
			}
			if(arr[mid]<key){
				start = mid+1;
			}
			else
			{
				end = mid-1;
			}
			
		}
		return -1;
	
}
