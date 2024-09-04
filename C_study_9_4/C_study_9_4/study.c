#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
 
//void menu()
//{
//	printf("******************************\n");
//	printf("*******   0.exit   ***********\n");
//	printf("*******   1.play   ***********\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	//1.生成随机数
//	//随机数范围在1~100之间
//	int ret = rand()%100+1;
//	int k = 0;
//	int i = 0;
//	printf("你有十次机会猜数字\n");
//	//2.猜数字
//	while (i<10)
//	{
//		printf("请输入目标数字:>");
//		scanf("%d", &k);
//		if (ret > k)
//		{
//			printf("猜小了\n");
//			i++;
//		}
//		else if (ret < k)
//		{
//			printf("猜大了\n");
//			i++;
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j=2;j<=sqrt(n);j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

//int is_leap_year(int year)
//{
//	if ((year %4==0) && (year %100 !=0) || (year%400 ==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int binum_search(int arr[], int sz, int k,int* pco)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;//中间值
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			*pco = mid;
//			return 1;
//		}
//	}
//	if(left >right)
//	{
//		return -1;
//	}
//}


//void ADD(int* pn)
//{
//	(*pn)++;
//}


int main()
{
	////比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
	////如果返回值是0，表示两个字符串相等
	//int i = 0;
	//char password[20] = { 0 };
	////假设密码是字符串：abcdef
	//for (i=0;i<3;i++)
	//{
	//	printf("请输入密码:>");
	//	scanf("%s", password);
	//	if (strcmp(password, "abcdef") == 0)
	//	{
	//		printf("登录成功\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("密码错误\n");
	//	}
	//}
	//if (3 == i)
	//{
	//	printf("三次密码均输入错误，退出程序\n");
	//}
	//

	//数组传参时，传的是数组首元素地址，需要指针变量接收


	//写一个猜数字游戏
	//int input = 0;

	//do
	//{
	//	menu();
	//	printf("请选择:>");
	//	scanf("%d", &input);
	//	//time()为时间戳,\
	//	//srand()为生成随机数的起点
	//	srand((unsigned int)time(NULL));
	//	switch (input)
	//	{
	//		case 0:
	//			printf("退出游戏\n");
	//			break;
	//		case 1:
	//			game();
	//			break;
	//		default:
	//			printf("输入的数字有误!\n");
	//			break;
	//	}

	//} while (input);



	//要想用随机数就可以用库函数rand(),头文件为stdlib.h
	//time()为时间戳   括号里要放指针，可以为空指针
	//使用rand()函数，得先用srand(),srand()为随机数的起始位置

	//int ret=rand()%100      ret的范围在0~99
	//int ret=rand()%100+1    ret的范围在1~100

	//goto语句
	//


	//函数
	//库函数
	//自定义函数


	//当实参传入形参时，形参只是实参的一份临时拷贝
	//对形参的修改不会影响实参

	//想要改变实参的值就要取地址

	//一个工程中可以有很多.c文件,但是只能有一个main函数
	//实参可以是：常量、变量、表达式、函数等，无论实参是何种类型的量
	//在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参

	//形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效.

	//形参实例化之后其实就相当于实参的一份临时拷贝
	
	//传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
	//传址调用：1.传址调用时把函数外部创建变量的内存地址传递给函数参数的一种
	//调用函数的方式
	//2.这种传参方式可以让函数与函数外边的变量建立起真正的联系，也就是函数
	//内部可以直接操作函数外部的变量

	//sqrt(m) 给m开平方的意思
	//打印出100到200之间的素数
	//一个数m如果不是素数，他的成员绝对<=sqrt(m)
	//int i = 0;
	//for (i=100;i<=200;i++)
	//{
	//	//100到200之间的数
	//	int j = 0;
	//	int flag = 1;//如果flag为1则为素数，如果flag为0则不为素数
	//	for (j=2;j<=sqrt(i);j++)
	//	{
	//		if (i%j ==0)
	//		{
	//			flag = 0;
	//		}
	//	}
	//	if (1 == flag)
	//	{
	//		printf("%d  ", i);
	//	}
	//}

    //找100~200之间有多少素数
	/*int i = 0;
	int count = 0;
	for (i=101;i<=200;i+=2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}	
	printf("\ncount=%d\n", count);*/


	//int year = 0;
	//for (year=1000;year<=2000;year++)
	//{
	//	//判断year是不是闰年
	//	if (is_leap_year(year))
	//	{
	//		printf("%d ", year);
	//	}
	//}
    
	//写一个函数，用二分查找找有序数组中的某个数
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int co = 0;
	//printf("请选择你要查找的数字:>");
	//scanf("%d",&k);
	////规定返回1就是找到了，返回-1就是没找到
	//int ret = binum_search(arr, sz, k,&co);
	//if (-1 == ret)
	//{
	//	printf("没找到\n");
	//}
	//else
	//{
	//	printf("找到了，下标是:%d\n",co);
	//}


	//数组传参时传的是第一个元素的地址，所以不能在函数内部计算数组个数
	//bool类型    头文件stdbool.h
	//bool也是一个字节，但是一般都不用bool,false就等于0，true就等于非0

	//写一个函数，每调用一次这个函数，就会将num的值增加1
	//
//int num = 0;
//ADD(&num);
//printf("%d\n",num);
//ADD(&num);
//printf("%d\n", num);

//函数的嵌套和链式访问
//1.函数的嵌套
//函数可以嵌套调用，但是不能嵌套定义

//int len = strlen("abcdef");
//printf("%d\n",len);
//
////链式访问
//printf("%d\n",strlen("abcdef"));


	//链式访问:把一个函数的返回值作为另一个函数的参数
    //printf()返回值是输出字符的个数
   // printf("%d", printf("%d", printf("%d", 43)));//4321


	//main函数不需要参数，但是本质上main函数是有参数的
    //int mian(int argc,char* argv[],char* envp[])
	//{}

	//函数的声明和定义:
	//函数要先声明后使用，函数的声明一把要放在头文件中

	//在一个大项目中，不可能是你一个人搞定所有模块
	//所以每个人都有自己负责的板块，所以要分开来写，然后用头文件引用
	//#pragma once是为了防止头文件重复包含
	// 
	//或者使用条件预编译
	//#ifndef __TEST_H__
	//#define __TEST_H__
	////函数的声明
	//int add(int x,int y)
	//#endif//__TEST_H__
	////这样也可以防止头文件被重复声明


	
	
	return 0;
}