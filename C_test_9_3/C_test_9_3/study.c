#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	//for循环
	/*for (表达式1;表达式2;表达式3)
	{
		循环语句;
	}*/
	//表达式1为初始化部分
	//表达式2为条件判断部分
	//表达式3为调整部分
	//break会直接结束循环
	//continue会跳到for循环的调整语句中，重新开始循环

	//建议：1.不可在for循环体内修改循环变量,防止for循环失去控制
	//2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法

	//int i = 0;
	////前闭后开的写法
	//for (i=0;i<10;i++)
	//{}

	//两边都是闭区间
	/*for(i=0;i<=9;i++)
	{}*/

	//请问循环要循环多少次?
	/*int i = 0;
	int k = 0;
	for (i=0,k=0; k=0; i++,k++)
	{
		k++;
	}*/
	//上面代码一共循环0次，因为第二个分号前面是判断，而这里的k被赋值为0，即false
	//所以循环一共只执行0次

	//二分查找（折半查找）
	//前提是有序数组，升序的数组
	//找一个数更有效率
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//求元素的个数
	//int left = 0;
	//int right = sz - 1;
	//printf("请选择你要找的数字:");
	//scanf("%d", &k);

	////int mid = （left+right）/2;//如果是long long类型的可能会溢出
	////所以用下面的不会有风险
	//while (left <= right) //注意这里的left是小于等于right
	//{
	//	int mid = left + (right - left) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("找到了,下标为%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到\n");
	//}

	//sizeof和strlen() 计算字符串的时候有区别
	//例如：
	//char buf[] = "abc";// a b c \0
	//printf("%d\n", sizeof(buf)); //4
	//printf("%d\n", strlen(buf)); //3
	//sizeof会比实际字符串长度要长，因为把'\0'也算进去了


	//char arr1[] = "welcome to bit!!!!";
	//char arr2[] = "##################";
	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];

	//	printf("%s\n", arr2);
	//	Sleep(1000);//休眠的一个库函数,头文件windows.h
	//	//清空屏幕
	//	system("cls");//system的一个库函数,可以执行系统命令,头文件stdlib.h
	//	left++;
	//	right--;

	//}

	return 0;
}