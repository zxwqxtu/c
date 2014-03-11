#include <stdio.h>

const int SIZE = 6;
const char comp_c = '@';
const char player_c = 'O';

void display(char board[][SIZE]);

int main(void)
{
    char board[SIZE][SIZE] = {0};
    int row = 0;
    int col = 0;
    char again;

    printf("\nREVERSI\n\n");
    printf("You can go first on the first game, then we will take turns.\n");
    printf(" You will be white - (%c)\n I will be black - (%c).\n", player_c, comp_c);
    printf("\nGood luck! Press Enter to start.\n");
    scanf("%c", &again);

    for (row=0; row<SIZE; row++)
        for (col=0; col<SIZE; col++)
            board[row][col] = ' ';

    int mid = SIZE/2;

    board[mid-1][mid-1] = board[mid][mid];
    board[mid-1][mid] = board[mid][mid-1];
    display(board);
    return 0;
}

void display (char board[][SIZE])
{
    char col_label = 'a';
    printf("\n ");
    for (int col=0; col<SIZE; col++)
        printf(" %c", col_label+col);
    printf("\n");

    for (int row = 0; row<SIZE; row++) {
        printf("  +");
        for (int col=0; col<SIZE; col++)
            printf("---+");
        printf("\n%2d|", row+1);

        for (int col=0; col<SIZE; col++)
            printf(" %c |", board[row][col]);

        printf("\n");
    }

    printf("  +");
    for(int col=0; col<SIZE; col++)
        printf("---+");

    printf("\n");
}
