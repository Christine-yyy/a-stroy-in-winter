#include <stdio.h>
#include <windows.h>  
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")



int main()
{
    // ����Ƶ�ļ�
    mciSendString("open 2.mp3 alias start", NULL, 0, NULL);
    // ѭ������
    // ѭ������������.mp3��ʽ,��������.wav��ʽ
    mciSendString("play start repeat", NULL, 0, NULL);           
    printf("play music...\n");
    system("pause");
    // �ر���Ƶ�ļ�
    mciSendString("close start", NULL, 0, NULL);           
    printf("close music!\n");
    system("pause");
    return 0;
}
