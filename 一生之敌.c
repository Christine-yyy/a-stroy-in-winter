#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <windows.h>  
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

int select1(int maxn);
int game1();
//记录结局

int main()
{
	 // 打开音频文件
    mciSendString("open 2.mp3 alias start", NULL, 0, NULL);
    // 循环播放
    // 循环播放适用于.mp3格式,但不适用.wav格式
    mciSendString("play start repeat", NULL, 0, NULL);           
	while(1)
	{
	puts("    《  一生之敌  》    "); 
	puts("-->1 开始游戏");
	puts("-->2 查看成就");
	puts("-->3 退出游戏"); 
	switch(select1(3))
        {
        case 1:
            game1();
            break;
        case 2:
            puts("未开放"); 
            system("pause");
            break;
        case 3:
        	puts("See you!");
        	system("pause");
     		return;
        case -1:
            system("cls");
            puts("\n输入错误，请重新输入!");
            break;
        default:
            break;
        }
	}
	
 }
int select1(int maxn)
{

//inputselect进行输入合法判断，返回的是输入的值，若非法输入，则返回-1，
//传入的int类型的变量是菜单中的最大选项数

    int select;
    char s;
    s = getch();//getch只读入一个字符并且不回显的特性，比较适合进行单个数字的输入
    putchar(s);//手动回显一下
    fflush(stdin);//习惯性地清除输入流
    select = (int)(s - 48);//把输入的字符转成int类型的
    if (select < 1 || select > maxn)//如果输入的比1小或者比传入的最大值大，就是非法输入了
    {
        return -1;
    }
    else
        return select;
} 

int game1()
{
	int flag = 0;
	printf("今天下午就要考高数和线代了\n");
	sleep(1);
	printf("不想学习了,但是还不太会呢\n");
	sleep(1);
	puts("1 继续学习");
	puts("2 出去转转"); 
	if(select1(2)==2)
	{
		system("cls");
		puts("你来到了小南湖");
		sleep(1);
		puts("看了看结冰的湖面，沉思片刻");
		sleep(3);
		puts("1 踩上去玩玩！开心");
		puts("2 还是回去做题吧");
		if(select1(2)==1)
		{
			puts("啊---");
			sleep(3);
			puts("冰面碎了，卒");
			system("pause"); 
			return 1; 
		}
		else
		{
			puts("你回到了宿舍，不过现在心情好多了");
			sleep(1);
			puts("收拾好书包，前往机房...");
			sleep(3);
			puts("考试中，你非常开心，因为这次的计算题都会呀");
			sleep(1);
			puts("提交完试卷后，你的目光看向分数");
			sleep(1);
			puts("51!!!") ;
			puts("为什么啊，线代和我有仇吗？####");
			sleep(1);
			puts("害，至少这次会做，只是填错了");
			puts("回去打王者");
			sleep(1);
			puts("美好的一天结束了 ");
			system("pause"); 
			system("cls");
			return 2;
			}	
	}
	else
	{
		puts("又学了一下午，头晕脑涨");
		sleep(1);
		puts("看了一下表，到时间了");
		sleep(1);	
		puts("你收拾好书包，前往机房...");
		sleep(3);
		puts("考试中，你非常开心，因为这次的计算题都会呀");
		sleep(1);
		puts("提交完试卷后，你的目光看向分数");
		sleep(1);
		puts("51!!!") ;
		puts("为什么啊，线代和我有仇吗？####");
		sleep(1);
		puts("伤心致死，卒");
		system("pause");
		system("cls"); 
		return 3;
	}
	
	
	
	 
}

