#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//操作符详解
	//1.操作符分类:算数操作符，移位操作符，位操作符，赋值操作符
	//单目操作符,关系操作符，逻辑操作符，条件操作符，逗号表达式，
	//下标引用、函数调用和结构成员

	//算数操作符
	//+ - * / %
	//+ - * 不必过多解释
	//  /号两边都是整数，默认是整数除法，如果想要有小数点，则两边的数至少有一位是小数
	//  7/4    7/4.0
	//printf("%d\n", 7 / 4);
	//printf("%lf\n", 7 / 4.0);

	// %号  %的两边必须都是整数


	//整数的二进制表示有3种
	//原码：
	//反码:原码最高位符号位不变，其他按位取反
	//补码:反码+1

	//整数在内存中存的都是补码
	//正数的原码反码补码相同
	//

	//7
	//原：00000000000000000000000000000111
	//反：00000000000000000000000000000111
	//补：00000000000000000000000000000111

	//-7
	//原：10000000000000000000000000000111
	//反：11111111111111111111111111111000
	//补：11111111111111111111111111111001


	//左移操作符:<<
	//左边丢弃，右边补0
	//int a = 7;
	//int b = a << 1;
	//printf("a=%d\n",a);
	//printf("b=%d\n",b);
	//7
	//00000000000000000000000000000111
	//00000000000000000000000000000111
	//00000000000000000000000000000111
	//<<
	//00000000000000000000000000001110
	//正数原反补码相同
	//所以左移1 过后，7变成了14


	//右移操作符:1.算数移位  2.逻辑移位
	//1.算数移位：右边丢弃，左边补原符号位
	//2.逻辑移位：右边丢弃，左边补0

	//取决于编译器的右移>> 采用的是算数移位还是逻辑移位
	//VS采用的是算数移位，个人感觉算数移位更符合常理认知
	//

	//移位操作符的操作数只能是整数
	//左移操作符
	//移位规则：左边抛弃、右边补0
	/*int num = 68;
	int num1 = num << 1;
	printf("%d\n", num1);*/
	//在使用左移一位的时候，相当于*2了

	//右移操作符
	//移位规则：
	//首先右移运算分为两种:
	//1.逻辑移位:左边补0，右边丢弃
	//2.算数移位:左边补原来值的符号位，右边丢弃

	/*int num = -1;
	int num1 = num >> 1;
	printf("num=%d\n", num);
	printf("num1=%d\n",num1);
	*/

	//采用的是算数移位
	//-1
	//原：10000000000000000000000000000001
	//反：11111111111111111111111111111110
	//补：11111111111111111111111111111111

	//算数移位
	//补:11111111111111111111111111111111
	
	//逻辑移位：
	//补:01111111111111111111111111111111
	//逻辑移位后就变成了一个很大的数
	//验证过后发现VS中采用的是算数移位


	//对于移位运算符,不要移动负数位，这个标准是未定义的
	//例如：int num=10;
	//num>>-1   这个是不允许的  error

	//位操作符
	//位操作符有：&按位与   |按位或   ^按位异或
	//注：它们的操作数都必须是整数

	//& - 按（二进制）位与
	//| - 按（二进制）位或
	//^ - 按（二进制）位异或
	
	//规则：
	//按位与&:同为1取1，不同取0
	//按位或|:同为0取0，不同取1
	//按位异或：相同为0，不同为1

	/*int a = 3;
	int b = -5;
	int c = a & b;*/

	//3
	//00000000000000000000000000000011

	//-5
	//10000000000000000000000000000101
	//11111111111111111111111111111010
	//11111111111111111111111111111011

	//3&-5
	//00000000000000000000000000000011
	//11111111111111111111111111111011
	//00000000000000000000000000000011
	//printf("c=%d\n", c);

	//一道变态的面试题
	//不能创建临时变量（第三个变量），实现两个数的交换。
	//可以使用  按位异或^
	//按位异或^有个特点
	//a^0=a
	//a^a=0

	//int a = 10;
	//int b = 20;
	//a = a ^ b;
	//b = a ^ b;//b=a^b^b --->b=a
	//a = a ^ b;//a=a^b^a --->a=b
	//printf("a=%d\n",a);
	//printf("b=%d\n",b);

	//编写代码实现：求一个整数存储在内存中的二进制中1的个数
	//整数包括正数和负数
	//我在这里只写了正数的，负数的判断应该要限制位数，int型为32位
	//int num = 0;
	//int count = 0;
	//int dex = 0;
	//scanf("%d",&num);
	//while (dex<32)
	//{
	//	int ret = num & 1;
	//	if (ret == 1)
	//	{
	//		count++;
	//		num >>= 1;
	//		dex++;
	//	}
	//	else
	//	{
	//		num >>= 1;
	//		dex++;
	//	}
	//}
	//printf("%d\n",count);

	//赋值操作符
	//=
	//int weight=120;//体重
	//weight=89;  //不满意就赋值
	
	//复合赋值符
	//+=   -=    *=    /=   %=  <<=   >>=   &=  |=  ^=
	//这些运算符都可以写成复合的效果

	//6.单目操作符
	//6.1单目操作符介绍

	//! 逻辑反操作
	//- 负值
	//+ 正值
	//& 取地址
	//sizeof 操作数的类型长度(以字节为单位)
	//~  对一个数的二进制按位取反
	//-- 前置、后置--
	//++ 前置、后置++
	// *  间接访问操作符(解引用操作符)
	//(类型)  强制类型转换

	//flag为真，进入if
	/*if(flag)
	{
	}*/
	
	//flag为假，进入if
	/*if(!flag)
	{
	}*/

	//C语言中0为假，非0为真

	//int a = 10;
	//sizeof(a);//计算的是a所占内存的大小，单位是字节
	//sizeof是一个操作符
	//计算的是变量所占内存空间的大小，单位是字节
	//计算类型所创建的变量占据空间的大小,单位是字节
	

	/*int a = 3;
	int b = ~a;*/
	//3
	//00000000000000000000000000000011
	//~3
	//11111111111111111111111111111100  -补码
	//11111111111111111111111111111011
	//10000000000000000000000000000100  -原码
	//~3变成了-4


	//int a = 29;
	//printf("%d\n", a);
	//a &= (~(1 << 4));
	//printf("%d\n",a);

	//1
	//000000000000000000000000000000001
	//<<4
	//000000000000000000000000000010000 
	//~
	//111111111111111111111111111101111 -补码
	//111111111111111111111111111101110 
	//100000000000000000000000000010001 -17原码
	//&=
	//000000000000000000000000000011101 -29原码补码

	//111111111111111111111111111101111
	//&=
	//000000000000000000000000000011101
	//000000000000000000000000000001101 -13补码原码


	//想要把某一个数的二进制位上的0变成1，可以让 a |=(1<<n-1)
	//就可以把某个数的二进制位上的0变成1
	//因为按位或的运算规则是 同为0取0，不同取1
	
	/*int a = 13;
	a |= (1 << 1);
	printf("%d\n", a);*/
	//13
	//00000000000000000000000000001101 ---13补码
	//00000000000000000000000000000010 ---1<<1
	//00000000000000000000000000001111 ---15补码


	//int a = 10;
	//printf("%d\n",a--);// a--为10  然后a为9
	//printf("%d\n",a); //  a=9

	//int a = 10;
	//test(a--);//传进test函数的时候a--是10，但是a变成了9

	//sizeof是一个单目操作符,不是函数
	//strlen是一个库函数,是用来求字符串长度的

	//关系操作符
	//>  >=  <  <=   !=   ==
	//这些操作符比较简单，值得注意的是在编程过程中的== 和 =不小心写错导致的错误
	//所以老手写代码用关系操作符时一般喜欢把常量放在前面，变量在后面
	



	//注意:

	//void test1(int arr[])
	//{
	//	printf("%d\n", sizeof(arr));//4or8

	//}
	//void test2(char ch[])
	//{
	//	printf("%d\n", sizeof(ch));//4or8

	//}

	//int arr[10] = { 0 };
	//char ch[10] = { 0 };
	//printf("%d\n",sizeof(arr));//40
	//printf("%d\n",sizeof(ch));//10

	//test1(arr);
	//test2(ch);

	//因为数组名一般都表示首元素地址，但是有两个特例
	//1.sizeof(数组名)  这里的的数组名就表示数组的所有元素,
	// sizeof求的是数组所有元素占内存多大空间,单位是字节
	//2.&数组名  这里的数组名表示的是取数组所有元素
	
	//所以上面的sizeof（数组名）求的是数组所有元素的大小，单位字节
	//但是数组名作为首元素地址，是一个地址，在计算指针时候，看的是编译器的环境
	//取决于编译器的环境（32位是4，64位是8）

	//if("abc" == "abcdef")
	//比较两个字符串不是用直接比相不相等，而是使用库函数strcmp
	//if(strcmp("abc","abcdef") ==0)  strcmp返回0，则两个字符串相等


	//逻辑操作符
	//1.&&逻辑与
	//2.||逻辑或

	//和按位与，按位或 做一下区分

	//逻辑与&& 遇假则假，全真为真  左边遇到假的就为假，后面就不看了
	//逻辑或|| 遇真为真，全假则假  左边遇到真的就为真，后面就不看了
	
	
		
	/*int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//a++为0，&&的运算规则是左边为假则为假，后面就不计算了
	//a++过后，a为1
	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);*///1 2 3 4


	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;
	//a++为真，||的运算规则是左边为真，后面就不计算了
	//a++为1，然后a为2
	//printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//2 2 3 4

	
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;
	//逻辑||的运算规则，有真则真，后面不看，全假则假
	//a++  a=1 ++b=3 b=3
	//printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1 3 3 4
	
	//前置++ -- 和后置++ --的区别
	/*int a = 10;
	int b = 10;
	printf("++a=%d\n",++a);
	printf("b++=%d\n",b++);
	printf("a=%d\n", a);
	printf("b=%d\n",b);*/

	//条件操作符(三目操作符)
	//表达式1？表达式2：表达式3
	// 表达式1为true，则执行表达式2
	// 表达式1为false，则执行表达式3

	//逗号表达式
	//exp1,exp2,exp3,...expN...
	//逗号表达式，就是用逗号隔开的多个表达式
	//逗号表达式，从左往右依次执行。整个表达式的结果是最后一个表达式的结果
	//看最后一个表达式的结果,但是左边的表达式可能会影响最后一个表达式,所以从左往右执行

	
	//下标引用、函数调用和结构成员
	//1.[]下标引用操作符
	//操作数：一个数组名+一个索引值
	
	//int arr[10];//创建数组
	//arr[9] = 10;
	//[]的两个操作数是 arr 和9

	//2.函数调用操作符()
	//接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的操作数
	
	int arr[10] = { 0 };
	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
	//所以arr和7是[]的两个操作数
	
	//3.访问一个结构的成员
	// .     结构体.成员名
	// ->    结构体指针->成员名
	// 
	// 	
	return 0;
}