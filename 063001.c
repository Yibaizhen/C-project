#include<stdio.h>
#include<stdlib.h>
int main()
{
    // ���µ���С��˼· ����һ���Ͻ���½죬һ�����߶ȣ�����������߶ȣ���ʹ�����෴��������������ʾ
    int i, j;
    int x = 5;
    int y = 10;
    int volicity = 1;
    int height = 20;
    while(1)
    {
        x += volicity;
        system("cls");
        for(i = 0; i < x; i++)
        {
            printf("\n");
        }
        for(j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf("O");
        printf(" ");
        if (x == height)
        {
            volicity = -volicity;
        }
        if(x == 0)
        {
            volicity = -volicity;
        }
    }
}


