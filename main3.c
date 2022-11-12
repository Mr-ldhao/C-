#include "stdio.h"

int main()
{
	int ch = 0;
//	while((ch = getchar()) != EOF)//打印输出0-9的数字
//	{
//		if (ch <'0'||ch>'9')
//			continue;
//	 	putchar(ch);
//	}

	
	//EOF---end of file文件结束标志符 Ctrl + z同效果
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
	int ret = 0;//输入密码并确认
	char password[20]={0};
	printf("请输入密码：");
	scanf("%s",password);
	while((ch = getchar()) != '\n')//缓存区有一个'\n',用getchar读出，使'\n'读出，清空缓存区，至于这个字符保存哪里，不用管
	{
		;
	}

	printf("请确认（Y/N）：");
	ret = getchar();
	if (ret == 'Y' || ret == 'y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	
//奇数或者偶数	
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
////		if(i%2 == 1)
//		if(i%2 != 0)
//		printf("%d ",i);
//		i++;
//	}
////	while(1){
////	
////	int a = 0;
////	printf("请输入数字：");
////	scanf("%d\n",&a);
////	if (a%2 == 1)
////	 printf("奇数\n");
////	else
////	 printf("不是奇数\n");
////}
	return 0;
}