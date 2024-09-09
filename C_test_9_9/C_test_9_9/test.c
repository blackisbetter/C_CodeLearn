#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//char* reverse_string(char* pstr,int len)//指针形式
//{
//	char* ps = pstr;
//	int left = 0;
//	int right = len - 1;
//
//	while (left<=right)
//	{
//		char tmp = pstr[left];
//		pstr[left] = pstr[right];
//		pstr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//	return ps;
//}

//void reverse_string(char arr[],int left,int right)//递归形式
//{
//	if (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		if (left < right)
//			reverse_string(arr,left+1,right-1);
//	}
//}

//int DigitSum(int n)//非递归版本
//{
//	int sum = 0;
//	while (n>9)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	sum += n;
//	return sum;
//}

//递归要有条件限制,每一次都越来越接近这个条件
//int DigitSum(int n)//递归方式
//{
//	int sum = 0;
//	if (n > 9)
//		return DigitSum(n / 10)+ n % 10 ;
//	else
//		return n;
//}

//double Pow(int n,int k)//非递归实现
//{
//	//计算n的k次方
// //有缺陷,没考虑到k为负数的情况
//	int count = k;
//	double num = 1;
//	while (count)
//	{
//		num*= n;
//		count--;
//	}
//	return num;
//	
//}

//double Pow(int n,int k)//递归实现
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}

int main()
{

	//字符串逆序
	//编写一个逆序函数reverse_string 函数（递归实现）
	//例:char str[]="abcdef";
	//逆序之后变为:"fedcba";
	/*char str[] = "abcdef";
	int len = strlen(str);
	int left = 0;
	int right = len - 1;
	reverse_string(str,left,right);
	printf("%s\n",str);*/

	//计算一个数的每位之和(递归实现)
	//写一个递归函数DigitSum(n),输入一个非负数,返回组成它的数字之和
	//例如：DigitSum(1729),则应该返回1+7+2+9,它的和是19

	/*int k = 0;
	scanf("%d",&k);
	int ret=DigitSum(k);
	printf("%d\n",ret);*/

	//递归实现n的k次方
	//int n = 0;
	//int k = 0;
	////对n和k进行取值
	//scanf("%d%d", &n, &k);

	//double ret=Pow(n,k);
	//printf("%.2lf\n",ret);


	//逗号表达式
	//
	//int arr[] = {1,2,(3,4),5};//逗号表达式 1,2,4,5
	//printf("%d\n",sizeof(arr));//16

	//数组也有类型,such as:int arr[10];
	//数组的类型为::: 去掉数组名剩下的就是数组类型 int [10]
	//int arr[10] = { 0 };
	//printf("%d\n",sizeof(int [10]));//int [10]是arr的数组的类型

	//sizeof和strlen的区别
	//sizeof是一个操作符
	//是用来计算变量（类型）所占内存空间大小的，不关注内存中存放的具体内容
	//单位是字节

	//strlen
	//strlen是一个库函数,是专门求字符串长度的，只能针对字符串
	//从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数
	//字符串的结束标志就是 '\0'

	//将数组a中的内容和数组b中的内容进行交换。(数组一样大)
	//int arr1[] = {1,3,5,7,9};
	//int arr2[] = { 2,4,6,8,0};
	//int sz = sizeof(arr1)/sizeof(arr1[0]);//数组的长度
	//int left = 0;
	//int right = sz - 1;
	//while (left<right)
	//{
	//	int tmp = arr1[left];
	//	arr1[left] = arr2[left];
	//	arr2[left] = tmp;
	//	left++;
	//}
	//int i = 0;
	//printf("arr1=");
	//for (i=0;i<sz;i++)
	//{
	//	
	//	printf("%d ", arr1[i]);
	//}
	//printf("\n");
	//printf("arr2=");
	//for (i=0;i<sz;i++)
	//{
	//	printf("%d ", arr2[i]);
	//}

	return 0;
}