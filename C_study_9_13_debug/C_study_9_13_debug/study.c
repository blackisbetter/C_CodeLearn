#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* dest,const char* src)//优化版本
{
	char* ret = dest;
	assert(src);
	assert(dest);
	while (*dest++ = *src++)//先解引用,再++
	{
		;
	}
	return ret;
}

int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}


int main()
{
	//关于调试（debug）
	//总结：调试很重要(doge)
	//
	//Debug和Release的介绍
	//Debug通常称为调试版本，包含了调试信息，并且不做任何优化，便于程序员调试程序
	//Release称为发布版本,它往往进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户使用

	//介绍VS这个编译器的快捷键
	//F5:启动调试，经常用来直接跳到下一个断点处
	//F9:创建断点和取消断点
	//断点的重要作用，可以在程序的任意位置设置断点
	//这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去。

	//F10:逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句

	//F11:逐语句，就是每次都只执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部(最常用)

	//CTRL+F5:开始执行不调试

	//在F10调试起来后，可以打开窗口进行监视，方便调试


	//多多调试才有进步。


	//nice校招笔试题
	//在Linux  x86_64 gcc环境下，下面程序会出现什么问题？运行结果是什么？为什么？
	// 
	//int i=0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	////0~9
	//for (i=0;i<=12;i++)
	//{
	//	arr[i] = 0;
	//	printf("hehe\n");
	//}

	//先说结果:上述的程序会死循环
	//原因：1.栈区的内存使用习惯是先使用高地址，再使用低地址。
	//2.数组在随着数组下标的增加，地址是从低地址到高地址变化的
	//3.当i和arr数组中存在适当的空间，当数组越界访问就可能会覆盖i,就可能会造成死循环。

	//常见的coding技巧：
	//1.尽量使用assert断言
	//2.尽量使用const
	//3.养成良好的编码风格
	//4.添加必要的注释
	//5.避免编码的陷阱

	//
	//strcpy库函数
	//strcpy库函数在拷贝字符串的时候，会把源字符串中的\0也拷贝进去

	/*char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] = "hello world";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);*/

	//assert的用法
	//assert(condition);
	//condition：要判断的条件
	//condition是假的话，程序就会终止

	//说明：1.如果condition判断结果为false，则程序就会停止执行
	//2.当程序停止执行时，assert就会断言失败，并输出一条程序的错误信息到控制台或者日志文件中
	//3.assert关键字常常用于调试程序阶段，可以用来帮助程序员在程序出现异常或者错误时，
	//快速定位问题所在，以便于检查和修改完善
	//4.而在程序正常部署后，assert一般就会被自动关闭。

	//关于const的运用
	//const 修饰指针变量
	//1.const 放在*左边
	//意思是：p指向的对象不能通过p来改变了，但是p变量本身的值是可以改变的
	//*p=20;//err
	
	//2.const放在*的右边
	//意思是：p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值

	//对自己模仿strcpy写的my_strcpy进行优化
	//strcpy函数返回的是目标空间的起始地址
	//为什么会返回char* 呢？
	//是为了实现链式访问


	/*char* my_strcpy(char* dest,const char* src)
	{
		char* ret = dest;
		//ret为目标空间的首地址
		assert(dest);
		assert(src);
		while (*dest++ = *src++)
		{
			；
		}
		return ret;
	}*/


	//模拟实现一个strlen函数
	//求字符串长度的

	/*char arr[] = "abcdef";
	int ret=my_strlen(arr);
	printf("%d\n",ret);*/


	//编程的常见错误
	//1.编译型错误(语法错误)
	//2.链接型错误--->一般都是标识符名不存在或者拼写错误。
	//3.运行时错误--->借助调试，逐步定位问题，最难搞。

	
	//三角形判断
	//输入三条边a,b,c，看三条边能不能构成三角形,如果能构成三角形,判断三角形的类型(等边，等腰或普通)
	//

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d%d%d", &a, &b, &c);
	//if ((a+b>c) && (a+c>b) && (b+c>a))//先得是三角形
	//{
	//	if (a==b && b==c)
	//	{
	//		printf("全等三角形\n");
	//	}
	//	else if ((a==b &&b != c) || (a==c && c != b) ||(b==c && c!=a))
	//	{
	//		printf("等腰三角形\n");
	//	}
	//	else
	//	{
	//		printf("普通三角形\n");
	//	}
	//}
	//else
	//{
	//	printf("不是三角形\n");
	//}
	//

	


	return 0;
}