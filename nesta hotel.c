#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct items{
    char item[100];
    float price;
    int quantity;
};
struct orders{
    char customer[100];
    char date[100];
    int itemsNo;
    struct items goods[50];

};
void createBillHeader(char name[100],char date[100]){
    FILE *fpointer;
    fpointer = fopen("invoice.txt","a");
        fprintf(fpointer,"\n\n");
        fprintf(fpointer,"\t  NESTA HOTEL");
        fprintf(fpointer,"\n\t ************");
        fprintf(fpointer,"\nDate:%s",date);
        fprintf(fpointer,"\nInvoice To: %s",name);
        fprintf(fpointer,"\n");
        fprintf(fpointer,"\n******************************************\n");
        fprintf(fpointer,"Items\t\t");
        fprintf(fpointer,"Quantity\t");
        fprintf(fpointer,"Total\t\t");
        fprintf(fpointer,"\n******************************************\n");
        fprintf(fpointer,"\n");
    fclose(fpointer);
}
void createBill(char item[100],int quantity,float price){
    FILE *fpointer;
    fpointer = fopen("invoice.txt","a");
    fprintf(fpointer,"%s\t\t",item);
        fprintf(fpointer,"%d\t\t",quantity);
        fprintf(fpointer,"%.2f\t\t",quantity * price);
        fprintf(fpointer,"\n");
}

void createBillFooter(float total){
    FILE *fpointer;
    fpointer = fopen("invoice.txt","a");
    fprintf(fpointer,"\n");
    float dis = 0 * total;
    if(total>5000)
    {
        dis = 0.05*total;
    }
    float netTotal = total - dis;
    float grandTotal =  netTotal + 2;
    fprintf(fpointer,"******************************************\n");
    fprintf(fpointer,"Total\t\t\t\t%.2f",total);
    fprintf(fpointer,"\nDiscount at 5%s\t\t\t%.2f","%",dis);
    fprintf(fpointer,"\n\t\t\t\t******");
    fprintf(fpointer,"\nNet Total\t\t\t%.2f",netTotal);
    fprintf(fpointer,"\n*****************************************\n");
    fprintf(fpointer,"\nGrand Total\t\t\t%.2f",grandTotal);
    fprintf(fpointer,"\n*****************************************\n");

}
int main()
{
    int d;
    do{
    FILE *fpointer;
    fpointer = fopen("invoice.txt","w");
    float total;
    struct orders ord;
    int choice,n;
    printf("********NESTA HOTEL*********");
    printf("\n\n 1.Generate Invoice ");
    printf("\n 2.Exit ");
    printf("\n\n Pick A Valid Option:");
    scanf("%d", &choice);
    fgetc(stdin);

    switch(choice){
    case 1:
        printf("\n Enter Customer Name: ");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1] = 0;
        strcpy(ord.date,__DATE__);
        printf("\n Enter The Number Of Items: ");
        scanf("%d", &n);
        ord.itemsNo = n;


        for(int i=0;i<n;i++){
            fgetc(stdin);
            printf("\n\n");
            printf("Enter The Item %d: ",i+1);
            fgets(ord.goods[i].item,100,stdin);
            ord.goods[i].item[strlen(ord.goods[i].item)-1]=0;
            printf("Enter The Quantity Of The Item: ");
            scanf("%d",&ord.goods[i].quantity);
            printf("Enter The Unit Price: ");
            scanf("%f",&ord.goods[i].price);
            total += ord.goods[i].quantity * ord.goods[i].price;



        }
        createBillHeader(ord.customer,ord.date);
        for(int i=0;i<ord.itemsNo;i++){
                createBill(ord.goods[i].item,ord.goods[i].quantity,ord.goods[i].price);
        }
        createBillFooter(total);

    }

    printf("\n\n");
    printf("Do you want to exit? \n 1. NO \t 2.YES");
    scanf("%d",&d);


    }while(d==1);

}
