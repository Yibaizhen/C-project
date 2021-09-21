#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int x,y;
    scanf("%d",&x);
    y=x/10;
    switch(y)
    {
    case 10:
    case 9:printf("A");break;
    case 8:printf("B");break;
    case 7:printf("C");break;
    case 6:printf("D");break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:printf("E");break;
    }
    return 0;
}
