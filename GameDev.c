#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int displayMainMenu()
{

    printf("\n***********************\n");
    printf("*******MAIN MENU*******\n");
    printf("1.Addition \n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
    printf("\n\nWhat's Your Choice?");
    int a;
    scanf("%d", &a);
    return a;

}
int displaySubMenu()
{

    printf("\n**************************\n");
    printf("*******PICK A LEVEL*******\n");
    printf("1.High Level\n2.Mid Level\n3.Low Level\n4.Quit");
    printf("\n\nWhat's Your Choice?");
    int a;
    scanf("%d", &a);
    return a;



}
int left()
{

    printf("\n***********************\n");
    printf("\nBye Have A Good Time!!\n");
    printf("\n***********************\n");
    exit(0);
}
int leftSubMenu()
{
    displayMainMenu();
}
int addNum()
{
    system("cls");
    int points = 0;
    srand(time(0));
    int choice;
    choice = displaySubMenu();
    if(choice == 3)
    {
        int a = (rand()%10+1);
        int b = (rand()%10+1);
        int correct = a + b;
        int answer;
        printf(" %d + %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 2){
            int a = (rand()%50+11);
        int b = (rand()%10+1);
        int correct = a + b;
        int answer;
        printf(" %d + %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }


    }
    else if(choice == 1){
       int a = (rand()%100+51);
        int b = (rand()%10+1);
        int correct = a + b;
        int answer;
        printf(" %d + %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }

    }
    else if(choice == 4){
            left();
    }
    else
        printf("Enter A valid Choice!!");
}
int subNum()
{
    system("cls");
    int points = 0;
    srand(time(0));
    int choice;
    choice = displaySubMenu();
    if(choice == 3)
    {
        int a = (rand()%10+1);
        int b = (rand()%10+1);
        int correct = a - b;
        int answer;
        printf(" %d - %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 2){
            int a = (rand()%50+11);
        int b = (rand()%10+1);
        int correct = a - b;
        int answer;
        printf(" %d - %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }


    }
    else if(choice == 1){
       int a = (rand()%100+51);
        int b = (rand()%10+1);
        int correct = a - b;
        int answer;
        printf(" %d - %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 4){
            left();
    }
    else
        printf("Enter A valid Choice!!");
}
int multNum()
{
    system("cls");
    int points = 0;
    srand(time(0));
    int choice;
    choice = displaySubMenu();
    if(choice == 3)
    {
        int a = (rand()%10+1);
        int b = (rand()%10+1);
        int correct = a * b;
        int answer;
        printf(" %d * %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 2){
            int a = (rand()%50+11);
        int b = (rand()%10+1);
        int correct = a * b;
        int answer;
        printf(" %d * %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }


    }
    else if(choice == 1){
       int a = (rand()%100+51);
        int b = (rand()%10+1);
        int correct = a * b;
        int answer;
        printf(" %d * %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 4){
            left();
    }
    else
        printf("Enter A valid Choice!!");
}
int divNum()
{
    system("cls");
    int points = 0;
    srand(time(0));
    int choice;
    choice = displaySubMenu();
    if(choice == 3)
    {
        int a = (rand()%10+1);
        int b = (rand()%10+1);
        int correct = a / b;
        int answer;
        printf(" %d / %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 2){
            int a = (rand()%50+11);
        int b = (rand()%10+1);
        int correct = a / b;
        int answer;
        printf(" %d / %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }


    }
    else if(choice == 1){
       int a = (rand()%100+51);
        int b = (rand()%10+1);
        int correct = a / b;
        int answer;
        printf(" %d / %d = ",a,b);
        scanf("%d", &answer);
        if(answer==correct)
        {
            points++;
            printf("Nice!The Correct Answer is : %d You Have Earned One Point",correct);
        }
        else
        {
            printf("Wrong!The Correct Answer is: %d",correct);
        }
    }
    else if(choice == 4){
            left();
    }
    else
        printf("Enter A valid Choice!!");
}




int main()
{
    int choice;
    int points = 0;
    do{

    points++;

    choice = displayMainMenu();
    switch(choice)
    {
    case 1:
        addNum();
        break;
    case 2:
        subNum();
        break;
    case 3:
        multNum();
        break;
    case 4:
        divNum();
        break;
    case 5:
        system("cls");
        printf("You Have %d points",points);
        left();
        break;
    default:
        printf("Please Enter A valid Choice!");

    }
    }while(choice!=5);
}
