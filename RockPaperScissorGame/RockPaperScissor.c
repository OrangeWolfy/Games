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
    int computer = rand() % 3;
    
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
            player = 0;
            break;
        case 'p':
            player = 1;
            break;
        case 's':
            player = 2;
            break;
        default:
            printf("Wrong key");
            return;
    }
    printf("\nYou: %s\n", options[player]);
    printf("Compter: %s\n", options[computer]);

    // Determine the winner
	
	switch(player) {
		case 0:
			if(computer == 0) winner = 0;
			else if(computer == 1) winner = 2;
			else winner = 1;
			break;
		case 1:
			if(computer == 0) winner = 1;
			else if(computer == 1) winner = 0;
			else winner = 2;
			break;
		case 2:
			if(computer == 0) winner = 2;
			else if(computer == 1) winner = 1;
			else winner = 0;
			break;
	}

    if(winner == 1)
        printf("You Win");
    else if(winner == 2)
        printf("You Lose");
    else printf("Tie");
}
