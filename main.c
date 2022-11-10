#include "stdio.h"
#include "math.h"

int main()
{
	
	return 0;
}




//int main()
//{
//	//判读是否为素数
//	//素数判断的规则
//	//1.试除法产生2->i-1
//	//开方sqrt(i)，必小于根号i或者小于i/2
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)//全部范围内求素数
//	//for(i=101;i<=200;i+=2),奇数中求素数
//	{
//		int j = 0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j > sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("%d",count);
//	return 0;
//}


//找出1000年到2000年的闰年
/*int main()
{
	int i;int count = 0;
	for(i=1000;i<=2000;i++)
	{
		//到断是否为闰年
		//能被4整除并且不能被100整除是闰年
		//能被400整除是闰年
		if(i%4 == 0 && i%100 != 0)
		{
			printf("%d ",i);
			count++;
		}
		else if(i%400 == 0)
		{
			printf("%d ",i);
			count++;
		} 
	}
	printf("\n%d\n",count);
	return 0;
}*/



/*
//取两者的最大公约数
int main()
{
	int a,b,c;
	printf("输入两个数：");
	scanf("%d%d",&a,&b);
	while(a%b)//辗转相除法
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n",b);
	return 0;
}*/



//1-100之间的3的倍数
/*int main()
{
	int i = 1;
	int num = 0;
	for (i=1;i<101;i++)
	{
		switch(i%3)
		{
			case 0:
				printf("%d ",i);
				break;
			case 1:
				break;
		}
	}
	return 0;
}*/



//比较三个数大小
//int main()
//{
//	int a,b,c;
//	printf("请输入三个数：");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a<c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b<c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
