#include "stdio.h"
//a.数组值转到另一数组
//#include "string.h"
//int main()
//{
//	char arr1[] = {'b','i','t','0'};
//	char arr2[20] = "#########";
//	strcpy(arr2,arr1);
//	printf("%s",arr2);
//	return 0;
//}

//b.掩盖字符串
////memset,寄存器 memset -内存 set -设置
//#include "string.h"
//int main()
//{
//	char arr[] = "hello handsome boy！";
//	memset(arr,'#',5);
//	printf("%s",arr);
//	return 0;
//}


//c.输出两数最大值
//int get_max(int a,int b)
//{
//	if (a<=b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("%d",max);
//	return 0;
//}


//d.
//利用函数实现交换两个整数的位置
//void swap(int* x,int* y)//通过指针在swap空间保存a和b的地址
//{
//	int temp = 0;
//	temp = *x;	//*x等同于a，通过解应用操作符，解出a保存的值并保存到temp中
//	*x = *y;	//*y等同于b
//	*y =temp;
//}
//int main()
//{
//	int a = 0,b = 0;
//	printf("请输入两个整数：");
//	scanf("%d%d",&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}


/*
//1.写一个函数可以判断一个数是不是素数
#include "math.h"
int prime(int a)	//符合返回1，不符合返回0
{
	int j = 0;
	for(j=2;j<=sqrt(a);j++)
	{
		if(a%j==0)
		{
			return 0;	
		}	
	}
	return 1;
		
}	
int main()
{
	int i = 0;
	for(i=1;i<=200;i++)
	{
		if(prime(i) == 1)
		printf("%d ",i);
	}
	return 0;
}*/

/*
//2.写一个函数判断一年是不是闺年
int year(int x)		//符合返回1，不符合返回0
{
	if((x%4 == 0 && x%100 != 0) || (x%400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	for(i=1000;i<=2000;i++)
	{
		if(year(i) == 1)//判断是否为闰年
		{
		printf("%d ", i);
		}	
	}
	return 0;
}*/



/*
//3.写一个函数,实现一个整形有序数组的二分查找
//不能写成binary_search(int arr[],int f)
//因为计算机为了不浪费空间，传到函数的实质上是自身arr[]的首地址，只有一个传到函数
int binary_search(int arr[],int f,int sz)
{
	
	int left = 0;
	int right = sz-1;
	while(left<=right)
	{
		int mid = (left+right)/2;//中间值下标
		if(arr[mid] < f)
		{
			left = mid+1;
		}
		else if(arr[mid] > f)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
//	二分查找,前提是有序
//	在一个有序数组中查找具体的某个数
//	如果找到了返回,这个数的下标,找不到的返回-1 
//
  	int arr[] ={1,2,3,4,5,6,7,8,9,10};
  	int f = 0,ret = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
  	printf("请输入要找的数：");
  	scanf("%d",&f);
  	ret = binary_search(arr,f,sz);
  	if(ret == -1)
  	{
  		printf("找不到\n");
	  }
	  else
	  {
	  	printf("下标是%d\n",ret);
	  }
	return 0;
}
*/


/*
//4.写一个函数,每调用一次这个函数,就会将num的值增加1。
void Add(int* p)//函数要改变外部num数值，故用取址调用
{
	(*p)++;//*p++是错误的，因为++的优先级比*p要高
}
int mian()
{
	int num = 0;
	Add(&num);//函数要改变外部num数值，故用取址调用
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
}
*/

/*
1.写一个函数可以判断一个数是不是素数。
2.写一个函数判断一年是不是闺年。
3.写一个函数,实现一个整形有序数组的二分查找。
4.写一个函数,每调用一次这个函数,就会将num的值增加1。
*/


//一些链式法则的应用
#include "string.h"
int main()
{
	//方法1
	//len = strlen("abc");
	//printf("%d\n",len);
	//方法2
	//printf("%d\n",strlen("abc"));
	//拓展
	printf("%d",printf("%d",printf("%d",50)));//结果5021
/*流程
    	第一步.打印50。
	注：因为50占两个字符，故printf("%d",50)返回2	
	printf("%d",printf("%d",2))
	第二步.打印502.
	注：因为2占一个字符，故printf("%d",2)返回1						
	printf("%d",1)
	最后，打印出5021	
*/
	return 0;
}

