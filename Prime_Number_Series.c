#include<stdio.h>
#include<stdio.h>
int main()
{
 int i,a=1,count;
 printf("Prime numbers From 1 to 100 : \n");

  while(a <= 100)
  {
    count = 0;
    for(int i = 2;i<= a/2;i++)
    {
      if(a%i == 0)
      {
        count++;
        break;
      }
    }
    if(count == 0 && a != 1 )
    {
	printf(" %d ", a);
    }
    a++;
  }
  return 0;
}
