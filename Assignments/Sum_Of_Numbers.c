#include<stdio.h>
//Sum of Digits Using Recursion
int NumAdd(int);
int main(){
	
	int sum = NumAdd(12345);
	printf("Sum is %d",sum);
	
}

int NumAdd(int n){
	
	//Base Case
	if(n==0){
		return 0;
	}	
		return (n%10+NumAdd(n/10));
	}
	
	
