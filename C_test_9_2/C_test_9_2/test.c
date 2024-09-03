#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//关系操作符 > >= < <= !=不相等  ==相等
//逻辑操作符
	//   &&逻辑与
	//   ||逻辑或
	// 如果&&很多个条件，有一个为false，则全为false。
	// 如果||很多个条件，有一个为true，则全为true。
	//条件操作符(三木操作符)
	// exp1?exp2:exp3

	//逗号表达式:就是逗号隔开的一串表达式
	//exp1,exp2,exp3,...expN
	//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个
	//表达式的结果

	//下标引用，函数调用和结构成员
	//  []       ()        .

	//常见关键字
	//注意：define不是关键字,是一个预处理指令
	//auto(可省略) break case char const continue default do double else
	//enum extern(用来声明外部符号) float for goto if int long register(寄存器) return 
	//short signed sizeof(计算大小) static  struct(结构体) switch typedef(类型重命名) 
	//union(联合体) unsigned void volatile while

	//关键字typedef
	//typedef顾名思义是类型定义,是类型重命名
	//typedef unsigned int uint 
	//unsigned int num1=0;
	//uint num2=0;
	//这里的num1和num2都是相同类型

	//关键字static
	//static是用来修饰变量和函数的
	//1.修饰局部变量,称为静态局部变量
	//2.修饰全局变量,称为静态全局变量
	//3.修饰函数,称为静态函数

	//1.static修饰局部变量的时候，局部变量出了作用域，不销毁
	//本质上，static修饰局部变量的时候，改变了存储的位置，影响了变量的生命周期

	//C语言中，栈区一般存放临时变量
	//堆区存放malloc calloc realloc 动态开辟内存
	//静态区一般存放静态变量和全局变量等

	//1.static修饰的局部变量的时候，局部变量出了作用域，不销毁。
	//本质上，static修饰局部变量的时候，改变了存储的位置，影响了
	//变量和生命周期。生命周期变长，和程序的生命周期一样。

	//extern用来声明外部符号
	//extern int g_val;引用其他文件里的全局变量

	//其他.c文件全局变量 int g_val;
	//用static修饰的其他.c文件中的全局变量 static int g_val;
	//用static修饰全局变量的时候，这个全局变量的外部链接属性
	//就变成了内部链接属性,其他的.c文件就不能再使用到这个全局变量
	//外部链接属性 --->内部链接属性

	//函数也一样有外部链接属性
	//其他.c文件里的函数，要想使用这个函数就要使用extern来引用
	//extern int add(int x,int y)


	//如上，若使用static修饰函数后，就会使函数的外部链接属性变成
	//内部链接属性,其他源文件(.c)文件就无法使用了


	//关键字：register寄存器
	//电脑上的存储设备有    寄存器（集成到CPU上）   空间小/造价高   
	//                    高速缓存（cache）
	//                    内存
	//                    硬盘                   空间大/造价低
	//寄存器到硬盘 --->速度越来越慢

	//寄存器变量
	//register int num=3;//这个是建议把3存放在寄存器中，而不是一定存放

	//define定义的标识符常量
	//#define MAX 100
	//#define定义宏
	//宏有参数，宏是替换
	//#define ADD(x,y)   ((x)+(y))
	//ADD是宏名   (x,y)是宏的参数   ((x)+(y))是宏体


	//指针（指针就是内存）
	//int arr[10];  数组名就是指针(地址)
	//int* p=arr;   //arr=&arr[0]
	//p就是指针变量
	//地址被称为指针
	//存放指针（地址）的变量就是指针


	//int a=10; 向内存申请4个字节
	//二进制中：00000000 00000000 00000000 00001010
	//十六进制表示：0x00 00 00 0a
	//在内存中的存储为：若是VS编译器，是小端存储的
	//则为 0a 00 00 00


	//大小端字节序 
	//小端存储:低字节放到低地址处，高字节放到高地址处
	//大端存储:低字节放到高地址处，高字节放到低地址处


	//int a=10;
	//int* p=&a;
	//*说明p是指针变量
	//int 说明p指向的对象是int类型, int* 是指针变量p的类型
	//*p=20;  *是解引用操作符 *p就是p指向的对象
	//*p  通过p中存放的地址，找到p所指向的对象



	//int* p
	//char* p1
	//不管是什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32bit位---4byte 所以指针变量大小是4byte
	//64位机器上的地址：64bit位---8byte 所以指针变量大小是8byte
	//sizeof(char*)
	//sizeof(short*)
	//sizeof(int*)
	//sizeof(long*)
	//sizeof(long long*)
	//sizeof(float*)
	//sizeof(double*)

	//x86是32位
	//x64是64位


	//结构体
	//结构体在C语言很重要，结构体使得C语言有能力描述复杂类型
	//比如一个函数只能return一个返回值，此时想返回多个值的话
	/*struct Stu
	{
		char name[20];
		int age;
		char sex[5]
	};*/
	//创建结构体变量 struct Stu S;
	//结构体声明出来不占内存
	//结构体变量创建出来才会占内存

	//struct Stu s={"zhangsan",20,"nan"}结构体的初始化
	//printf("%s %d %s\n",s.name,s.age,s.sex);

	//void print(struct Stu* ps)
	//{
			//printf("%s %d %s\n", *(ps).name, *(ps).age, *(ps).sex);
			//->
			//结构体指针变量->成员名
			//printf("%s %d %s\n",ps->name,ps->age,ps->sex);
			//用指针的方式打印
	//}



	//分支语句和循环语句
	//1.分支语句 if...else语句  switch语句
	//2.循环语句 while循环  for循环 do...while循环
	//goto语句--->尽量少用


	//转向语句:break语句、goto语句、continue语句、return语句
	//C语言中0为false，非0为true


	//while循环中，break是用于永久终止循环的
	//continue是用来跳过本次循环后面的代码，直接去判断部分，进行下一次循环


	//getchar()从键盘上输入字符获取对应的ASCII码值。
	//int ch = getchar();
	//printf("%c\n",ch);
	//printf(ch);

	//int ch=0;
	//whie((ch=getchar()) != EOF)
	//{
		//putchar(ch);
	//}
	//输入一个字符后点回车就会换行是为什么？
	//为何会换行？因为getchar()第一次拿的是字符a，第二次拿的是字符'\n'，所以会换行
	//上面的代码适当的修改可以用来清理缓冲区

	//scanf和getchar都是一类函数，并不是直接从键盘上读取，而是有一个缓冲区,
	//


	//出生日期输入输出
		/*int year = 0;
		int month = 0;
		int date = 0;
		scanf("%4d%2d%2d", &year, &month, &date);
		printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);*/
	//用scanf输入时，%4d表示取到4位整数,%2d表示取到2位整数
	//用printf输出时，若输出2位数前面有0时，用"%02d" 表示，表示输出2位数
	//若为一位。则前面补0

	//"%.2f"表示保存小数点后2位
//int n=printf("Hello world!");
//printf("\n%d\n", n);

//int arr[4] = { 0 };
//int i = 0;
//int max = 0;
//while (i<4)
//{
//	scanf("%d",arr+i);
//	if (arr[i]>max)
//	{
//		max = arr[i];
//	}
//	i++;
//}
//printf("%d\n", max);

//int a = 0;
//float f = 0.0f;//小数后面要加f，才是float类型
//0.0默认是double类型
//3.14


	return 0;
}