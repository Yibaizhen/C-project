#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct book
{
    char number[100];
    char tittle[100];
    char writer[100];
    char publisher[100];
    char date[100];
    char price[100];
    char status[100];
    char reader[100];
};
void search_book();
void borrow_book();
void return_book();
void add_book();
void delete_book();
void modify_book();
void scan_book();
int main()
{
    int c1 = 0, c2, c3;
    int l, x, z;
    while (1)
    {
        system("color 2C");
        printf("\t\t\t ^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
        printf("\t\t\t| * - * - * -???????? * - * - * |\n");
        printf("\t\t\t* [1] ?????? *\n");
        printf("\t\t\t* [2] ???????? *\n");
        printf("\t\t\t^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
        printf("\n");
        printf("??????????? ??");
        scanf("%d", &c1);
        system("cls");
        break;
    }
    if (c1 == 1)
    {
        while (1)
        {
            system("color 2C");
            printf("\t\t\t ^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
            printf("\t\t\t| * - * - * -???????? * - * - * |\n");
            printf("\t\t\t* [1] ?????? *\n");
            printf("\t\t\t| [2] ??????? |\n");
            printf("\t\t\t* [3] ?ÝT??? *\n");
            printf("\t\t\t* [4] ????????? *\n");
            printf("\t\t\t| [5] ??????????? |\n");
            printf("\t\t\t^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
            printf("\n");
            printf("??????????? ??");
            scanf("%d", &c2);
            getchar();

            switch (c2)
            {
            case 1:
                search_book();
                break;
            case 2:
                borrow_book();
                break;
            case 3:
                return_book();
                break;
            case 4:
                scan_book();
                break;
            case 5:
                system("cls");
                return 0;
            }
        }
    }
    if (c1 == 2)
    {
        while (1)
        {
            system("color 2C");
            printf("\t\t\t ^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
            printf("\t\t\t| * - * - * -???????? * - * - * |\n");
            printf("\t\t\t| [1] ??????? |\n");
            printf("\t\t\t* [2] ?????? *\n");
            printf("\t\t\t| [3] ????????? |\n");
            printf("\t\t\t* [4] ????????? *\n");
            printf("\t\t\t| [5] ??????????? |\n");
            printf("\t\t\t^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^ \n");
            printf("\n");
            printf("??????????? ??");
            scanf("%d", &c3);
            getchar();

            switch (c3)
            {
            case 1:
                add_book();
                break;
            case 2:
                delete_book();
                break;
            case 3:
                modify_book();
                break;
            case 4:
                scan_book();
                break;
            case 5:
                system("cls");
                return 0;
            }
        }
    }
}

/*??????*/
void search_book()
{
    FILE *fp;
    struct book n;
    struct book nn;
    int l, r;
    char x, z;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "rb");
    while (1)
    {
        l = 0;
        system("cls");
        printf("??????????????");
        scanf("%s", n.tittle);
        fflush(stdin);
        rewind(fp);
        while (1)
        {
            fread(&nn, sizeof(nn), 1, fp);
            if (feof(fp))
                break;
            r = strcmp(n.tittle, nn.tittle);
            if (r == 0)
            {
                l = 1;
                break;
            }
        }
        if (l == 0)
        {
            printf("???????????ï{????\n\n ");
        }
        else
        {
            printf("???????????");
            printf("\n");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");

            printf("\n");
            printf("%s %s %s %s %s %s %s", nn.number, nn.tittle, nn.writer, nn.publisher, nn.date, nn.price, nn.status, nn.reader);
            printf("\n\n\n");
        }
        printf("???????????? ? [??(y)/??(n)] ? \n\n");
        do
        {
            x = getche();
        } while (x != 'n' && x != 'y');
        if (x == 'n')
            break;
    }
    fclose(fp);
    system("cls");
}

//????

void add_book()
{
    FILE *fp;
    struct book n;
    struct book nn;
    char x, z;
    int l, r;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "ab+");
    do
    {
        system("cls");
        do
        {

            l = 0;
            printf("\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            fflush(stdin);
            scanf("%s %s %s %s %s %s %s %s", n.number, n.tittle, n.writer, n.publisher, n.date, n.price, n.status, n.reader);
            system("cls");
            rewind(fp);
            while (!feof(fp))
            {
                fread(&nn, sizeof(nn), 1, fp);
                r = strcmp(n.tittle, nn.tittle);
                if (r == 0)
                {
                    l = 1;
                    printf(" ??????????????????????????: \n\n");
                    break;
                }
            }
        } while (l);
        fwrite(&n, sizeof(n), 1, fp);
        printf("\n");
        printf("???????????????????[y/n] \n\n");
        do
        {
            x = getche();
        } while (x != 'n' && x != 'y');
    } while (x == 'y');
    fclose(fp);
    system("cls");
}

//??????
void delete_book()
{
    FILE *fp, *fp1;
    char x, z;
    struct book n;
    struct book nn;
    int l, r;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "ab+");
    while (1)
    {
        l = 0;
        system("cls");
        printf("\n");
        printf("???????????????????: \n\n");
        fflush(stdin);
        scanf("%s", &n.tittle);
        rewind(fp);
        while (1)
        {
            fread(&nn, sizeof(nn), 1, fp);
            if (feof(fp))
                break;
            r = strcmp(n.tittle, nn.tittle);
            if (r == 0)
            {
                l = 1;
                break;
            }
        }
        if (l == 0)
        {
            printf("\n");
            printf("?????¦Ä???????? \n");
        }
        else
        {
            printf("\n");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            printf("%s %s %s %s %s %s %s %s", nn.number, nn.tittle, nn.writer, nn.publisher, nn.date, nn.price, nn.status, nn.reader);
            printf("\n");
            printf("?????????????? [??(y)/??(n)]\n\n");
            do
            {
                z = getche();
            } while (z != 'n' && z != 'y');
            if (z == 'n')
                break;
            else
            {
                fp1 = fopen("F:\\?¦Ã????\\????????new.txt", "wb");
                rewind(fp);
                while (1)
                {
                    fread(&nn, sizeof(nn), 1, fp);
                    if (feof(fp))
                        break;
                    r = strcmp(n.tittle, nn.tittle);
                    if (r != 0)
                        fwrite(&nn, sizeof(nn), 1, fp1);
                }
                fclose(fp);
                fclose(fp1);
                fp = fopen("F:\\?¦Ã????\\????????.txt", "wb");
                fp1 = fopen("F:\\?¦Ã????\\????????new.txt", "rb");
                while (1)
                {
                    fread(&nn, sizeof(nn), 1, fp1);
                    if (feof(fp1))
                        break;
                    fwrite(&nn, sizeof(nn), 1, fp);
                }
                fclose(fp);
                fclose(fp1);
            }
        }
        printf("\n");
        printf("????????????????? [??(y)/??(n)] \n");
        do
        {
            x = getche();
        } while (x != 'n' && x != 'y');
        if (x == 'n')
            break;
    }
    fclose(fp);
    system("cls");
}
//?????????

void modify_book()
{
    FILE *fp;
    struct book n;
    struct book nn;
    int l, r;
    char x, z;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "rb+");
    while (1)
    {
        l = 0;
        printf("\n");
        system("cls");
        printf("??????????????????: \n\n");
        fflush(stdin);
        scanf("%s", &n.tittle);
        system("cls");
        rewind(fp);
        while (1)
        {
            fread(&nn, sizeof(nn), 1, fp);
            if (feof(fp))
                break;
            r = strcmp(n.tittle, nn.tittle);
            if (r == 0)
            {
                l = 1;
                break;
            }
        }
        if (l == 0)
        {
            printf("\n");
            printf("?????¦Ä??????????? \n\n");
        }
        else
        {
            printf("\n");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            printf("%s %s %s %s %s %s %s %s", nn.number, nn.tittle, nn.writer, nn.publisher, nn.date, nn.price, nn.status, nn.reader);
            printf("???????????????\n\n\n");
            fflush(stdin);
            scanf("%s %s %s %s %s %s %s %s", n.number, n.tittle, n.writer, n.publisher, n.date, n.price, n.status, n.reader);
            fseek(fp, sizeof(nn), 1);
            fwrite(&n, sizeof(nn), 1, fp);
        }
        printf("\n");
        printf(" ???????????????[y/n]? \n\n");
        do
        {
            x = getch();
        } while (x != 'n' && x != 'y');
        if (x == 'n')
            break;
    }
    fclose(fp);
    system("cls");
}
//????
void borrow_book()
{
    FILE *fp;
    struct book n;
    struct book nn;
    char x, z;
    int l, r;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "rb+");
    while (1)
    {
        l = 0;
        system("cls");
        printf("\n");
        printf("???????????????????: \n");
        fflush(stdin);
        scanf("%s", &n.tittle);
        rewind(fp);
        while (1)
        {
            fread(&nn, sizeof(nn), 1, fp);
            if (feof(fp))
                break;
            r = strcmp(n.tittle, nn.tittle);
            if (r == 0)
            {
                l = 1;
                break;
            }
        }
        if (l == 0)
        {
            printf("\n");
            printf("?????¦Ä???????î• \n");
        }
        else

        {
            printf("\n");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            printf("%s %s %s %s %s %s %s %s", nn.number, nn.tittle, nn.writer, nn.publisher, nn.date, nn.price, nn.status, nn.reader);
            printf("\n");
            fflush(stdin);
            printf("?????????????????????????????????");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            scanf("%s %s %s %s %s %s %s %s", n.number, n.tittle, n.writer, n.publisher, n.date, n.price, n.status, n.reader);
            fseek(fp, sizeof(nn), 1);
            fwrite(&n, sizeof(nn), 1, fp);
        }
        printf("\n");
        printf(" ?????????ï˜ [??(y)/??(n)] \n\n");
        do
        {
            x = getch();
        } while (x != 'n' && x != 'y');
        if (x == 'n')
            break;
    }
    fclose(fp);
    system("cls");
}

//????
void return_book()
{
    FILE *fp;
    struct book n;
    struct book nn;
    char x, z;
    int l, r;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "rb+");
    while (1)
    {
        l = 0;
        system("cls");
        printf("\n");
        printf("??????????ÝT???????: \n");
        fflush(stdin);
        scanf("%s", &n.tittle);
        rewind(fp);
        while (1)
        {
            fread(&nn, sizeof(nn), 1, fp);
            if (feof(fp))
                break;
            r = strcmp(n.tittle, nn.tittle);
            if (r == 0)
            {
                l = 1;
                break;
            }
        }
        if (l == 0)
        {
            printf("\n");
            printf("?????¦Ä???????î• \n");
        }
        else
        {
            printf("\n");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            printf("%s %s %s %s %s %s %s %s", nn.number, nn.tittle, nn.writer, nn.publisher, nn.date, nn.price, nn.status, nn.reader);
            printf("\n");
            fflush(stdin);
            printf("?????????????????????? \n\n");
            printf("****************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            scanf("%s %s %s %s %s %s %s %s", n.number, n.tittle, n.writer, n.publisher, n.date, n.price, n.status, n.reader);
            fseek(fp, -(int)sizeof(nn), 1);
            fwrite(&n, sizeof(nn), 1, fp);
        }
        printf("\n");
        printf("?????????ï˜ [??(y)/??(n)] \n");
        do
        {
            x = getche();
        } while (x != 'n' && x != 'y');
        if (x == 'n')
            break;
    }
    fclose(fp);
    system("cls");
}

//???
void scan_book()
{
    FILE *fp;
    char x, z;
    struct book n;
    fp = fopen("F:\\?¦Ã????\\????????.txt", "rb");
    rewind(fp);
    system("cls");
    while (1)
    {
        fread(&n, sizeof(n), 1, fp);
        if (feof(fp))
            break;
        else
        {
            printf("********************************************\n");
            printf("??? ???? ???? ?????? ??????? ??? ?? ??????\n");
            printf("\n");
            printf("%s %s %s %s %s %s %s %s", n.number, n.tittle, n.writer, n.publisher, n.date, n.price, n.status, n.reader);
            printf("\n");
        }
    }
    printf("\n");
    printf("?????????????");
    do
    {
        x = getche();
    } while (x != '\r');
    if (x == '\r')
    {
        fclose(fp);
        system("cls");
    }
}