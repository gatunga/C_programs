#include<stdio.h>
int main()
{
    int age,inc;
    printf("Enter your age: ");
    scanf("%d",&age);

    if (age<21) {
        printf("Unfortunately, we are unable to offer you a loan at this time. ");
    }
        else {
        printf("Enter your annual income: ");
        scanf("%d",&inc);
        }
        if(inc<21000){
            printf("Unfortunately, we are unable to offer you a loan at this time. ");
        }
        else {
            printf("Congratulations, you qualify for the loan. ");
        }
    return 0;

}
