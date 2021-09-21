#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <graphics.h>

const int rows = 12, cols = 13; //定义地图的行和列数

void InstanceInterface() //初始化用户界面

{

//绘制地图

//0 大鸟,1:银块 2:黑色 3砖头

int mapIndex[rows][cols] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,

2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2,

2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2,

2, 3, 2, 3, 2, 3, 1, 3, 2, 3, 2, 3, 2,

2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2,

2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,

1, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 1,

2, 3, 2, 3, 2, 3, 3, 3, 2, 3, 2, 3, 2,

2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2,

2, 3, 3, 3, 2, 2, 2, 2, 2, 3, 2, 3, 2,

2, 3, 2, 3, 2, 3, 3, 3, 2, 3, 2, 3, 2,

2, 2, 2, 2, 2, 3, 0, 3, 2, 2, 2, 2, 2 };

IMAGE map[4];

//笨方法

//loadimage(&map[0], "map0.jpg");

//loadimage(&map[1], "map1.jpg");

//loadimage(&map[2], "map2.jpg");

//loadimage(&map[3], "map3.jpg");

//项目怎么写的.

//sprintf



char filename[20] = ""; //保存文件名

for (int i = 0; i < 4; i++)

{

sprintf(filename, "map%d.jpg", i);

//map0.jpg--map3.jpg

loadimage(&map[i], filename);

}

//重点数组下标到窗口坐标的转换

int x, y;

//自己写的代码一定要注重格式

for (int rowNum = 0; rowNum < rows; rowNum++)

{

for (int colNum = 0; colNum < cols; colNum++)

{

//坐标转换

x = colNum * 50;

y = rowNum * 50;

//根据数组中的值去贴图

putimage(x, y, &map[mapIndex[rowNum][colNum]]);

/*

照片的名字 map0-map3

地图初始化: 0 -3

map0.jpg----0

map[0] ---mapIndex[i][j]=0;



}



}

}



int main()

{



initgraph(cols * 50, rows * 50);

InstanceInterface();

getchar();

closegraph();

return 0;

}
*/
#include <graphics.h>

#include <stdio.h>

#include <conio.h>

//地图的大小

const int rows = 7;

const int cols = 8;

//地图的初始化

//0空地,1:墙,3:目的地 4:箱子,5人

int map[7][8] =

{

0, 1, 1, 1, 1, 1, 1, 1,

0, 1, 0, 0, 0, 0, 1, 1,

1, 0, 3, 4, 4, 3, 0, 1,

1, 0, 1, 0, 0, 1, 0, 1,

1, 0, 1, 0, 0, 1, 0, 1,

1, 0, 5, 0, 0, 0, 1, 0,

1, 1, 1, 1, 1, 1, 1, 0

};

//背景,墙,空地,箱子,人物,目的地,箱子到达目的地

IMAGE backImg, wall, blank, box, people, end, dbox;



//加载资源

void loadImage()

{

//背景

loadimage(&backImg, "background.jpg", 64 * cols, 64 * rows);

loadimage(&wall , "wall.jpg", 64 , 64 );

loadimage(&blank, "blank.jpg", 64 , 64 );

loadimage(&box, "box.jpg", 64 , 64 );

loadimage(&people , "people.jpg", 64, 64);

loadimage(&end, "end.jpg", 64 , 64 );

loadimage(&dbox, "dbox.jpg", 64, 64);

}

//初始化游戏界面

void initGame()

{

//求出转换坐标

int x, y;

for (int i = 0; i < 7; i++)

{

for (int j = 0; j < 8; j++)

{

//求出贴图的坐标

x = j * 64;

y = i * 64;

switch (map[i][j]) //就是C语言中的 选择结构里面的

{

case 0: //空地

putimage(x, y, &blank);

break;

case 1: //墙

putimage(x, y, &wall);

break;

case 3: //目的地

putimage(x, y, &end);

break;

case 4: //箱子

putimage(x, y, &box);

break;

case 5: //人物

putimage(x, y, &people);

break;

case 7://箱子和目的一起7=4+3

putimage(x, y, &dbox);

break;

case 8:

putimage(x, y, &people);

break;

}

}

}



}



//玩游戏----按键处理---抽象到具体

//按键处理---当作字符串处理---ASCII码

//上下左右键

//方向键:上:72 下:80 左:75 右:77

void playGame()

{

char cUser; //用来接收用户的按键

int i = 0, j = 0;

while (1) //死循环去玩游戏

{



//确定人物的位置 ---找数组中等于5那个地方,或者等于8

for (i = 0; i < 7; i++)

{

for (j = 0; j < 8; j++)

{

if (map[i][j] == 5 || map[i][j] == 8)

break;//只能跳出一层循环

}

if (map[i][j] == 5 || map[i][j] == 8)

break;//只能跳出一层循环

}

initGame();

cUser = _getch(); //使用不可见输入

switch (cUser)

{

//左边

//方向键:上:72 下:80 左:75 右:77

case 75: //键盘上的方向键

case 'a':

case 'A':

//往左走一下 i,j-1 判断这个地方能不能走

//能不能走 :是空地和目的地

if (map[i][j - 1] == 0 || map[i][j - 1] == 3)

{

//原来的位置人走了,值-5

map[i][j] = map[i][j] - 5;

map[i][j - 1] += 5;

}

else if (map[i][j - 1] == 4 || map[i][j - 1] == 7)

{

if (map[i][j - 2] == 0 || map[i][j - 2] == 3)

{

map[i][j - 2] += 4;

map[i][j - 1] += 1; //-4+5

map[i][j] -= 5;

}

}

break;

case 77: //键盘上的方向键右:77

case 'd':

case 'D':

if (map[i][j +1] == 0 || map[i][j + 1] == 3)

{

//原来的位置人走了,值-5

map[i][j] = map[i][j] - 5;

map[i][j + 1] += 5;

}

else if (map[i][j + 1] == 4 || map[i][j + 1] == 7)

{

if (map[i][j + 2] == 0 || map[i][j + 2] == 3)

{

map[i][j + 2] += 4;

map[i][j + 1] += 1; //-4+5

map[i][j] -= 5;

}

}

break;

case 72: //键盘上的方向键上:72

case 'W':

case 'w':

if (map[i - 1][j] == 0 || map[i - 1][j] == 3)

{

//原来的位置人走了,值-5

map[i][j] = map[i][j] - 5;

map[i - 1][j] += 5;

}

else if (map[i - 1][j] == 4 || map[i - 1][j] == 7)

{

if (map[i - 2][j] == 0 || map[i - 2][j] == 3)

{

map[i - 2][j] += 4;

map[i - 1][j] += 1; //-4+5

map[i][j] -= 5;

}

}

break;

case 80: //键盘上的方向键

case 'S':

case 's':

if (map[i + 1][j] == 0 || map[i + 1][j] == 3)

{

//原来的位置人走了,值-5

map[i][j] = map[i][j] - 5;

map[i + 1][j] += 5;

}

else if (map[i + 1][j] == 4 || map[i + 1][j] == 7)

{

if (map[i + 2][j] == 0 || map[i +2][j] == 3)

{

map[i + 2][j] += 4;

map[i + 1][j] += 1; //-4+5

map[i][j] -= 5;

}

}

break;

//判断是否赢了 ---留给在做的同学作业

}

}



}



int main()

{

loadImage();

initgraph(64 * cols, 64 * rows);

playGame();







getchar();



closegraph();

return 0;

}