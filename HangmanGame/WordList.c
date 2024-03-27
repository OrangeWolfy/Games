#include<stdlib.h>
#include<string.h>
#include<time.h>

// Modify #define variables and words array values when adding more or longer words

#define WORDSCOUNT 3
#define WORDSLENGTH 64

char words[3][64] = {
    "hello",
    "bread",
    "world"
};

char guessed[WORDSLENGTH];
int length = 0;

char* wordpick(){
    char *wordPick = malloc(WORDSLENGTH);
    
    srand(time(NULL));
    strcpy(wordPick, words[rand() % WORDSCOUNT]);    
    for(length; wordPick[length] != '\0'; length++) guessed[length] = '\0';
    
    return wordPick;
}
