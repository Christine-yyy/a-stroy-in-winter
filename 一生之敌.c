#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <windows.h>  
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

int select1(int maxn);
int game1();
//��¼���

int main()
{
	 // ����Ƶ�ļ�
    mciSendString("open 2.mp3 alias start", NULL, 0, NULL);
    // ѭ������
    // ѭ������������.mp3��ʽ,��������.wav��ʽ
    mciSendString("play start repeat", NULL, 0, NULL);           
	while(1)
	{
	puts("    ��  һ��֮��  ��    "); 
	puts("-->1 ��ʼ��Ϸ");
	puts("-->2 �鿴�ɾ�");
	puts("-->3 �˳���Ϸ"); 
	switch(select1(3))
        {
        case 1:
            game1();
            break;
        case 2:
            puts("δ����"); 
            system("pause");
            break;
        case 3:
        	puts("See you!");
        	system("pause");
     		return;
        case -1:
            system("cls");
            puts("\n�����������������!");
            break;
        default:
            break;
        }
	}
	
 }
int select1(int maxn)
{

//inputselect��������Ϸ��жϣ����ص��������ֵ�����Ƿ����룬�򷵻�-1��
//�����int���͵ı����ǲ˵��е����ѡ����

    int select;
    char s;
    s = getch();//getchֻ����һ���ַ����Ҳ����Ե����ԣ��Ƚ��ʺϽ��е������ֵ�����
    putchar(s);//�ֶ�����һ��
    fflush(stdin);//ϰ���Ե����������
    select = (int)(s - 48);//��������ַ�ת��int���͵�
    if (select < 1 || select > maxn)//�������ı�1С���߱ȴ�������ֵ�󣬾��ǷǷ�������
    {
        return -1;
    }
    else
        return select;
} 

int game1()
{
	int flag = 0;
	printf("���������Ҫ���������ߴ���\n");
	sleep(1);
	printf("����ѧϰ��,���ǻ���̫����\n");
	sleep(1);
	puts("1 ����ѧϰ");
	puts("2 ��ȥתת"); 
	if(select1(2)==2)
	{
		system("cls");
		puts("��������С�Ϻ�");
		sleep(1);
		puts("���˿�����ĺ��棬��˼Ƭ��");
		sleep(3);
		puts("1 ����ȥ���棡����");
		puts("2 ���ǻ�ȥ�����");
		if(select1(2)==1)
		{
			puts("��---");
			sleep(3);
			puts("�������ˣ���");
			system("pause"); 
			return 1; 
		}
		else
		{
			puts("��ص������ᣬ������������ö���");
			sleep(1);
			puts("��ʰ�������ǰ������...");
			sleep(3);
			puts("�����У���ǳ����ģ���Ϊ��εļ����ⶼ��ѽ");
			sleep(1);
			puts("�ύ���Ծ�����Ŀ�⿴�����");
			sleep(1);
			puts("51!!!") ;
			puts("Ϊʲô�����ߴ������г���####");
			sleep(1);
			puts("����������λ�����ֻ�������");
			puts("��ȥ������");
			sleep(1);
			puts("���õ�һ������� ");
			system("pause"); 
			system("cls");
			return 2;
			}	
	}
	else
	{
		puts("��ѧ��һ���磬ͷ������");
		sleep(1);
		puts("����һ�±���ʱ����");
		sleep(1);	
		puts("����ʰ�������ǰ������...");
		sleep(3);
		puts("�����У���ǳ����ģ���Ϊ��εļ����ⶼ��ѽ");
		sleep(1);
		puts("�ύ���Ծ�����Ŀ�⿴�����");
		sleep(1);
		puts("51!!!") ;
		puts("Ϊʲô�����ߴ������г���####");
		sleep(1);
		puts("������������");
		system("pause");
		system("cls"); 
		return 3;
	}
	
	
	
	 
}

