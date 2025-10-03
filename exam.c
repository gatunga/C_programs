#include<stdio.h>
int main()
{
    float marks,att;
    printf("Enter your attendance percentage: ");
    scanf("%f",&att);
    printf("Enter your marks: ");
    scanf("%f",&marks);
    if(att>=75&&marks>=40)
        printf("You are eligible for final exam.");
    else
        printf("You are NOT eligible for final exam.");
    return 0;
}
