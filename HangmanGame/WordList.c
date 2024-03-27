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

char* wordpick()
{
    char *wordPick = malloc(WORDSLENGTH);
    
    srand(time(NULL));
    strcpy(wordPick, words[rand() % WORDSCOUNT]);    
    
    return wordPick;
}
