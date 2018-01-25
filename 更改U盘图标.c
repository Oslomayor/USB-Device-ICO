/*功能：更改U盘图标*/
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	FILE *p;
    char choose,password[20];
    printf("1.查看使用说明\n2.准备就绪，开始更改U盘图标\n请键入相应数字选择\n");
    fflush(stdin);//清空缓存区
    start:
    choose=getch();
    switch(choose)
    {
        case '1':
                printf("Step.1 找一张喜欢的ico格式图片，重命名为1.ico，放在U盘根目录下\n");
                printf("Step.2 看完说明后关闭本程序，把本程序复制到U盘根目录下\n");
                printf("Step.3 准备好以上两步，双击运行U盘中的本程序\n");
                break;
        case '2':
		/* 可选择是否添加密码
                printf("请输入密码然后Enter\n");
                gets(password);
                if(strcmp(password,"284178")!=0)  
                {                
                    printf("不是正确密码！\n");
                    Sleep(1000);
                    exit(0);
                }
		*/
                //以下4行为更改U盘图标核心代码
				p=fopen("autorun.inf","w");
				fprintf(p,"[Autorun]");
				fprintf(p,"\n");
				fprintf(p,"icon=1.ico");
				fclose(p);
                //以下2行设置文件属性为隐藏
                system("attrib +h 1.ico");
                system("attrib +h autorun.inf");
                printf("U盘图标更改完成，重新拔插起效\n");
                break;
        default : printf("请选择1或2！\n");
                  Sleep(1000);
                  goto start;
    }
	system("pause");
	return 0;
}
