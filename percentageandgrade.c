#include<stdio.h>
int main()
{
    int Physics, Chemistry, Biology, Mathematics,Computer,Percentage,aggregate_marks;
    printf("Marks for Physics");
    scanf("%d",&Physics);
    printf("Marks for Chemistry");
    scanf("%d",&Chemistry);
    printf("Marks for Biology");
    scanf("%d",&Biology);
    printf("Marks for Mathematics");
    scanf("%d",&Mathematics);
    printf("Marks for Computer");
    scanf("%d",&Computer);
    aggregate_marks=Physics+Chemistry+Biology+Mathematics+Computer;
     printf("aggregate_marks=%d\n",aggregate_marks);
     Percentage=aggregate_marks/5;
if(Percentage >= 90)
{
    printf("Grade A");
}
else if(Percentage >= 80)
    {
        printf("Grade B");
    }
    else if(Percentage >= 70)
    {
        printf("Grade C");
    }
    else if(Percentage >= 60)
    {
        printf("Grade D");
    }
    else if(Percentage >= 50)
    {
        printf("Grade E");
    }
    else
    {
        printf(" You percentage is less than 40 = Grade F");
    }
}
