#include<stdio.h>
int main()
{
    int data,choice;
    printf("Select data bundle:\n1. 100MB @ 50ksh\n2. 500MB @ 200ksh\n3. 1GB @ 350ksh\n4. 2GB @ 600ksh\nchoice: ");
    scanf("%d",&choice);
  switch(choice){
    case 1:
      printf("You selected 100MB for 50 ksh.\n");
      break;
    case 2:
      printf("You selected 500MB for 200ksh.\n");
      break;
    case 3:
      printf("You selected 1GB for 350ksh.\n");
      break;
    case 4:
      printf("You selected 2Gb for 600ksh.\n");
      break;
    default:
      printf("Invalid choice. Please select valid option.\n");

    }
    return 0;
}
