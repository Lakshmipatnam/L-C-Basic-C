#include<stdio.h>
int main()
{
    int number,sum,first_number,second_number;
    printf("enter the value of first_number");
    scanf("%d",&first_number);
    printf("enter the value of second_number");
    scanf("%d",&second_number);
    sum=first_number+second_number;
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
    if(first_number==30 || second_number==30)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
