#include <stdio.h>
void main()
{
    FILE *fpointer;
    fpointer = fopen("bank_details.txt","w");

    char rayNames[50];
    int Bal, accountNumber,pin,nationalID,Caccountnumber;

    printf("\n\t**ENTER YOUR BANK DETAILS HERE:");

            printf("\nEnter your name:");
            scanf("%[^\n]s",rayNames);

            printf("\nEnter your account number:\n");
            scanf("%d",&accountNumber);
            printf("\nConfirm your account number:\n");
            scanf("%d",&Caccountnumber);
            printf("\nEnter your National ID number:\n");
            scanf("%d",&nationalID);
            printf("\nEnter your pin:\n");
            scanf("%d",&pin);

    fprintf(fpointer,"\n\t ***YOUR NAMES*** \n %s \n ***ACCOUNT NUMBER*** \n %d \n ***NATIONAL ID No.*** \n %d \n ***PIN*** \n %d",rayNames,Caccountnumber,nationalID,pin);
    fclose(fpointer);


}
