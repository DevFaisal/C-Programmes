#include<stdio.h>
//Factorial of a Number using Recursion
int fact(int);
int main(){
	
	int num = fact(5);
	printf("Fact is %d",num);
	
}

int fact(int n){
	
	//Base Case
	if(n==1){
		return 1;
	}
	else{
		return (n*fact(n-1));
	}	
	
}
