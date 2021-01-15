#include <stdio.h>
#include <windows.h>  
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")



int main()
{
    // 打开音频文件
    mciSendString("open 2.mp3 alias start", NULL, 0, NULL);
    // 循环播放
    // 循环播放适用于.mp3格式,但不适用.wav格式
    mciSendString("play start repeat", NULL, 0, NULL);           
    printf("play music...\n");
    system("pause");
    // 关闭音频文件
    mciSendString("close start", NULL, 0, NULL);           
    printf("close music!\n");
    system("pause");
    return 0;
}
