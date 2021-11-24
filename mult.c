#include<stdio.h>

int multiply(int a,int b[],int *p)
{
    //doubling the numbers by self addition
    for(int i=0;i<a;i++)
    {
        *(p+i)=((b[i])*2);
    }

}

int main()
{
    int a,*p;
    int x[10]={a};
    printf("\nEnter the size of your array:\n");
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
       printf("\nThen enter your %d number:",i+1);
        scanf("%d",&x[i]);
    }

    multiply(a,x,p);

    printf("\nThe numbers you have just doubled are:");
    for(int i=0;i<a;i++)
    {
        printf("%d ",*(p+i));
    }


}
