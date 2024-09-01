#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//函数
	//1.选择语句  if...else...   switch语句
	//2.循环语句  while循环    for循环   do...while循环



	//数组：一组相同类型元素的集合
	//数组名就是地址，数组可以通过下标来访问数组
	//数组的下标是从0开始的
	//ASCII码值
	//数字0:0
	//字符0：48
	//'\0' ：0
	//EOF是文件结束标志，值是-1
	//strlen是用来求字符串长度的，是直到遇到'\0'才停止
	//在C99标准之前，数组的大小都是用常量或者常量表达式来指定\
	//在C99标准之后，支持了变长数组，这时候允许数组的大小是变量
	//但是这种指定的方式不能初始化
	//例:int m=10;
	//int arr[m];

	//操作符
	//1.算数操作符+ - * / %
	//+ - *不必多说
	// / 需要注意左右两边的数是整数还是浮点数
	//例如：int a=7/2  //3
	//float a=7/2.0  //3.5000
	//如果来那个后端只要有一个浮点数就执行浮点数的除法
	//%取模操作符
	//int a=7%2   //1

	//移位操作符
	// 左移操作符<<     右移操作符>>
	//左移操作符是某个数的二进制位向左边移动n位，右边补0
	//右移操作符包含了算数运算和逻辑运算
	
	//算数运算是某个数的二进制位向右边移动n位，左边按照原来数的
	//最高符号位进行补满
	
	//逻辑运算是某个数的二进制位向右边移动n位，左边补0

	//VS编译器是算数运算符

	//位操作符
	//按位与&  按位或|  按位异或^
	//按位与&  按照二进制位，同为1取1，不同取0
	//按位或|  按照二进制位，同为0取0，不同取1
	//按位异或 按照二进制位，相同为0，不同为1

	//00000010&
	//00001010
	//00000010

	//00001010|
	//00010101
	//00011111

	//00001010^
	//00010111
	//00011101 

	//按位异或满足交换律
	//5^5=0;
	//0^6=6;
	//3^2^3=2;

	//一道面试题
	//如何开辟临时变量（第三个临时变量），把两个变量的数字交换
	//int a = 2;
	//int b = 4;
	//a = a ^ b;//
	//b = a ^ b;//b=a^b^b=a
	//a = a ^ b;//a=a^b^a=b
	//printf("a=%d b=%d\n", a, b);

	//单目操作符
	//! 逻辑反操作 
	//- 负值
	//+ 正值
	//& 取地址,和指针有关
	//sizeof  操作数的类型长度（以字节为单位）
	//~  对一个数的二进制按位取反
	//-- 前置，后置减减
	//++ 前置，后置加加
	//*  间接访问操作符（解引用操作符）
	//(类型)  强制类型转换

	//在C语言中，0表示false，1表示true
	//sizeof(arr)/sizeof(arr[0]) //求的是数组的元素个数
    //在使用数组名是数组名表示的是首元素地址，但是有两个例外
	//第一个例外，sizeof(数组名)  求得是整个数组的大小，单位字节
	//第二个例外，&数组名,表示的整个数组的地址
	//除此之外，数组名表示首元素地址

	//++和--
	//int a=10;
	//int b=a++;
	//后置++ 是先使用，后++
	//此时a为11，b为10

	/*int a = 10;
	int b = ++a;
	printf("a=%d b=%d\n", a, b);*/
	//前置++ 是先++，后使用
	//此时a为11，b为11

	
	
	return 0;
}