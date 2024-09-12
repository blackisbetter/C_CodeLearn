#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <math.h>

//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}

int is_LilyNum(int n)
{
	double num = 0;
	//判断是否为LilyNumber
	int i = 0;
	for (i=4;i>0;i--)
	{
		num += (n / (int)(pow(10, i))) * (n % (int)(pow(10,i)));
	}
	if (n == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	//操作符的优先级与结合性
	// () 聚组 N\A  否
	// () 函数调用 L-R 否
	// [] 下标引用 L-R 否
	//  . 访问结构体 L-R 否
	//  -> 访问结构体指针 L-R
	//  ++ 后缀自加   L-R  否
	//  -- 后缀自减   L-R  否
	//  !  逻辑反   R-L  否
	//  ~  按位取反   R-L  否
	//  +  单目，正值  R-L 否
	//  -  单目，负值  R-L 否
	//  ++  前缀自加    L-R  否
	//  --  前缀自减    L-R  否
	//  *  间接访问    R-L 否
	//  &  取地址      R-L 否
	//  sizeof 求长度，单位字节 R-L 否
	//  ()  类型转换    R-L  否
	//   *  乘法        L-R  否
	//  /   除法        L-R  否
	//  %   取模        L-R  否
	// <<   左移        L-R  否
	// >>   右移        L-R  否
	// >
	// >=
	// <
	// <=
	// ==
	// !=
	// &    按位与      L-R  否
	// ^    按位异或    L-R  否
	// |    按位或      L-R  否
	// &&   逻辑与      R-L  是
	// ||   逻辑或      R-L  是
	// ？： 条件判断    N/A  是
	// =    赋值       R-L  否
	// +=              R-L  否
	// -=   
	// *=
	// /=
	// %=
	// <<=
	// >>=
	// &=
	// ^=
	// |=
	//  ,   逗号       L-R  是



	//走台阶
	//一共有n节台阶，每次可以走一步或者两步台阶，问一共有多少种走法？
	//斐波那契数列的求法，f(n)=f(n-1)+f(n-2)

	/*int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("台阶数=%d\n",ret);*/

	
	//序列中删除指定的数字
	//输入描述：
	//第一行输入一个整数（N>=0 && N<=50）
	//第二行输入N个整数，输入用空格分隔的N个整数
	//第三行输入想要进行删除的一个整数

	//输出描述:
	//输出为一行，删除指定数字之后的序列

	//例:
	//6
	//1 2 3 4 5 9
	//4
	//输出:
	//1 2 3

	//方法1：使用2个数组
	//int n = 0;
	//int k = 0;
	//int arr[50] = { 0 };
	//int arr1[50];
	//int count = 0;
	//scanf("%d",&n);
	//int i = 0;
	//int j = 0;
	//for (i=0;i<n;i++)
	//{
	//	scanf("%d ", arr + i);
	//}
	////输入想删除的那个整数
	//scanf("%d",&k);


	//for (i=0;i<n;i++)
	//{
	//	if (arr[i] != k)
	//	{
	//		arr1[j++] = arr[i];
	//		count++;
	//	}
	//	
	//}
	//
	//for (i=0;i<count;i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	
	//方法2：把想要留下的元素重新赋给数组，跳过想删除的元素

	/*int n = 0;
	int k = 0;
	int i = 0;
	int arr[50] = { 0 };
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}

	scanf("%d",&k);
	
	int j = 0;
	for (i=0;i<n;i++)
	{
		if (arr[i] != k)
		{
			arr[j++] = arr[i];
		}
	}
	//用j来存放不需要删除的元素的下标索引,遇到需要删除的数字先不存放,存放后面的数字
	//从而覆盖下标索引。

	for (i=0;i<j;i++)
	{
		printf("%d ",arr[i]);
	}*/


	
	//最高分与最低分之差
	//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
	//输入描述：两行，第一行为n，表示n个成绩，不会大于10000，
	//第二行为n个成绩（整数表示，范围0~100），以空格隔开

	//输出描述:
	//一行，输出n个成绩中最高分数和最低分数的差。

	//int n = 0;
	//int i = 0;
	//int arr[100] = { 0 };
	//scanf("%d",&n);
	//for (i=0;i<n;i++)
	//{
	//	scanf("%d",arr+i);
	//}

	////先找到最高分和最低分
	//int max = arr[0];
	//int min = arr[0];
	//for (i=1;i<n;i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//	else if (arr[i] < min)
	//	{
	//		min = arr[i];
	//	}
	//}

	//printf("%d\n",max-min);


	//ASCII码表记住常见的 '0'-48  'A'-65  'a'-97

	//字母大小写转换
	//输入描述：多行输入，每一行输入一个字母
	//输出描述：针对每组输入，输出单独占一行，输出字母的对应形式

	//例如:
	// 输入：    a
    //          A
	//          z
	// 输出:    A
	//          a
	//          Z 
	//char ch = 0;
	//while (scanf("%c",&ch) != EOF)
	//{
	//	//这里转换字母大小写可以使用库函数,字符函数
	//	if (islower(ch))
	//	{
	//		printf("%c\n",toupper(ch));
	//	}
	//	else if(isupper(ch))
	//	{
	//		printf("%c\n",tolower(ch));
	//	}
	//}

	//如果不适用字符函数,纯自己手写
	//char ch = 0;
	//while (scanf("%c",&ch) == 1)
	//{
	//	if (ch >= 'a' && ch <= 'z')
	//	{
	//		printf("%c\n",ch-32);
	//	}
	//	else if (ch >= 'A' && ch <= 'Z')
	//	{
	//		printf("%c\n",ch+32);
	//	}
	//	getchar();//处理\n
	//}
	//一般情况下，输入正确的scanf()返回值为1，scanf()读取成功的时候
	//返回的是读取成功的数据的个数
	//scanf在读取失败的时候返回EOF

	//scanf获取到字符后，缓冲区会留下一个\n,  getchar()可以拿走缓冲区里的一个字符,
	//起到了清理屏幕的作用

	
	//判断是不是字母

	//输入描述：多组输入，每一行输入一个字符

	//输出描述：针对每组输入，输出单独占一行,判断输入字符是否为字母,
	//

	//char ch = 0;
	//while (scanf("%c",&ch) != EOF)
	//{
	//	if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch<='Z'))
	//	{
	//		printf("%c is an alphabet\n",ch);
	//	}
	//	else
	//	{
	//		printf("%c is not an alphabet\n",ch);
	//	}
	//	getchar();//拿走缓冲区中的\n(回车键)
	//}

	//C语言中有一个库函数可以用来判断是否为字母
	//isalpha()


	//最高分数
	//输入三个分数，找最高分
	//输出为一行，即三个分数的最高分

	/*float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f%f%f",&a,&b,&c);
	float max = a;
	if (b>c)
	{
		if (b > max)
		{
			max = b;
		}
	}
	else
	{
		if (c > max)
		{
			max = c;
		}
	}
	
	printf("%.2f\n",max);*/

	/*int i = 0;
	int max = 0;
	int score = 0;
	for (i=0;i<3;i++)
	{
		scanf("%d",&score);
		if (score > max)
			max = score;
	}
	printf("%d\n", max);*/

	//变种水仙花
	//描述：变种水仙花数是lilyNumber：把任意的数字，从中间拆分成两个数字，比如
	//1461可以拆分成（1和461），（14和61），（146和1），如果所有拆分后的乘积之和
	//等于自身，则是一个LilyNumber。
	//例如：655=6*55+65*5
	//1461=1*461+14*61+146*1

	//求出5位数中所有的LilyNumber
	/*int i = 0;
	for (i=10000;i<=99999;i++)
	{
		if (is_LilyNum(i) == 1)
		{
			printf("%d ", i);
		}
	}*/
	

	return 0;
}