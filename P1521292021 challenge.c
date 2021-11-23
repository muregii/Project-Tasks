#include <stdio.h>
#include <stdlib.h>
    void main()
    {
        //Declaration of variables
        char employeeName[30];
        char payrollNumber[30];
        int amountOfSalesMade,commission,totalSalary,retailerAmount=25000;

        //Manager's data entry
        printf("\nEnter the name of the employee:\n");
        scanf("%[^\n]s",employeeName);
        getchar();
        printf("\nEnter the employee payroll number:\n");
        scanf("%[^\n]s",payrollNumber);
        getchar();
        printf("\nEnter the amount of sales the aforementioned employee made:\n");
        scanf("%d",&amountOfSalesMade);

        //Calculation of funds
        if(amountOfSalesMade<=10000000){
           commission=0.1*amountOfSalesMade;
        }//end if
        else if(amountOfSalesMade<=10000){
            commission=0.05*amountOfSalesMade;
        }
        else if (amountOfSalesMade<=5000){
            commission=0.03*amountOfSalesMade;
        }
        else if(amountOfSalesMade<=1000){
            commission=0.01*amountOfSalesMade;
        }
        else{
            printf("PLEASE ENTER THE CORRECT SALE NUMBER");
        }//end else

        //Salary calculations
        totalSalary=retailerAmount + commission;

        //Neat the output by clearing the entered data from the final output
        system("cls");

        //Printing of output
        printf("\n\t\t\t\tYOUR EMPLOYEE DETAILS ARE AS FOLLOWS.\n \nNAME \t\t\tPAYROLL NUMBER \t\tAMOUNT OF SALES \tCOMMISSION EARNED \tTOTAL SALARY \n%s \t\t%s \t\t%d \t\t\t%d \t\t\t%d",employeeName,payrollNumber,amountOfSalesMade,commission,totalSalary);











    }//end main
