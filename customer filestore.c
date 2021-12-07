#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int details()
{
    FILE *fpointer;
    fpointer = fopen("customer_details.txt","w");
    int price,x;

    char d,name,item[30];

    printf("\nENTER YOU NAME:");
    scanf("%s",&name);
    printf("\nENTER THE CUSTOMERS INVOICE DETAILS:");
    printf("\n\nEnter the number of products bought:\n");
    scanf("%d",&x);

    for(int i = 0;i < x; i++)
    {
        printf("\nEnter item %d:\n",i + 1);
        scanf("%s",&item);
        printf("\nEnter its price:\n");
        scanf("%d",&price);
    }
     printf("***DATE:\n");
    struct tm strtime;
    time_t timeoftheday;
    strtime.tm_year = 2021-1900;
    strtime.tm_mon = 10;
    strtime.tm_mday = 30;
    strtime.tm_hour = 11;
    strtime.tm_min = 30;
    strtime.tm_sec = 38;
    strtime.tm_isdst = 0;

    timeoftheday = mktime(&strtime);
    printf(ctime(&timeoftheday));


}
int main()
{

      int d;
       do{
      printf("OKAY",details());
      printf("\n Do you wish to continue to the next client? \n\n1. YES \n2. NO");
      scanf("%d",&d);

      }while(d==1);
}




