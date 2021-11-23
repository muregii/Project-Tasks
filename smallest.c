#include<stdio.h>

smallest()
{
int Num=5;
    int a[5],i,smallest,position;
    printf("\nEnter some random numbers:\n");
    for(i = 0;i<Num;i++)

        scanf("%d",&a[i]);
        smallest = a[0];
        position = 1;


    for(i=1;i<Num;i++)
    {
        if(smallest > a[i])
        {
            smallest=a[i];
            position = i+1;
        }

    }
    printf("\nThe least number in your list is:\n %d \nand its in position %d",smallest,position);
}
int main()
{
    smallest();

    return smallest;
}
