#include<stdio.h>
int main()
{
    float km , Meter , Feet , Inches , Centimeters ;
    printf(" Enter distance between two cities (in km.)");
    scanf("%f\n",&km);
    printf("Meter = %f\n",Meter);
    printf("Feet = %f\n",Feet);
    printf("Inches = %f\n",Inches);
    printf("Centimeters  = %f\n",Centimeters);
    Meter = km * 1000;
    Feet = km * 3280.84;
    Inches = km * 39370.1;
    Centimeters = km * 100000;
    return 0;
}
