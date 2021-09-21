#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int x,y,z,max;
    scanf("%d %d %d",&x,&y,&z);
    max=x>y?x:y;
    max=z>max?z:max;
    printf("%d",max);
    return 0;
}
