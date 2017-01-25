#include <windows.h>
#include <stdio.h>    // for printf
#include <stdlib.h>   // for system

int main()
{
    HANDLE hOut;

    //  获取输出流的句柄
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |  // 前景色_红色
                            FOREGROUND_BLUE | // 前景色_蓝色
                            FOREGROUND_INTENSITY);// 加强
    printf(" 红 + 蓝 = 紫色 ^_^\n");


    SetConsoleTextAttribute(hOut,
                            FOREGROUND_BLUE |
                            FOREGROUND_RED|        // 前景色_红色
                            FOREGROUND_INTENSITY |  // 前景色_加强
                            BACKGROUND_RED|
                            BACKGROUND_GREEN);      // 背景色_蓝色
    printf("设置文字红色，背景蓝色\n");


int i,j;
while(cin>>i>>j)
{
  SetColor(i,j);
  cout<<"加油，中国!!"<<endl;
  SetColor(7,0);///恢复为黑底白字。。
}

    system("pause");
    return 0;
}
