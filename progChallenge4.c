#include<stdio.h>
#define MAX_LIMIT 50

struct newBooks
{
    char bookTitle[50];
    char author[50];
    int Quantity;
    int price;

};

int main()
{

    int d,j,i;
    struct newBooks details;
    do{
    printf("\nEnter the quantity of books to be entered:\n");
    scanf("%d",&j);
    for(int i=0;i<j;i++)
    {

    printf("\nEnter the title of book %d:\n",i+1);
    fgets(details.bookTitle, MAX_LIMIT, stdin);
    scanf("%s",details.bookTitle);
    printf("\nEnter the name of the Author:\n");
    fgets(details.author, MAX_LIMIT,stdin);
    scanf("%[^\n]s",details.author);
    printf("\nEnter the unit price of a book:\n");
    scanf("%d",&details.price, MAX_LIMIT,stdin);
    }

    printf("\nDo you want to exit? \n 1. NO \t 2.YES");
    printf("\n");
    scanf("%d",&d);

    }while(d == 1);

    FILE *fptointer;
    fptointer=fopen("bookstore.txt","w");
    FILE *read;
    read=fopen("bookstore.txt","r");
    if (fptointer==NULL)
    {
        printf("The file could not be opened\n");
    }
    else
    {

        fprintf(fptointer,
        "\n************************ \nBOOK DETAILS \n************************\n%s \n%s \nKsh.%d\n",details.bookTitle,details.author,details.price);
        printf("\nData saved successfully\n");
    }

    fclose(read);

}



