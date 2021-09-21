//生命的游戏
//zhouchaoran
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
const int type_live=1;
const int type_dead=0;
const int map_size=20;

int map[50][50];

void initGame();
void run();
int getlivingNum(int x,int y);
void show_map();

int main()
{
    initGame();
    while(1>0)
    {
        run();
        show_map();
        system("cls");
    }
    system("pause");
    return 0;
}
void initGame(){
    int i,j;
    srand((unsigned) time(NULL));
    for(i=0;i<map_size;i++){
        for(j=0;j<map_size;j++){
            map[i][j]=rand()%2;
        }
    }
}
void run()
{
    int i,j,num;
    for(i=0; i<map_size; i++)
    {
        for(j=0; j<=map_size; j++)
        {
            num=getlivingNum(i,j);
            if(num==3)
            {
                map[i][j]=type_live;
            }
            else if(num!=2)
            {
                map[i][j]=type_dead;
            }
        }
    }
}
int getlivingNum(int x,int y)
{
    int i,j;
    int num=0;
    for (i=x-1; i<=x+1; i++)
    {
        if(i<0||i>=map_size)
        {
            continue;
        }
        for(j=y-1; j<=y+1; j++)
        {
            if(j<0||j>map_size)
            {
                continue;
            }
            if(map[i][j]==type_live)
            {
                num ++;
            }
        }
    }
    if(map[x][y]==type_live)
    {
        num--;
    }
    return num;
}
void show_map()
{
    int i,j;
    for(i=0; i<map_size; i++)
    {
        for(j=0; j<=map_size; j++)
        {
            if(map[i][j]==type_live)
            {
                printf("  *");
            }
            else if(map[i][j]==type_dead)
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;

}
