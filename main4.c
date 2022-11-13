#include "stdio.h"
#include "stdlib.h"
//猜数字游戏
//产生随机数
//判断数字
void tips()
{
	printf("************************\n");
	printf("**1.enter   0.exit******\n");
	printf("************************\n");
}
void game()
{	
	int num = 0;
	int gnum = 0;
	num = rand()%100+1;//生成1-100的随机数
	printf("%d\n",num);
	while(1)
	{
		printf("请猜一下数字：");
		scanf("%d",&gnum);
		if(gnum > num)
		{
			printf("抱歉哦，猜大了\n");
		}
		else if(gnum < num)
		{
			printf("抱歉哦，猜小了\n");
		}
		else
		{
			printf("恭喜你，对了\n");
			break;	
		}
	}
}

int main()
{
	//1.产生数字并储存
	int input = 0;
	srand((unsigned int)time(NULL));
	//生成随机数
	//运用时间戳,当前计算机的时间-计算机的起始时间
	//进入游戏
	do
	{
		tips();
		printf("请输入一个数:>");//输入数字
		scanf("%d",&input);
		switch(input)//判断数字
		{
			case 1://猜数字
				game();
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("输入错误\n");		
				break;
		}	
	}while(input);
	
	return 0;
}