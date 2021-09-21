#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int x1,x2,x3,y1,y2,y3,s;

    scanf("%d:%d:%d",&x1,&x2,&x3);
    scanf("%d:%d:%d",&y1,&y2,&y3);

    s=(y1-x1)*3600+(y2-x2)*60+(y3-x3);
    printf("%d",s);
    return 0;
}
