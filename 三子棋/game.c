#include "game.h"
void INitboard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for(i=0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            board[i][j] = ' ';
        }
    }
}
void Displayboard(char board[ROW][COL],int row, int col)
{
    int i = 0;
    for(i = 0;i < row; i++)
    {
        // printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
        for(int j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col - 1)
            printf("|");
        }
        printf("\n");

    //打印分隔线
    if(i<row-1)
    // printf("---|---|---\n");
        {
            int j = 0;
            for(j = 0 ;j<col;j++)
            {
                printf("---");
                if(j<col - 1)
                printf("|");
            }
            printf("\n");
        }
    }
}

void Playermove(char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("玩家下棋\n");
    
    while(1)
    {
    printf("请输入坐标:>");
    scanf("%d %d",&x,&y);

    if(x<=row && x >= 1 && y<=col && y >= 1)
    {
        if(board[x-1][y - 1] == ' ')
        {
            board[x-1][y - 1] = '*';
            break;
        }
        else
        {
            printf("坐标已被占用，请重新输入\n");
        }
    }
    else
    {
        printf("坐标非法，请重新输入\n");
    }
    }
}

void Computermove(char board[ROW][COL],int row,int col)
{
    printf("电脑下棋\n");
    int x = 0;
    int y = 0;
    
    while(1)
    {
    x = rand() % row ;//0~2随机数
    y = rand() % col ;//0~2随机数
    if(board[x][y] == ' ')
    {
        board[x][y] = '#';
        break;
    }
    }
}

int isFull(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;

    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col; j++)
        {
            if(board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}


char Victory(char board[ROW][COL],int row,int col)
{
    //行
    int i = 0;
    for(i = 0;i<row;i++)
    {
        if(board[i][0] ==board[i][1] && board[i][1]  == board[i][2]&&board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    //列
     for(i = 0;i<col;i++)
    {
        if(board[0][i] ==board[1][i] && board[1][i]  == board[2][i]&&board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    //对角线
    if(board[0][0] == board[1][1] && board[1][1] ==  board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }

     if(board[0][2] == board[1][1] && board[1][1] ==  board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //没有人赢，平局
    if(isFull(board,row,col))
    {
        return 'Q';
    }
    //游戏继续
    return 'c';
}
