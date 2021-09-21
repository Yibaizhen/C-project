#include <stdio.h>
#include <stdlib.h>
//求n个数的最大值
int main(int argc,char* argv[])
{
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("%d",a[n-1]);
    return 0;
}
/*第二种方法
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            t=a[i];
        }
        else
        {
            if(a[i]>t)
            {
                t=a[i];
            }
        }
    }
    printf("%d",t);
    return 0;
}*/
