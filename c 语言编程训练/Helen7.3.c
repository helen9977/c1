#include <windows.h>
#include <stdio.h>    // for printf
#include <stdlib.h>   // for system

int main()
{
    HANDLE hOut;

    //  ��ȡ������ľ��
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED |  // ǰ��ɫ_��ɫ
                            FOREGROUND_BLUE | // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY);// ��ǿ
    printf(" �� + �� = ��ɫ ^_^\n");


    SetConsoleTextAttribute(hOut,
                            FOREGROUND_BLUE |
                            FOREGROUND_RED|        // ǰ��ɫ_��ɫ
                            FOREGROUND_INTENSITY |  // ǰ��ɫ_��ǿ
                            BACKGROUND_RED|
                            BACKGROUND_GREEN);      // ����ɫ_��ɫ
    printf("�������ֺ�ɫ��������ɫ\n");


int i,j;
while(cin>>i>>j)
{
  SetColor(i,j);
  cout<<"���ͣ��й�!!"<<endl;
  SetColor(7,0);///�ָ�Ϊ�ڵװ��֡���
}

    system("pause");
    return 0;
}
