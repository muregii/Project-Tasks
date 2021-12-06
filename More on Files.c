#include<stdio.h>

typedef struct
{

    char studName[30];
    char regNo[30];
    int age;
    int marks[7];
}student;

int main()
{

    FILE *fraydon;
    student students[2];
    int i,j;
    student student[i];
    for(i=0;i<2;i++)
    {
    printf("\n Enter student name:\n");
    scanf("%s",student[i].studName);

    printf("\n Enter registration number:\n");
    scanf("%s",student[i].regNo);

    printf("\n Enter age:\n");
    scanf("%d",&student[i].age);


    for (int j=0;j<7;j++)
    {
        printf("\n Enter Course %d marks:",j+1);
        scanf("%d",&student[i].marks[j]);
    }

    }
    fraydon=fopen("Raydon.txt","w");

        if(fraydon==NULL){
                printf("ERROR!");

        }
        else{

            for(i=0;i<2;i++)
            {

                {
                    fprintf(fraydon,"\nSTUDENT***DETAILS: \n",i+1);
                }

                fprintf(fraydon,"%s\n",student[i].studName);
                fprintf(fraydon,"%s",student[i].regNo);
                fprintf(fraydon,"%d",student[i].age);
                fprintf(fraydon,"\n\t MARKS for %s",student[i].studName);
                for(j=0;j<7;j++)
                {
                    fprintf(fraydon,"\n\t %d", student[i].marks[j]);
                }


            }


        }
        fclose(fraydon);
}
