#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

void game(char, int);

int main()
{
   char pick;

   // Get the players pick
    printf("Enter r for ROCK, p for PAPER and s for SCISSOR\n\nRock, paper, scissors\nShoot: ");
    pick = getchar();

    // Get the computers pick
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    
    game(tolower(pick), computer);

    putchar('\n');
    return 0;
}

void game(char pick, int computer)
{
    char options[][10] = {"Rock", "Paper", "Scissor"};
    int winner, player;
    
    // Convert players pick to integer
    // ROCK = 1, PAPER = 2, SCISSOR = 3
    switch(pick){
        case 'r':
            player = 1;
            break;
        case 'p':
            player = 2;
            break;
        case 's':
            player = 3;
            break;
        default:
            printf("Wrong key");
            return;
    }
    printf("\nYou: %s\n", options[player]);
    printf("Compter: %s\n", options[computer]);

    // Calculate the winner by a subtraction where if it's the same it's a tie, if it's to the right you lose and if it's to the left you win
    winner = abs(player - computer);
    if(winner == 1)
        printf("You Win");
    else if(winner == 2)
        printf("You Lose");
    else printf("Tie");
}
