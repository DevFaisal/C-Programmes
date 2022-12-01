#include<stdio.h>
int main(){
	
	int num = 3;
	int num2 = 2;
	int res = Calculate(num,num2);
	printf("%d",res);

return 0;	
}

//Check EvenOdd Function
void isEven(int n){
	
	if(n%2==0)	{
		printf("Even\n");
			}
	else{
		printf("Odd\n");
	}
}









//Function to Check Palindrome Number
void CheckPal(int n){
	int temp = n;
	int PalNum = 0;
	while(n>0)
	{
	 int lastdigit = n%10;
	 PalNum = (PalNum*10)+lastdigit;
	 n = n/10;
	}
	if(temp == n){
		printf("Palindrome Number\n");
	}
	else{
		printf("Not a Palindrome Number\n");
	}
	
	
	
int Calculate(int n1, int n2){

	int choice = 0;
     
    printf("\nWhich operation you want to perform,\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
     
    switch (choice) {
      case 1:
        return n1+n2;
        break;
      case 2:
        return n1-n2;
        break;
      case 3:
        return n1*n2;
        break;
      case 4:
        return n1/n2;
        break;
      default:
        printf("Invalid choice");
    }
}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
