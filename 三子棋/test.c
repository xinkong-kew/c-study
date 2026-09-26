#include"game.h"
void menu()
{
    printf("******************************\n");
    printf("********* 1.开始游戏 *********\n");
    printf("********* 0.退出游戏 *********\n");
    printf("******************************\n");
}

void game()
{
    char board[ROW][COL] = {0};
    //初始化棋盘
    INitboard(board,ROW,COL);
    Displayboard(board,ROW,COL);
    //循环
    char ret ;
    while(1)
    {
        Playermove(board ,ROW,COL);
        Displayboard(board,ROW,COL);

        //判断输赢
        ret = Victory(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        Computermove(board ,ROW,COL);
        Displayboard(board,ROW,COL);
        //判断输赢
        Victory(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }

    }
    if(ret == '*')
    {
        printf("玩家赢了\n");
    }
    else if(ret == '#')
    {
        printf("电脑赢了\n");
    }
    else if(ret == 'Q')
    {
        printf("平局\n");
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    { 
    menu();
    printf("请选择:>");
    scanf("%d",&input);
    switch(input)
    {
        case 1:
        printf("开始游戏\n");
        game();
        break;
        case 0:
        printf("退出游戏\n");
        break;
        default:
        printf("输入错误，请重新选择\n");
        break;
        
    }
    }
    while(input);
    return 0;
}