#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int n,a,i,t;
    int number=0;
    scanf("%d %d",&n,&a);
    t=a;

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            number=a;
        }
        else
        {
            a+=t*(int)pow(10,i);
            number+=a;
        }
    }
    printf("%d",number);
    return 0;

}
