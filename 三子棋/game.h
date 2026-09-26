#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3

#define COL 3
//初始化棋盘
void INitboard(char board[ROW][COL],int row,int col);

//打印棋盘
void Displayboard(char board[ROW][COL],int row, int col);

//玩家
void Playermove(char board[ROW][COL],int row,int col);

//电脑
void Computermove(char board[ROW][COL],int row,int col);

//判断输赢
char Victory(char board[ROW][COL],int row,int col);


//判断是否平局
int isFull(char board[ROW][COL],int row,int col);