#include "stdio.h"
#include "string.h"
#include "windows.h"
#include "stdlib.h"
//输入密码登录
int main()
{
	int i = 0;
	char password [20] = {0} ;
	for (i=0; i<3; i++)
	{printf("请输入密码:>");
	scanf("%s", password);
	if (strcmp(password, "123456") == 0)
	{//==不能用来比较两个字符串是否相等,应该使用一个库函数-stremp1
	printf("登录成功\n");
	break;
	}
	else
	{printf("密码错误。\n");
	}
	}
	if (i == 3)
	{
	printf("三次密码均错误,退出程序\n");
	}
	return 0;
}




/*//显示屏
int main()
{
	char arr1[] = "!!!!HELLO!!!!";
	char arr2[] = "#############";
	int left  = 0;
	int right = strlen(arr1)-1;
	
	while(left <= right)
	{
	
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n",arr2);
	Sleep(1000);
	system("cls");//方法2
//	if(strlen(arr1)%2 == 1)//方法1，清屏覆盖
//	{
//		if(left<right)
//		{ 
//		system("cls");	
//		}
//	}
//	else if (strlen(arr1)%2 == 0)
//	{
//		if((left+1) != right)
//		{
//		system("cls");
//		}
//	}
	
	right--;
	left++;
}
	printf("%s\n",arr2);//方法2
	return 0;
}*/

//int main()//找到数组中最大值的下标
//{
//	while(1){
//	
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//有序,用二分法
//	int k = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz-1;
//	
//	printf("请输入要找的数字：\n");
//	scanf("%d",&k);	
//	
//	while(left <= right)
//	{
//	int mid = (right+left)/2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else 
//	{
//		printf("找到了,下标是：%d\n",mid);
//		break;
//	}
//}	
//	if(left >right)
//	{
//		printf("找不到\n");
//	}
//}
//	return 0;
//}