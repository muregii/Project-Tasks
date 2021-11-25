#include<stdio.h>

int factorial()
{
    int a;
    printf("\nEnter the number to factor:\n");
    scanf("%d",&a);
    int i,fact=1;
    for(int i=1;i<=a;i++)
    {
      fact*=i;
    }
     return fact;
}
int main()
{

printf("\nYour factorial is %d ",factorial());
}
