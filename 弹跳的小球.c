#include <stdio.h>
#include <stdlib.h>
int main()
{
    // 上下弹跳小球思路 给定一个上界和下届，一个最大高度，如果到达最大高度，则使方向相反，方向用正负表示
    int i, j;
    int x = 5;
    int y = 10;
    int volicity = 1;
    int height = 20;
    while (1)
    {
        x += volicity;
        system("cls");
        for (i = 0; i < x; i++)
        {
            printf("\n");
        }
        for (j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf("O");
        printf(" ");
        if (x == height)
        {
            volicity = -volicity;
        }
        if (x == 0)
        {
            volicity = -volicity;
        }
    }
