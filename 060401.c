#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    double s1,s2;
    char op;
    scanf("%lf %s %lf",&s1,&op,&s2);
    switch (op)
    {
        case '+':printf("%.2f",s1+s2);break;
        case '-':printf("%.2f",s1-s2);break;
        case '*':printf("%.2f",s1*s2);break;
        case '/':
            if(s2<1e-10)
        {
            printf("Wrong input!");
        }
        else printf("%.2f",s1/s2);break;
        default:printf("Wrong input!");
    }
    return 0;
}
