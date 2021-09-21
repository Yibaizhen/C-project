#include<stdio.h>
#include<stdlib.h>
#define N 50

struct Student  //定义一个学生
{
 int num;    //学号
 char name[20];   //姓名
 char sex[6];  //性别
 int year;     //年龄
 int math;    //数学成绩
 int chinese;      //语文成绩
 int english;   //英语成绩
 int zong;
}Stu[99];

 int n;
 int sum;
 
void Exit()
{    
             system("cls");
             printf("\n\n\n\n");
          printf("\t\t\t****************************************************************\n");
             printf("\t\t\t||                                                            ||\n");
                printf("\t\t\t||                      感谢使用本程序！                      ||\n");
                printf("\t\t\t||                                                            ||\n");
                printf("\t\t\t||                                                            ||\n");
                printf("\t\t\t||                                                            ||\n");
                printf("\t\t\t****************************************************************\n");
    }

void Menu()
{
 
 printf("                              *************************学生成绩管理系统************************\n");
 printf("                                                  请选择要进行的操作\n                                             \n");
 printf("                                                   1 : 输入学生信息\n");
 printf("                                                   2 : 显示所有学生信息\n");
 printf("                                                   3 : 排序学生信息\n");
 printf("                                                   4 : 查找学生信息\n");
 printf("                                                   5 : 删除学生信息\n");
 printf("                                                   6 : 修改学生信息\n");
 printf("                                                   7 : 退出\n");
 printf("请输入你的选项: \n");
 scanf("%d",&sum);

}

 int InputStudent()  //输入学生信息 
 {
 int d; 
 int i=1;
  
 while(i)
 {
  system("cls");
   printf("========================学生成绩输入========================\n\n");
    
   printf("\n请输入第%d个学生的信息:\n",i);
   
   printf("学号: ");
   scanf("%d",&Stu[i].num);
   
   printf("姓名: ");
   scanf("%s",Stu[i].name);
   
   printf("性别: ");
   scanf("%s",&Stu[i].sex);

   printf("年龄: ");
   scanf("%d",&Stu[i].year);
   
   printf("数学成绩: ");
   scanf("%d",&Stu[i].math);
   
   printf("语文成绩: ");
   scanf("%d",&Stu[i].chinese);
   
   printf("英语成绩: ");
   scanf("%d",&Stu[i].english);
   
   i++;
   n++;
   
   printf("是否继续输入?(1.继续 2.退出)\n");
   scanf("%d",&d);
   if(d==2){
    system("cls");
     return main();
    }
    }
  }



 void PrintStudent()  //显示学生信息
 {
 
  int i;
   system("cls");
  printf("========================学生成绩显示========================\n\n\n");
  printf("\n学号\t姓名\t数学成绩\t语文成绩\t英语成绩\t总成绩\n\n\n");

 for(i=1; i<=n; i++){
  Stu[i].zong=Stu[i].chinese+Stu[i].english+Stu[i].math;
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\n", Stu[i].num, Stu[i].name, Stu[i].math,Stu[i].chinese,Stu[i].english,Stu[i].zong);
  }
  return main();
 }


 
 void SortStudent()  //学生信息排序
 { 
  struct Student k; //另一个结构体，互换 
  int j;
  int i; 
  system("cls");
  printf("\n============按学号从小到大排序===========\n");//按学号从小到大排序
  for(j=0;j<n-1;j++)
   for(i=1;i<n-j;i++){
    if(Stu[i].num>Stu[i+1].num){
       k=Stu[i];
       Stu[i]=Stu[i+1];
       Stu[i+1]=k;
      } 
     }
     for(i=1;i<=n;i++){
  Stu[i].zong=Stu[i].chinese+Stu[i].english+Stu[i].math;
        printf("学生的学号为:%d\n",Stu[i].num);
        printf("学生的姓名为:%s\n",Stu[i].name);
        printf("数学成绩为:%d\n",Stu[i].math);
  printf("语文成绩为:%d\n",Stu[i].chinese);
  printf("英语成绩为:%d\n",Stu[i].english);
  printf("学生的总成绩为:%d\n\n",Stu[i].zong);
  }
       printf("\n");
       return main();
}

 void FindStudent()  //查找学生信息
 {
  int xuehao;
  int i,q;
  system("cls");
  printf("\n============按学号进行查找===========\n");
  printf("请输入要查找的学号: ");
  scanf("%d",&xuehao);

  for(i=1;i<=n;i++){
   if(xuehao==Stu[i].num){
    Stu[i].zong=Stu[i].chinese+Stu[i].english+Stu[i].math;
    printf("\n查找成功!\n\n\n");
    printf("学生的学号为:%d\n",Stu[i].num);
    printf("学生的姓名为:%s\n",Stu[i].name);
    printf("数学成绩为:%d\n",Stu[i].math);
    printf("语文成绩为:%d\n",Stu[i].chinese);
    printf("英语成绩为:%d\n",Stu[i].english);
    printf("学生总成绩为:%d\n",Stu[i].zong);
     
    }
  }
 
 return main();
 
 }


 void DeleteStudent() //删除学生信息
 {
  int nums;
  int i,j,d;
  system("cls");
  printf("\n============按学号进行删除信息===========\n");
  printf("输入想要删除人的学号: ");
  scanf("%d",&nums);
   
  for(i=1;i<=n;i++)
  {
   if(nums==Stu[i].num)
   {
   printf("学号\t姓名\t数学\t语文\t英语\t\n");
   printf("%d\t%s\t%d\t%d\t%d\t\n",Stu[i].num,Stu[i].name,Stu[i].math,Stu[i].chinese,Stu[i].english);
   
   printf("确认删除!(1.Y 2.N)\n");
   scanf("%d",&d);
   if(d==1)
   {
     for(j=i;j<=n;j++)
     {
      Stu[j].num=Stu[j+1].num;
         strcpy(Stu[j].name,Stu[j+1].name);
      Stu[j].math=Stu[j+1].math;
      Stu[j].chinese=Stu[j+1].chinese;
      Stu[j].english=Stu[j+1].english;
     }
     n--;
   return main();
   }
   if(d==2)
   {
   return main();
   }
  }
 }
}

 void ModifyStudent() //修改学生信息
 {
  
  int i;
  int w;
  int nums;
  system("cls");
  printf("\n============按学号进行修改===========\n");
  printf("请输入修改的学号:\n\n");
  scanf("%d",&nums);
  for(i=1;i<=n;i++)
  {
   if(Stu[i].num==nums)
   {
    printf("请重新输入该生信息: \n\n");
    printf("学号: \n");
    scanf("%d",&Stu[i].num);
    printf("姓名: \n");
    scanf("%s",Stu[i].name);
    printf("数学成绩: \n");
    scanf("%d",&Stu[i].math);
    printf("语文成绩: \n");
    scanf("%d",&Stu[i].chinese);
    printf("英语成绩: \n");
    scanf("%d",&Stu[i].english);

    printf("修改成功!\n\n");
    
    }
  }
 return main();
 }


 //***********************主函数
  int main()
  {
   
   Menu();
  
  switch (sum){
    
   
    case 1:  //输入学生信息

    InputStudent(Stu,N);
     break;
    case 2:  //显示学生信息
     PrintStudent(Stu,N);
     break;
    case 3:  //排序
     SortStudent(Stu,N);
      break;
    case 4:  //查找
     FindStudent(Stu,N);
     break;
    case 5:  //删除
     DeleteStudent(Stu,N);
     break;
    case 6:  //修改
     ModifyStudent(Stu,N);
     break;
    case 7:  //退出
     Exit(Stu,N);
      break;
     } 
    return 0;

} 