#include<stdlib.h>
#include<string.h>
#include<time.h>

// Modify macros when adding more or longer words

#define WORDSCOUNT 4
#define WORDSLENGTH 64

char words[WORDSCOUNT][WORDSLENGTH] = {
    "hello",
    "world",
    "bread",
    "key"
};

char* wordpick(int *length)
{    
    srand(time(NULL));
    int randomNum = rand() % WORDSCOUNT;
	*length = strlen(words[randomNum]);
    
    char *wordPick = malloc(*length);
    strcpy(wordPick, words[randomNum]);
    
    return wordPick;
}
