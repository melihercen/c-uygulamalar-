#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Bu  fonksiyonda bilgisayarın seçtiği sayı karsısında hangi kelimeyi yazdıracagı belirttir
//This function specifies which word the computer prints in response to the number it selects
int computer(int computer_choice)
{
    
    if(computer_choice==1)
    {
        printf("Rock\n");
    }
    else if(computer_choice==2)
    {
        printf("Paper\n");
    }
    else if(computer_choice==3)
    {
        printf("Scissors\n");
    }
}

int main()
{
    int computer_choice;
    int user_choice;
    int user_score=0,computer_score=0;
    printf("-----------Welcome to Rock Paper Scissors Game----------\n    ----------The game is 3 round-----------\n");
    int i=0;
    while (i<3)
    {
        //1 den 3 e kadar rastgele bir sayı secmesini istiyoruz
        //we want random number choice between 1 and 3
        srand(time(NULL));
        computer_choice=rand() % 3+1;
        printf("1-Rock / 2-Paper / 3-Scissors\n");
        printf("What is you choice:");
        scanf("%d",&user_choice);
        if(user_choice==computer_choice)
        {
            printf("Draw\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);

        }
        else if(user_choice==1 && computer_choice==3)
        {
            user_score++;
            printf("User won\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);

            
        }
        else if(user_choice==1 && computer_choice==2)
        {
            computer_score++;
            printf("Computer won\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);


        }
        else if(user_choice==2 && computer_choice==1)
        {
            user_score++;
            printf("User won\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);


        }
        else if(user_choice==2 && computer_choice==3)
        {
            computer_score++;
            printf("Computer won\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);


        }
        else if(user_choice==3 && computer_choice==1)
        {
            computer_score++;
            printf("Computer won\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);


        }
        else if(user_choice==3 && computer_choice==2)
        {
            user_score++;
            printf("User won\n");
            printf("Computer choice:%d=",computer_choice);
            computer(computer_choice);


        }
        else
        {
            printf("Wrong input try again");
        }

        i++;
    }
    printf("User score: %d\n",user_score);
    printf("Computer score: %d\n",computer_score);
    if (user_score>computer_score)
    {
        printf("User won the game");
    }
    else if(user_score==computer_score)
    {
        printf("The game ended in a draw");
    }
    else
    {
        printf("Computer won the game");
    }
    return 0;
}


