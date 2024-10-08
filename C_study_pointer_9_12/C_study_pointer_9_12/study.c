#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int count_num_of_1(unsigned int n)//注意这里要使用无符号整型，因为可能传进来的是负数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n%2 ==1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

int count_num_of_1(unsigned int n)//注意这里要使用无符号整型，因为可能传进来的是负数
{
	int count = 0;
	int i = 0;
	for (i=0;i<32;i++)
	{
		if ((n >> i) & 1 ==1)
		{
			count++;
		}
	}
	return count;
}

//int count_dif_bit(unsigned int m,unsigned int n)
//{
//	//判断两个数有多少bit不同
//	int count = 0;
//	int i = 0;
//	for (i=0;i<32;i++)
//	{
//		if (((m>>i)&1) != ((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//法2
int count_dif_bit(unsigned int m, unsigned int n)
{
	//判断两个数有多少bit不同
	//方法2：两个数先按位异或一下，相同为0，不同为1
	//然后再统计1的个数
	int count = 0;
	int ret = m^n;

	//统计1的个数
	while (ret)
	{
		ret = ret & (ret - 1);//每次去掉1
		count++;
	}
	return count;
}

int main()
{
	//指针
	//1.指针是什么？2.指针和指针类型3.野指针
	//4.指针运算 5.指针和数组 6.二级指针 7.指针数组
	// 
	//1.指针是内存是内存中的一个最小单元的编号,也就是地址
	//平时我们口头所说的指针通常是指指针变量,是用来存放地址的变量
	//总结：指针就是地址，指针变量是存放地址的变量

	//我们可以通过&(取地址操作符) 取出变量的内存起始地址，把地址存放到一个变量中，
	//这个变量就叫做指针变量
	//int a = 10;//内存开辟一块空间
	//int* pa = &a;//a变量占用4byte的空间，这里是将a的4个byte的第一个byte的地址存放在
	//p变量中，p就是一个指针变量


	//总结：指针变量，用来存放地址的变量。

	//这里的问题是：1.一个小的单元到底是多大（1个字节）? 2.如何编码?
	//指针变量的存放的是地址大小取决于地址，和指针类型没有关系。取决于编译器是32为系统还是64位系统
	//
	//对于32位机器，假设有32根地址线，那么假设每根地址线在寻址的时候产生高电平(高电压)和低电平(低电压)
	//就是（1或者0）

	//那么32根地址线就是：
	//00000000000000000000000000000000
	//...
	//11111111111111111111111111111111

	//一共是2^32个，此时最小单位为1byte最为合理
	//2^32byte=2^32/1024/1024/1024Gb=4Gb
	//那么64位就是   8Gb

	//所以32位机器上，一个指针变量的大小就应该是4byte
	//  64位机器上，一个指针变量的大小就应该是8byte

	//总结：指针变量是用来存放地址的，地址是唯一标识一块地址空间的
	//     指针的大小在32位平台是4个字节，在64位平台是8个字节
	//   x86是32位平台  x64是64位平台

	/*char* pc = NULL;
	short* ps = NULL;
	int* pi = NULL;
	long* pl = NULL;
	float* pf = NULL;
	double* pd= NULL;

	printf("%d\n",sizeof(pc));
	printf("%d\n",sizeof(ps));
	printf("%d\n",sizeof(pi));
	printf("%d\n",sizeof(pl));
	printf("%d\n",sizeof(pf));
	printf("%d\n",sizeof(pd));*/

	
	//2.指针和指针类型
	//如果像上述所说，指针无论什么类型大小都一样？那指针类型还有什么意义吗？
	//
	/*int a = 0x11223344;

	char* pc = (char*) & a;
	*pc = 0;*/

	//结论：指针类型决定了指针在被解引用时访问几个字节
	//如果是int* 就访问4个byte
	//如果是char* 就访问1个byte

	/*int a = 0x11223344;
	int* pa = &a;
	char* pc = (char*) &a;

	printf("pa=%p\n",pa);
	printf("pa+1=%p\n",pa+1);
	printf("pc=%p\n",pc);
	printf("pc+1=%p\n",pc+1);*/

	//结论2：指针的类型决定指针+-1时，跳过几个字节
	//决定了指针的步长

	
	//printf("%d\n",01000);
	//在数字前面有0表示八进制数字
	//在数字前面有0x表示十六进制数字

	//总结：指针的类型决定了解引用操作时，能访问几个字节。指针进行+-操作时，跳过多少个字节。(步长)

	//指针的解引用
	/*int n = 0x11223344;
	char* pc = (char*) & n;
	int* pi = &n;
	*pc = 0;
	*pi = 0;*/
	//指针的类型决定了，对指针解引用的时候有多大权限(能操作几个字节)
	//比如：char*的解引用就只能访问1个字节，int* 的解引用就能访问4个字节

	//野指针:就是指针指向的位置是不可知的(随机的、不正确的、没有明确限制的)
	//野指针成因：1.指针未初始化
	//2.指针越界访问
	//3.指针指向的空间被释放(使用malloc，calloc，realloc动态开辟内存时，指针指向free了的空间)


	//要记得规避野指针，如何规避野指针？
	//1.指针初始化
	//2.小心指针越界
	//3.指针指向空间释放及时置为NULL
	//4.避免返回局部变量的地址
	//5.指针使用之前检查有效性

	//指针运算
	//1.指针+-指针
	//2.指针-指针
	//3.指针的关系运算


	//1.指针+-整数
	//地址+-整数
	//2.指针-指针
	//指针-指针得到的是指针和指针之间元素的个数
	//不是所有的指针都能相减，指向同一块空间的2个指针才能相减
	//3.指针的关系运算：
	//指向数组元素的指针允许与数组元素最后一个元素后面的比较，不允许与前面的比较
	//就是允许向后越界比较，不允许向前越界比较

	
	//指针和数组
	//数组名就是首元素地址。arr[i] --->*(arr+i)是一样的

	
	//二级指针
	//
	//int a = 10;
	//int* pa = &a;//pa是一个指针变量，一级指针变量
	//int** ppa = &pa;//ppa是一个二级指针变量
	//**ppa = 20;//相当于*pa=20
	//ppa是pa的地址，*ppa就相当于pa相当于&a,**ppa就相当于*pa相当于a
	//pa相当于&a，存的是a的地址, *pa就相当于a，找到了a的值
	//printf("ppa=%p\n",ppa);
	//printf("&pa=%p\n",&pa);
	//printf("*ppa=%p\n",*ppa);
	//printf("&a=%p\n",&a);

	//指针数组
	//指针数组是数组，是存放指针的数组
	//所以：存放指针的数组就叫做指针数组
	//
	/*int a = 10;
	int b = 20;
	int c = 30;
    
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/

	//指针数组就是存放指针的数组
	//int* parr[10] = { &a,&b,&c };


	//所以可以用指针数组来仿二维数组
	//
	//int arr1[4] = { 1,2,3,4 };
	//int arr2[4] = { 2,3,4,5 };
	//int arr3[4] = { 3,4,5,6 };

	//int* parr[3] = { arr1,arr2,arr3 };
	//int i = 0;
	//for (i=0;i<3;i++)
	//{
	//	int j = 0;
	//	for (j=0;j<4;j++)
	//	{
	//		printf("%d ",parr[i][j]);//parr[i][j]可以写成  *(*(parr+i)+j)
	//	}
	//	printf("\n");
	//}

	
	//结构体
	//1.结构体类型的声明 2.结构体初始化 3.结构体成员访问 4.结构体传参
	//1.结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
	//结构是一种集合
	//数组是一组相同类型元素的集合。
	//比如人：名字+电话+性别+身高


	//结构的声明
	/*struct Tag
	{
		member_list;
	}variable_list;*/

	//比如
	/*struct Peo
	{
		char name[20];
		char tele[12];
		char sex[5];
		int high;
	}p1,p2;*/

	//p1和p2是两个全局结构体变量，尽量少使用全局变量。
	
	//结构成员的类型
	//结构的成员可以是标量、数组、指针，甚至是其他结构体。

	//
	/*struct Peo
		{
			char name[20];
			char tele[12];
			char sex[5];
			int high;
		}p1,p2;*/
	//在main函数外面声明的结构体变量都是全局变量
	
	//在结构体内部也能放结构体
	//struct Peo
	//{
	//	char name[20];
	//	char tele[12];
	//	char sex[5];
	//	int high;
	//};

	//struct St
	//{
	//	struct Peo p;
	//	int num;
	//	float f;
	//};

	//struct Peo p1 = { "zhangsan","15596662342","男",181 };
	//struct St s = { {"lisi","15593993930","女",166},100,3.14f };

	//printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
	//printf("%s %s %s %d %d %f\n",s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.f);

	//结构体变量.成员变量
	//如果是指针变量，就使用->
	//指针变量->成员变量
	
	
	//结构体传参
	//
	//struct S
	//{
	//	int data[1000];
	//	int num;
	//};

	//struct S s = { {1,2,3,4},1000 };
	//void print1(struct S s)
	//{
	//	printf("%d\n", s.num);
	//}

	//void print2(struct S* ps)
	//{
	//	printf("%d\n", ps->num);
	//}


	//上面传参print2更好一点。
	//因为函数传参时，参数是需要压栈的。
	//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降。
	//结构体传参数时，尽量传结构体的地址

	
	//int a, b, c;
	//a = 5;
	//c = ++a;//c=5 a=6
	//b = ++c, c++, ++a, a++;//b=7 c=8 a=8  //注意这个不是逗号表达式
	//b += a++ + c;//a=9 b=7+8+8=23 c=8
	//printf("a=%d b=%d c=%d\n", a, b, c);//a=9 b=23 c=8



	
	//写一个函数返回参数二进制中1的个数
	//
	//int n = 0;
	//scanf("%d", &n);

	//对于10进制数，可以模10，除10，来取10进制数末尾的数字
	//同理：对于2进制数，可以模2，除以2，来取2进制末尾的数字
	//比如：11  -10进制数
	// 1011 
	//11%2=1
	//11/2=5
	//5- 101
	//5%2=1
	// 5/2=2
	//2- 10
	//2%2=0
	//2/2=1
	//1%2=1
	//1%2=0
	
	//由上所知：一直模2除2是可以取到二进制的末尾数字的
	//int ret = count_num_of_1(n);
	//printf("%d\n",ret);

	//还有一个巧妙的方法：n=n&(n-1)
	//就相当于一直在去掉后面的数字1，每次去掉一个1
	//n&(n-1) 还有一个用途就是判断一个数是不是2的n次方


	//求两个数二进制中不同位的个数
	//编程实现：两个int(32位)整数m和n的二进制表达式中，有多少个bit位不同？

	//例如：输入：1999 2299
	//      输出：7
	
	//两种方法
	/*int m = 0;
	int n = 0;
	scanf("%d%d",&m,&n);

	int ret = count_dif_bit(m,n);
	printf("%d\n",ret);*/

	//总结，ret&(ret-1)可以用来统计ret中1的个数,还有一个用途就是看一个数是不是2的n次方
	

	//打印整数二进制的奇数位和偶数位
	//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

	//11-1011
	/*int n = 0;
	int i = 0;
	scanf("%d",&n);*/

	//10
	//00000000000000000000000000001010
	//  0000000000000000000000000000101
	//00000000000000000000000000000001

	// 000000000000000000000000000000101
	//00000000000000000000000000000001
	//00000000000000000000000000000001


	//int a = 10;
	//int i = 0;
	//scanf("%d",&a);
	////打印奇数位
	//for (i=30;i>=0;i-=2)
	//{
	//	printf("%d ",(a>>i)&1);
	//}
	//printf("\n");
	//for (i=31;i>=1;i-=2)
	//{
	//	printf("%d ",(a>>i)&1);
	//}
	


	return 0;
}