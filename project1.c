#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int random_number=(rand()%100)+1;
    int no_of_guesses=0;
    int guess;
    do
    {
        scanf("%d", &guess);
        no_of_guesses++;
        if (guess<random_number)
        {
            printf("go higher");
        } 
        if(guess>random_number)
        {
            printf("go lower");
        }

    }while(guess!=random_number);
    
    
    
    if (guess==random_number)
    {
        printf("Correct guess %d", guess);
        printf("Number of guesses is %d", no_of_guesses);
    }

    return 0;
}