#include <stdio.h>
#include<stdlib.h>
#include "teacher_struct.h"

struct Teacher
{
    char name[10];                //姓名
    char sex;                     //性别
    long employee_number;         //工号
    int age;                      //年龄
    int state;                    //在职状态
    float sum;                    //实发工资
    char grade;                   //教师等级
    int tea_age;                  //教龄
    float base_salary;            //基本工资
    int tea_insurance;        //教师养老保险
    float deduction;              //扣款金额
    float taxmany;                //个人缴纳税
}  Tea[99];

/*int n;
int main(int argc,char *argv[])
{
    struct teacher k;
    int n;
    while (1)
    {
        printf ("\n********欢迎使用本系统,请根据需要进行操作！********\n");
        printf("\n ----------------------------主菜单-------------------------\n\n");
        printf("1.教师信息录入功能              2.教师信息添加功能\n");
        printf("3.教师信息显示功能              4.教师信息查询功能 \n");
        printf("5.教师信息排序功能              6.教师信息修改功能 \n");
        printf("7.教师信息删除功能              8.保存至文件功能 \n");
        printf("9.读入文件功能                  10.退出系统\n");
        printf("\n--------------------------------------------------------------------------\n\n");
        printf("请用户自主选择功能模块，输入整数1-10:\n");
repeat:
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            system("cls");
            input();
            break;        // 教师信息录入
        case 2:
            system("cls");
            add();
            break;         // 教师信息添加
        case 3:
            system("cls");
            show();
            break;        // 教师信息显示
        case 4:
            system("cls");
            search();
            break;       // 教师信息查询
        case 5:
            system("cls");
            sort();
            break;         // 教师信息排序
        case 6:
            system("cls");
            amend();
            break;    // 教师信息修改
        case 7:
            system("cls");
            del();
            break;    // 教师信息删除
        case 8:
            system("cls");
            preserve();
            break;      // 保存至文件
        case 9:
            system("cls");
            read();
            break;     // 读取文件
        case 10:
            printf ("谢谢使用，再见！\n");
            exit(0);
        default:
            printf("输入错误，请重新输入！\n");
            goto repeat;
            break;
        }
    }
    return 0;
}
*/
void Sort()  //教师信息排序
{
    struct Teacher k; //另一个结构体，互换
    int j;
    int i;
    system("cls");
    printf("\n============按实发工资从小到大排序===========\n");//按实发工资从小到大排序
    for(j=0; j<n-1; j++)
        for(i=1; i<n-j; i++)
        {
            if(Tea[i].sum>Tea[i+1].sum)
            {
                k=Tea[i];
                Tea[i]=Tea[i+1];
                Tea[i+1]=k;
            }
        }
    for(i=1; i<=n; i++)
    {
        printf("工号为:%d\n",Tea[i].employee_number);
        printf("姓名为:%s\n",Tea[i].name);
        printf("性别为:%d\n",Tea[i].sex);
        printf("年龄为:%d\n",Tea[i].age);
        printf("教师等级为:%d\n",Tea[i].grade);
        printf("在职状态为:%d\n",Tea[i].state);
        printf("实发工资为:%d\n",Tea[i].sum);
        printf("工龄为:%d\n",Tea[i].tea_age);
        printf("养老保险:%d\n",Tea[i].tea_insurance);
        printf("扣款金额:%d\n",Tea[i].deduction);
        printf("个人缴纳税:%d\n",Tea[i].taxmany);
    }
    printf("\n");
    return main();
}


void search_employee_number()  //查找老师信息
{
    int gonghaohao;
    int i,q;
    system("cls");
    printf("\n============按工号进行查找===========\n");
    printf("请输入要查找的工号: ");
    scanf("%d",&gonghaohao);

    for(i=1; i<=n; i++)
    {
        if(gonghaohao==Tea[i].employee_number)
        {
            printf("\n查找成功!\n\n\n");
            printf("工号为:%d\n",Tea[i].employee_number);
            printf("姓名为:%s\n",Tea[i].name);
            printf("性别为:%d\n",Tea[i].sex);
            printf("年龄为:%d\n",Tea[i].age);
            printf("教师等级为:%d\n",Tea[i].grade);
            printf("在职状态为:%d\n",Tea[i].state);
            printf("实发工资为:%d\n",Tea[i].sum);
            printf("工龄为:%d\n",Tea[i].tea_age);
            printf("养老保险:%d\n",Tea[i].tea_insurance);
            printf("扣款金额:%d\n",Tea[i].deduction);
            printf("个人缴纳税:%d\n",Tea[i].taxmany);

        }
    }


    void search_name()
    {
repeat:
        system("cls");
        printf("---------教师信息按姓名查询---------\n\n");
        char name[10];
        int a, f;
        printf("请输入要查找的姓名:\n");
        scanf("%s", name);
        for (f = 0; f < i; f++)
            if (strcmp(name, Tea[i].name) == 0)
            {
                printf("\n已找到此人，其记录为：\n");
                printf("\n职工号\t姓名\t性别\t");
                printf("\n%d\t%s\t%c\t%s\t%s\t\t%s\t%s\t\t%s\t\t%s\t%s\t\t%.2f\n", t[f].employee_number, t[f].name, t[f].sex, t[f].position, t[f].course_one.course_name, t[f].course_one.term, t[f].course_one.nature, t[f].course_two.course_name, t[f].course_two.term, t[f].course_two.nature,t[f].score);
                break;
            }
        if (f == i)
            printf("\n对不起，查无此人\n");
        printf("\n----------------------------------\n\n");
        printf("请选择操作！\n");
        printf("\n1.返回选择查询方式\n2.重新输入查询内容\n3.返回主界面\n");
repeat1:
        scanf("%d", &a);
        switch (a)
        {
        case 1:                            //返回选择查询方式
            system("cls");
            search();
            break;
        case 2:                            //重新输入查询内容
            goto repeat;
            break;
        case 3:                            //返回主界面
            system("cls");
            main();
            break;
        default:
            printf("输入错误，请重新输入!\n");
            goto repeat1;
            break;
        }
    }
