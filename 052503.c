#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    char ch;
    scanf("%c",&ch);
    if(ch<='z'&&ch>='a')
    {
        printf("lower");
    }
    else if(ch<='Z'&&ch>='A')
    {
        printf("upper");
    }
    else if(ch<='9'&&ch>='0')
    {
        printf("digit");
    }
    else printf("other");
    return 0;
}
