#include<stdio.h>
#include<string.h>
#include"WordList.c"
#include"PrintHangman.c"

int Lives(char, int);
int printGuess(int, char *);
void clearBuffer();

int main()
{
    int mistakes = 0, length = 0;
    char *word = wordpick(&length);
    char *guessed = malloc(length);

    for(int i = 0; word[i] != '\0'; i++) {
        guessed[i] = '\0';
	if(word[i] == ' ')
	    guessed[i] = word[i];
    }

    // Choose the amount of lives you have to guess the word before you lose
    printf("Hangman\n3 or 6 lives? ");
    char lives = getchar();
	clearBuffer();
    putchar('\n');
    
    Lives(lives, mistakes);
    printGuess(length, guessed);
    
    while(strcmp(word, guessed) != 0 && mistakes != -1) {
        int count = 0;
        char c = getchar();
    
        if(c == '\n') c = getchar();
        for(int i = 0; i < length; i++) {
            if(word[i] == c)
                guessed[i] = c;
            else count++;
        }
        if(count == length)
            mistakes++;
        
        mistakes = Lives(lives, mistakes);
        printGuess(length, guessed);
    }

    printf("\nThe word was: %s\n", word);
    if(mistakes != -1)
        printf("You Win\n");
    else printf("You lose\n");

    free(word);
	free(guessed);

    return 0;
}

int Lives(char lives, int mistakes)
{
    switch(lives){
        case '3':
            mistakes = printHangman3Lives(mistakes);
            break;
        case '6':
            mistakes = printHangman6Lives(mistakes);
            break;
        default:
            mistakes = printHangman6Lives(mistakes);
            break;
    }
    return mistakes;
}

int printGuess(int length, char guessed[])
{
    for(int i = 0; i < length; i++){
        if(guessed[i] == '\0' && guessed[i] != ' ')
	    	printf("_ ");
        else
			printf("%c ", guessed[i]);
    }
    putchar('\n');
}

void clearBuffer()
{
	char c;
	while((c = getchar()) != '\n');
}
