#include<stdio.h>
int main()
{
    float unit,bill;
    printf("Enter number of water units consumed: ");
    scanf("%f",&unit);
    if(unit>60){
        bill=unit*30;
        printf("Total bill: %f\n ksh",bill);
    }
        else if(unit>30){
        bill=unit*25;
        printf("Total bill: %f\n ksh",bill);
        }
        else {
        bill=unit*20;
        printf("Total bill: %f\n ksh",bill);
        }
        return 0;

}
