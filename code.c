#include<stdio.h>


    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};


void removeNumber()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
    
}  


void draw()
{
    printf("\t\t\t\t\t\t"),
    printf(" %c %c %c %c %c \n",board[0][0],186,board[0][1],186,board[0][2]);
    printf("\t\t\t\t\t\t"),
    printf("%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("\t\t\t\t\t\t"),
    printf(" %c %c %c %c %c \n",board[1][0],186,board[1][1],186,board[1][2]);
    printf("\t\t\t\t\t\t"),
    printf("%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("\t\t\t\t\t\t"),
    printf(" %c %c %c %c %c \n",board[2][0],186,board[2][1],186,board[2][2]);
}

int check()
{


    // return 1 win
    // check for X
    // horizontal
    if((board[0][0] =='X') && (board[0][1] == 'X') && (board[0][2] == 'X'))
    {
        return 1;
    }
    else if((board[1][0] =='X') && (board[1][1] == 'X') && (board[1][2] == 'X'))
    {
        return 1;
    }
    else if((board[2][0] =='X') && (board[2][1] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }


    // verticle


    else if((board[0][0] =='X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }
    else if((board[0][1] =='X') && (board[1][1] == 'X') && (board[2][1] == 'X'))
    {
        return 1;
    }
    else if((board[0][2] =='X') && (board[1][2] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }


    // cross


    else if((board[0][0] =='X') && (board[1][1] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }
    else if((board[0][2] =='X') && (board[1][1] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }


    // check for O
    // horizontal
    if((board[0][0] =='O') && (board[0][1] == 'O') && (board[0][2] == 'O'))
    {
        return 1;
    }
    else if((board[1][0] =='O') && (board[1][1] == 'O') && (board[1][2] == 'O'))
    {
        return 1;
    }
    else if((board[2][0] =='O') && (board[2][1] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }


    // verticle
    else if((board[0][0] =='O') && (board[1][0] == 'O') && (board[2][0] == 'O'))
    {
        return 1;
    }
    else if((board[0][1] =='O') && (board[1][1] == 'O') && (board[2][1] == 'O'))
    {
        return 1;
    }
    else if((board[0][2] =='O') && (board[1][2] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }


    // cross
    else if((board[0][0] =='O') && (board[1][1] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }
    else if((board[0][2] =='O') && (board[1][1] == 'O') && (board[2][0] == 'O'))
    {
        return 1;
    }
    return 0;
}


int inputValue(int input, int player)
{
    char ch;
    if(player == 1)
    {
        ch = 'X';
    }
    else
    {
        ch = 'O';
    }
    if(input == 1)
    {
        board[0][0] = ch;
    }
    else if(input == 2)
    {
        board[0][1] = ch;
    }
    else if(input == 3)
    {
        board[0][2] = ch;
    }
    else if(input == 4)
    {
        board[1][0] = ch;
    }
    else if(input == 5)
    {
        board[1][1] = ch;
    }
    else if(input == 6)
    {
        board[1][2] = ch;
    }
    else if(input == 7)
    {
        board[2][0] = ch;
    }
    else if(input == 8)
    {
        board[2][1] = ch;
    }
    else if(input == 9)
    {
        board[2][2] = ch;
    }
}

void errorCheck()
{
    
}


int main()
{
    int input;
    int player = 0;
    int status = 0;
    draw();
    printf("Enter any key to Start!!");
    getch();

    system("cls");
    removeNumber();
    for(int i = 0; i < 10; i++)
    {

        draw();
        printf("Enter the value from 1 to 9 : ");
        scanf("%d",&input);

        inputValue(input,player);
        status = check();

        if(status == 1)
        {
            break;
        }
        system("cls");
        draw();
        player = !player;
        system("cls");
    }
    system("cls");

    if(check())
    {
        printf("Player %d wins!\n",player);
    }

    draw();
    return 0;
}