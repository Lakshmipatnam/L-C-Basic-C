#include <stdio.h>
int main()
{
    char firstname[20], lastname[20];
    int dob;
    printf("Input your firstname: ");
    scanf("%s", firstname);
    printf("Input your lastname: ");
    scanf("%s", lastname);
    printf("Input your year of birth: ");
    scanf("%d", &dob);
    printf("%s %s %d", firstname, lastname, dob);
    return 0;
}
