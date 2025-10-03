/*Name: Alex Gatunga 
    Reg no: PA106/G/2938/25
    Description: various inputs of the user*/
#include<stdio.h>
int main()
{
    float h;
    int choice;
    float bal;
    char phone;
    // input height
    printf("Enter your height: ");
    scanf("%f",&h);
    printf("height is in:\n1. Metres\n2. Centimetres\nchoice: ");
    scanf("%d",&choice);
    // input bank balance
    printf("Enter your bank balance: ");
    scanf("%f",&bal);
    // input phone number
    printf("Enter your phone number: ");
    scanf("%s",&phone);
    // print summary neatly
    printf("\nUser Details Summary\n");
    if(choice==1)
        printf("Height: %.2f metres\n",h);
    else if (choice==2)
        printf("Height: %.2f cm\n",h);
    else printf("Height: %.2f (unit not specified)\n",h);

    printf("Bank balance: %.2f ksh\n",bal);
    printf("Phone number: %s\n",phone);
    return 0;

}

