#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define RASY_COUNT 10//雷的数量



void Initboard(char mine[ROWS][COLS],int rows,int cols,char ch);
void Displayboard(char mine[ROWS][COLS],int row,int col);

void Setmine(char mine[ROWS][COLS],int row,int col);
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
