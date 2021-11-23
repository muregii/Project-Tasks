#include <stdio.h>

    void main()
    {
       int CSC001,CSC009,CSC111,CSC112,CSC115,CSC121,CSC126,totalScore;
       char grade1,grade2,grade3,grade4,grade5,grade6,grade7;
       float average;

       printf("\n\t\tENTER YOUR DETAILS!");

       printf("\nEnter your CSC001 score:");
       scanf("%d",&CSC001);

       if (CSC001<40)
       {
           grade1='F';
       }
       else if(CSC001<50)
       {
           grade1='D';
       }
       else if(CSC001<60)
       {
           grade1='C';
       }
        else if(CSC001<70)
        {
            grade1='B';
        }
        else if(CSC001<=100)
        {
            grade1='A';
        }

        printf("\nEnter CSC009 score:\n");
        scanf("%d",&CSC009);

        if (CSC009<40)
       {
           grade2='F';
       }
       else if(CSC009<50)
       {
           grade2='D';
       }
       else if(CSC009<60)
       {
           grade2='C';
       }
        else if(CSC009<70)
        {
            grade2='B';
        }
        else if(CSC009<=100)
        {
            grade2='A';
        }

        printf("\nEnter your CSC111 score:\n");
        scanf("%d",&CSC111);
        if (CSC111<40)
       {
           grade3='F';
       }
       else if(CSC111<50)
       {
           grade3='D';
       }
       else if(CSC111<60)
       {
           grade3='C';
       }
        else if(CSC111<70)
        {
            grade3='B';
        }
        else if(CSC111<=100)
        {
            grade3='A';
        }
        printf("\nEnter your CSC112 score:\n");
        scanf("%d",&CSC112);
        if (CSC112<40)
       {
           grade4='F';
       }
       else if(CSC112<50)
       {
           grade4='D';
       }
       else if(CSC112<60)
       {
           grade4='C';
       }
        else if(CSC112<70)
        {
            grade4='B';
        }
        else if(CSC112<=100)
        {
            grade4='A';
        }
        printf("\nEnter your CSC115 score:\n");
        scanf("%d",&CSC115);
        if (CSC115<40)
       {
           grade5='F';
       }
       else if(CSC115<50)
       {
           grade5='D';
       }
       else if(CSC115<60)
       {
           grade5='C';
       }
        else if(CSC115<70)
        {
            grade5='B';
        }
        else if(CSC115<=100)
        {
            grade5='A';
        }
        printf("\nEnter your CSC121 score:\n");
        scanf("%d",&CSC121);
        if (CSC121<40)
       {
           grade6='F';
       }
       else if(CSC121<50)
       {
           grade6='D';
       }
       else if(CSC121<60)
       {
           grade6='C';
       }
        else if(CSC121<70)
        {
            grade6='B';
        }
        else if(CSC121<=100)
        {
            grade6='A';
        }
        printf("\nEnter your CSC126 score:\n");
        scanf("%d",&CSC126);
        if (CSC126<40)
       {
           grade7='F';
       }
       else if(CSC126<50)
       {
           grade7='D';
       }
       else if(CSC126<60)
       {
           grade7='C';
       }
        else if(CSC126<70)
        {
            grade7='B';
        }
        else if(CSC126<=100)
        {
            grade7='A';
        }

        //Calculations
        totalScore=CSC001+CSC009+CSC111+CSC112+CSC115+CSC121+CSC126;
        average=totalScore/7;

        //Neating Up!
        system("cls");

        printf("\n\t\tYOUR REPORT IS AS FOLLOWS \n\nCOURSE \t\tMARKS \t\tGRADE\n \nCSC001 \t\t%d\t\t%c \nCSC009 \t\t%d\t\t%c \nCSC111 \t\t%d\t\t%c \nCSC112\t\t%d\t\t%c \nCSC115\t\t%d \t\t%c\nCSC121 \t\t%d\t\t%c \nCSC126\t\t%d\t\t%c ",CSC001,grade1,CSC009,grade2,CSC111,grade3,CSC112,grade4,CSC115,grade5,CSC121,grade6,CSC126,grade7);
        printf("\nTOTALSCORE %d \n\nAVERAGE %.4f",totalScore,average);
    }
