#include"game.h"
void menu()
{
    printf("*************************\n");
    printf("****** 1.开始游戏 *******\n");
    printf("****** 2.退出游戏 *******\n");
    printf("*************************\n");

}
void game()
{
    char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
    char show[ROWS][COLS] = {0};//存放排查出的雷的信息
    //初始化数组的内容未指定的内容
    //mine 数组在没有布置雷的时候，都是’0‘
    Initboard(mine,ROWS,COLS,'0');
    //show素还真都在没有排查雷的时候，都是’*‘
    Initboard(show,ROWS,COLS,'*');
    
    //设置雷
    Setmine(mine,ROW,COL);

    //Displayboard(mine,ROW,COL);//显示布置好的雷的信息
    Displayboard(show,ROW,COL);//显示排查出的雷的信息

    //排查雷
    Findmine(mine,show,ROW,COL);

    
    

    
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
            game();
                break;
            case 0:
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    }
    while(input);
    return 0;
}