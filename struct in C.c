#include<stdio.h>


typedef struct student
{
    char fname[30];
    int age;
    char freg[30];

}student;

int main()
{
    int d;
    struct student details;
    do{
    printf("Enter the student name: ");
    scanf("%s",details.fname);

    printf("Enter the student age: ");
    scanf("%d",&details.age);

    printf("Enter the student registration number: ");
    scanf("%s",details.freg);

    printf("\nStudent details: \nName: %s\nAge: %d\nRegNo: %s",details.fname,details.age,details.freg);
    printf("\n");
    printf("Want to exit? \n 1. NO \t 2.YES");
    printf("\n");
    scanf("%d",&d);


}while(d==1);


}
