#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//void PRINT(unsigned int n)
//{
//	if (n>9)
//	{
//		PRINT(n / 10);//123
//	}
//	printf("%d ",n % 10);//4
//}

//求字符串长度的函数递归版
//int Strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen(str + 1);//加1，str向后走一步
//	}
//}
//
////求字符串长度的函数普通版
//int my_strlen(char* pc)
//{
//	assert(pc);
//	int count=0;
//	while (*pc != '\0')
//	{
//		count++;
//		pc++;
//	}
//	return count;
//}
//
//int factorial(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int cmp_int_arr(const void* e1,const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}

//int main()
//{
//	//函数递归
//	//函数递归的两个必要条件:
//	//1.存在限制条件,当满足这个限制条件的时候,递归不再继续
//	//2.每次递归调用之后越来越接近这个限制条件
//
//	//接受一个整形值（无符号）,然后按照顺序打印它的每一位
//	//例如：输入1234   输出：1 2 3 4
//	/*unsigned int num = 0;
//	scanf("%d", &num);
//	PRINT(num);*/
//
//	//编写函数不允许创建临时变量，求字符串长度
//
//	//char* p = "abcdef";
//	//int len = Strlen(p);
//	//printf("%d\n", len);
//
//	//模拟实现strlen函数，求字符串长度函数
//	/*char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);*/
//
//	//递归与迭代
//	//求n的阶乘(不考虑溢出)
//	//n*(n-1)*(n-2)...*1
//	/*int k = 0;
//	scanf("%d", &k);
//	int len=factorial(k);
//	printf("%d\n", len);*/
//
//
//	//用递归的方式求第n个斐波那契数列（不考虑溢出）
//	//1 1 2 3 5 8 13
//	//int k = 0;
//	//scanf("%d", &k);
//	//fib(k);
//
//
//	//求两个数之间的最大公约数
//	//两个数的最小公倍数=两个数相乘/最大公约数
//	/*int k = 0;
//	int n = 0;
//	int c = 0;
//	scanf("%d%d", &k, &n);
//
//	while (c=k%n)
//	{
//		k = n;
//		n = c;
//	}
//	printf("%d\n", n);*/
//
//
//	//求1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值，并打印
//	/*int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i=1;i<=100;i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);*/
//
//
//	//求10个整数中的最大值
//	/*int arr[] = { 3,1,5,2,9,7,8,4,0,6 };
//	int max = arr[0];
//	int i = 0;
//	for (i=1;i<10;i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);*/
//
//	//int arr[] = { 3,1,5,2,4,8,6,7,9 };
//	/*int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int_arr);
//	int i = 0;
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//
//	//int arr[] = { 3,1,5,2,4,8,6,7,9 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//for (i=0;i<sz-1;i++)
//	//{
//	//	//比多少趟
//	//	int j = 0;
//	//	for (j=0;j<sz-1-i;j++)
//	//	{
//	//		//一趟要比多少个元素
//	//		if (arr[j]>arr[j+1])
//	//		{
//	//			int tmp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = tmp;
//	//		}
//	//	}
//	//}
//	//
//	//for (i=0;i<sz;i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//
//
//	//打印99乘法表
//	//int i=0;
//	//for (i=1;i<=9;i++)
//	//{
//	//	//打印9行
//	//	int j = 0;
//	//	for (j=1;j<=i;j++)
//	//	{
//	//		printf("%d*%d=%-2d ", i, j, i * j);//%-2d向左对齐2位数
//	//	}
//	//	printf("\n");//打印完一行换行
//	//}
//
//
//	//逗号表达式的结果是最后一个
//
//	//数组
//	//数组：数组是一组相同类型元素的集合
//	/*int arr[10];
//	char ch[5];*/
//	//下面的代码只能在支持C99编译器上编译
//	//int n = 10;
//	//int arr1[n];
//
//	//在C99标准之前，数组的大小必须是常量或者常量表达式
//	//在C99标准之后，数组大小可以是变量，为了支持边长数组
//
//	//数组的初始化
//	//int arr1[] = { 1,2,3,4,5 };
//	//char ch1[] = "abc";//四个元素，包含\0
//	//char ch2[] = { 'a','b','c' };//3个元素abc
//
//	//一维数组的使用
//	//数组是使用下标来访问的，下标是从0开始。
//	//数组的大小可以通过计算得到。
//	//sizeof(arr)                  数组的总大小
//	//sizeof(arr[0])               数组一个元素的大小
//	//sizeof(arr)/sizeof(arr[0])   数组元素的个数
//
//
//	//二维数组的创建和初始化
//	//int arr[3][4];//3行4列
//	//char arr[3][5];//3行5列
//	//double arr[2][4];
//	//创建的时候行可以省略，但是列不能省略
//
//
//	//二维数组的使用
//	//二维数组的使用也是通过下标的方式
//	//int arr1[3][4] = { {1,2},{3,4},{5,6} };//不完全初始化
//	//int arr2[3][4] = { 1,2,3,4,5,6 };//不完全初始化
//	//int i = 0;
//	//for (i=0;i<3;i++)
//	//{
//	//	int j = 0;
//	//	for (j=0;j<4;j++)
//	//	{
//	//		printf("%d ", arr1[i][j]);
//	//	}
//	//}
//
//	//int i = 0;
//	//int arr[3][4];
//	//for (i=0;i<3;i++)
//	//{
//	//	int j = 0;
//	//	for (j=0;j<4;j++)
//	//	{
//	//		printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//	//	}
//	//}
//
//	//通过结果我们可以分析到，其实二维数组在内存中也是连续存储的
//	//数组越界：
//	//数组的下标是有范围的
//	//数组的下标从0开始，如果数组有n个元素,最后一个元素的下标就是n-1
//	
//
//
//	//数组传参的时候，形参有两种写法:
//	//1.数组
//	//2.指针
//	
//	//冒泡排序的核心思想：两个相邻的元素进行比较
//	//一趟冒泡排序让一个数据来到它最终应该出现的位置上！！！！
//
//
//	//冒泡排序函数的典型错误就是在函数里求数组的长度，其实传的是地址，而不是整个数组
//	//数组名是什么？
//	//
//	//数组名是首元素地址
//	//但是有两个例外：
//	//1.sizeof(数组名),这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 	//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//	//int arr[10] = { 0 };
//	//printf("%p\n",arr);//arr就是首元素的地址
//	//printf("%p\n",arr+1);
//	//printf("-----------------\n");
//	//printf("%p\n",&arr[0]);//首元素的地址
//	//printf("%p\n",&arr[0]+1);
//	//printf("-----------------\n");
//	//printf("%p\n",&arr);//数组的地址
//	//printf("%p\n",&arr+1);
//
//
//	//sizeof(数组名)计算的是整个数组的大小
//	//int arr[10] = { 0 };
//	//printf("%zu\n", sizeof(arr));
//	
//
//
//	//二维数组的数组名理解：
//	//二维数组的数组名也表示首元素地址，不过是一个一维数组
//	//
//	//计算二维数组的行和列有多少个
//	//int arr[3][4] = { 0 };
//	//printf("%d\n",sizeof(arr)/sizeof(arr[0]));//行
//	//printf("%d\n",sizeof(arr[0])/sizeof(arr[0][0]));//列
//
//
//	
//
//	return 0;
//}