#include <stdio.h>
#include <stdlib.h>
//求某年的某月有几天
int main(int argc,char* argv[])
{
    int year,leap,month;
    scanf("%d %d",&year,&month);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                leap=1;
            }
            else leap=0;
        }
        else leap =1;
    }
    else leap=0;
    switch (month)
    {
    case 12:
        printf("31");
        break;
    case 11:
        printf("30");
        break;
    case 10:
        printf("31");
        break;
    case 9:
        printf("30");
        break;
    case 8:
        printf("31");
        break;
    case 7:
        printf("31");
        break;
    case 6:
        printf("30");
        break;
    case 5:
        printf("31");
        break;
    case 4:
        printf("30");
        break;
    case 3:
        printf("31");
        break;
    case 2:
        if(leap==1)
        {
            printf("29");
        }
        else printf("28");
        break;
    case 1:
        printf("31");
        break;
        return 0;
    }

}
