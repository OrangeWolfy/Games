#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int playerVScomputer();
int playerVSplayer();
int playerMove(char);
void computerMove(char);
void printBoard();
int checkWinner();

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

int main()
{
    char players;
    int winner;

    printf("Tic Tac Toe Game\n");
    printf("1 or 2 Players\n");
    scanf("%s", &players);

    if(players == '1'){
        winner = playerVScomputer();
    }
    else if(players == '2'){
        winner = playerVSplayer();
    }
    else winner = -1;

    if(winner == 1)
        printf("X wins\n");
    else if (winner == 2)
        printf("O wins\n");
    else if (winner == 0)
        printf("Tie\n");
    else printf("Invalid input\n");
    return 0;
}

int playerVScomputer()
{
    char player, computer;
    int win, turns, row, column;

    // Ask if the player wants to play with 'X' or 'O' and check if it was typed correctly to asing the computer the opposite play
    printf("Play X or O\n");
    scanf("%s", &player);
    player = toupper(player);
    if(player == 'X')
        computer = 'O';
    else if(player == 'O')
        computer = 'X';
    else return -1;

    // Decide if it's 'X' or 'O' turn by counting until it hits 9 when the board must be filled and check if the player is playing 'X' or 'O'
    turns = 0;
    win = 0;
    while(turns <= 9 && win == 0)
    {
        if(turns % 2 == 0){
            if(player == 'X'){
                printf("Your turn\n");
                if(playerMove(player) != 0)
                    turns--;
            }
            else computerMove(computer);
            turns++;
        }
        else{
            if(player == 'O'){
                printf("Your turn\n");
                if(playerMove(player) != 0)
                    turns--;
            }
            else computerMove(computer);
            turns++;
        }

        win = checkWinner();
    }
    printBoard();
    return win;
}

int playerVSplayer()
{
    int win, turns;

    // Decide if it's 'X' or 'O' turn by counting until it hits 9 when the board must be filled and check if the player is playing 'X' or 'O'
    turns = 0;
    win = 0;
    while(turns <= 9 && win == 0)
    {
        if(turns % 2 == 0){
            printf("\nX turn\n");
            if(playerMove('X') == 0) turns++; 
        }
        else{
            printf("\nO turn\n");
            if(playerMove('O') == 0) turns++; 
        }
        win = checkWinner();
    }
    printBoard();
    return win;
}

int playerMove(char piece)
{
    int row, column;

    printBoard();
    // Ask for coordinates from the player where he wants to play
    printf("Row: ");
    scanf("%d", &row);
    row--;
    printf("Column: ");
    scanf("%d", &column);
    column--;

    
    // Check if the position is empty to play and if it's not subtract one from turns to go again
    if(board[row][column] == ' '){
        board[row][column] = piece;
        return 0;
    }
    printf("\nInvalid place\n");
    return -1;
}

void computerMove(char piece)
{
    // Choose two random positions in the board and if they're empty play the computer's piece
    srand(time(0));
    int x, y;
    do{
        x = rand() % 3;
        y = rand() % 3;
    }while(board[x][y] != ' ');
    board[x][y] = piece;
}

void printBoard()
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("   |   |   \n");
}

int checkWinner()
{
    int columnCount = 0;
    int rowCount = 0;
    
    for(int i = 0; i < 3; i++){
        // Check if a winner hasn't been found in a row or column
        if(rowCount == 3 || rowCount == -3 || columnCount == 3 || columnCount == -3)
            break;
        rowCount = 0;
        columnCount = 0;
        for(int j = 0; j < 3; j++){
            // Check rows and count 1 if it's 'X' or -1 if it's 'O'
            if(board[i][j] == 'X')
                rowCount++;
            else if(board[i][j] == 'O')
                rowCount--;

            // Check columns and count 1 if it's 'X' or -1 if it's 'O'
            if(board[j][i] == 'X')
                columnCount++;
            else if(board[j][i] == 'O')
                columnCount--;
        }
    }

    // Check diagonals and return 1 if 'X' completed a diagonal or 2 if 'O' did
    if(board[1][1] == 'X')
        if((board[0][0] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[2][0] == 'X'))
            return 1;
    else if(board[1][1] == 'O')
        if((board[0][0] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[2][0] == 'O'))
            return 2;

    // Check if the count of rows and columns if 3 or -3 meaning from the previous loop that a row or column was completed by 'X' or 'O'
    if(columnCount == 3)
        return 1;
    else if(columnCount == -3)
        return 2;
    
    if(rowCount == 3)
        return 1;
    else if(rowCount == -3)
        return 2;
    
    return 0;
}
