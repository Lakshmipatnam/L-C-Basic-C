#include<stdio.h>
int main()
{
    int number,sum,a,b;
    printf("enter the value of A");
    scanf("%d",&a);
    printf("enter the value of B");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d",sum);
    if(sum==30)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    /*and return true if one of them is 30*/
    if(a==30 || b==30)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
