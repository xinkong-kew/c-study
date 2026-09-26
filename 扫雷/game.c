#include"game.h"

void Initboard(char board[ROWS][COLS],int rows,int cols,char ch)
{
    int i = 0;
    int j = 0;
    for(i = 0 ;i<rows;i++)
    {
        for(j = 0; j<cols;j++)
        {
            board[i][j] = ch;
        }
    }

}

void Displayboard(char board[ROWS][COLS],int row,int col)
{
    int i = 0;
    int j = 0;
    printf("-------------扫雷游戏----------------\n");
    for(j =  0;j <= col;j++)
    {
        printf("%d  ",j);
    }
    printf("\n");
    for(i = 1;i <= row;i++)
    {
        printf("%d ",i);
        for(j=1;j <= col;j++)
        {
            printf(" %c ",board[i][j]);
        }
        printf("\n");
    }
    printf("-------------扫雷游戏----------------\n");

}
void Setmine(char board[ROWS][COLS],int row,int col)
{
    int count = RASY_COUNT;
    while(count)
    {
        int x =rand()%row + 1;//随机生成行坐标1~9
        int y =rand()%col + 1;//随机生成列坐标1~9
        if(board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}

int get_mine_count(char board[ROWS][COLS],int x,int y)
{
    return board[x-1][y-1]+
    board[x][y-1]+
    board[x+1][y-1]+
    board[x-1][y]+
    board[x+1][y]+
    board[x-1][y+1]+
    board[x][y+1]+
    board[x+1][y+1]-
    '0'*8;
}

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x = 0;
    int y = 0 ;
    int win = 0;//找到非雷的个数

    while(win < row * col - EASY_COUNT){
    printf("请输入排查雷的坐标:>");
    scanf("%d %d",&x,&y);
    if(x >= 1 &&x <= row && y>=1 &&y <= col)
    {
        if(show[x][y] != '*')
        {
            printf("坐标已被排查，请重新输入\n");
            continue;
        }
        else
        {
        //如果是雷
        if(mine[x][y] == '1')
        {
            Displayboard(show,ROW,COL);//显示排查出的雷的信息
            printf("很遗憾，你被炸死了\n");
            break;
        }
        //如果不是雷
        else
        {
            win++;
            //统计mine中x，y坐标周围有多少雷
            int count = get_mine_count(mine,x,y);
            show[x][y] = count + '0';//转换成数字字符
            Displayboard(show,ROW,COL);//显示排查出的雷的信息
            
        }
        }
    }
    else
    {
        printf("坐标非法，请重新输入\n");
    }
    }
    if(win == row * col - EASY_COUNT)
    {
        printf("恭喜你，你赢了\n");
        Displayboard(mine,ROW,COL);//显示布置好的雷的信息
    }
}