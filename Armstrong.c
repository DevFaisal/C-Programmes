#include<stdio.h>
int main()
{

    int a,b=1,c,sum,x;

    for(int i = 1;i<=300;i++){

    while(b<0)
        {

        b = a%10;
        c = b*b*b;
        sum = sum+c;
        a = a/10;
        }

        printf("%d Armstrong is %d\n",i,sum);

    }

    return 0;
}
