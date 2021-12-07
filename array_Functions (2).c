#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int Displaymenu()
{
    printf("\nEnter the operation you want.");
    printf("\n1. Sort the numbers");
    printf("\n2. Find the Maximum number");
    printf("\n3. Find the Minimum number");
    printf("\n4. Calculate the Average");
    printf("\n5.  Find the Standard Deviation\n\n");
}
int descending(int a,int num[])
{
    int i;
    for(i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(num[i]<num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    return num[i];
}
int average(int x, int num[])
{
    int sum,average;
    for(int i=0;i<x;i++)
    {
        sum+=num[i];
    }
    average=sum/x;
    printf("\nYour average is %d",average);

}
int minimum( int x, int num[])
{
    int minimum=num[0];
    for(int i=0;i < x;i++)
    {
        if(num[i]<minimum)
        {
            minimum=num[i];
        }
    }
    printf("\nThe least number is %d",minimum);
}
int maximum( int x, int num[])
{
    int maximum=num[0];
    for(int i=0;i < x;i++)
    {
        if(num[i]>maximum)
        {
            maximum=num[i];
        }
    }
    printf("\nThe greatest number is %d",maximum);
}

int standardDev(int x, int num[])
{

   int sd,sum,i,average,average1,sq;
   for(int i=0;i<x;i++)
   {
       sum+=num[i];
   }
   average=sum/x;
   for(int i=0;i<x;i++)
   {
      sq+=((num[i]-average)*(num[i]-average));
   }

   average1=sq/x;
   sd=sqrt(average1);

   printf("The standard deviation is : %d",sd);


}


int main()
{
        int d;
        do{
        Displaymenu();
        int choice,x,avg;
        printf("\n Select your option:");
        scanf("%d",&choice);

        printf("\nEnter the size of your list:\n");
        scanf("%d",&x);
        int a[x];

        for(int i=0;i<x;i++)
        {
            printf("\nEnter your element %d of your list: ",i+1);
            scanf("%d",&a[i]);
        }


        switch(choice)
        {

        case 4:
            average(x,a);
            break;
        case 3:
            minimum(x,a);
            break;
        case 2:
            maximum(x,a);
            break;
        case 5:
            standardDev(x,a);
            break;
        case 1:
            descending(x,a);
            printf("\nElements of the array in descending order: ");
            for(int i=0; i<x; i++)
            {
                printf("%d ",a[x,i]);
            }
        break;
        default:
            printf("\nWelcome!");
            exit(0);
        }

        printf("\n Do you wish to continue? \n 1. YES \n 2. NO\n\t");
        scanf("%d",&d);

        }while(d==1);

}
