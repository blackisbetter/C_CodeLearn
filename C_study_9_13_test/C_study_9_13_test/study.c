#include "../../shared/common.h"
#include "../../shared/bit_utils.h"
#include "../../shared/math_utils.h"

/*
 * The following functions have been moved to shared utilities:
 *   count_num_1(n)          -> count_bits_set(n)       [shared/bit_utils.h]
 *   print_month_day(m,flag) -> days_in_month(year, m)  [shared/math_utils.h]
 */

int main()
{
	//求两个数二进制中不同位的个数
	//google笔试题
	
	//法1：
	//int m = 0;
	//int n = 0;
	//int i = 0;
	//int count = 0;
	//scanf("%d%d",&m,&n);

	//for (i=0;i<32;i++)
	//{
	//	if (((m>>i)&1) != ((n>>i)&1)) //看当前这个数的位是不是1,相不相等
	//	{
	//		count++;
	//	}
	//}

	//printf("%d\n",count);

	//法2：
	//两个数先按位异或,再使用ret&(ret-1)，看有多少个1
	//int m = 0;
	//int n = 0;
	//int count = 0;
	//scanf("%d%d", &m, &n);

	//int ret = m ^ n;//相同为0，不同为1
	////然后再看有多少个1
	//while (ret)
	//{
	//	ret = ret & (ret - 1);
	//	count++;
	//}
	//printf("%d\n",count);

	

	//写一个函数返回参数二进制中的1
	//int n = 0;
	//scanf("%d",&n);

	//int ret = count_num_1(n);
	//printf("%d\n",ret);

	//打印一个整数的奇数位和偶数位（分别打印在不同的两行）
	//int n = 0;
	//int i = 0;
	//scanf("%d",&n);

	////奇数位
	//for (i=30;i>=0;i-=2)
	//{
	//	printf("%d ",(n>>i)&1);
	//}
	//printf("\n");
	////偶数位
	//for (i=31;i>=1;i-=2)
	//{
	//	printf("%d ",(n>>i)&1);
	//}

	//在C语言中，全局变量和静态变量都存放在静态区
	//全局变量和静态变量在未初始化的时候，默认会被初始化为0
	//局部变量存储在栈区，局部变量在未初始化的时候，默认是随机值


	/*int i = 0;
	i--;
	if (i> sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}*/

	//算数转换 int->unsigned int->long int->unsigned long int->float ->double->long double
	//只要在表达式中一个数的类型低于另一个数，那就会发生算数转换,都算数转换成那个大的类型s

	//结果为什么是>???
	//因为sizeof()的类型和i的类型不一样，sizeof的返回类型是size_t，也就是unsigned int
	//所以表达式i>sizeof(i)会发生算数转换,i会算数转换成unsigned int类型,故-1就转换成了一个无符号数
	//i就变成了一个很大的数

	//打印x型图形
	//打印图案的一般都需要把规律找到
	//int n = 0;
	//while (scanf("%d",&n) !=EOF)
	//{
	//	int i = 0;
	//	int j = 0;
	//	for (i=0;i<n;i++)//行
	//	{
	//		for (j=0;j<n;j++)//列
	//		{

	//			if ( i==j || i+j ==n-1)
	//			{
	//				printf("*");
	//			}
	//			else
	//			{
	//				printf(" ");
	//			}
	//		}
	//		printf("\n");
	//	}
	//}
	

	//获取月份天数
	//输入描述：
	//多行输入，一行有两个整数，分别表示年份和月份，用空格分隔

	//输出描述：
	//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

	//输入：2008 2 
	//输出：29

	int year = 0;
	int month= 0;
	scanf("%d%d",&year,&month);
	int flag = 0;//默认为平年
	//先判断年份是闰年还是平年
	if ((year %4 == 0 && year % 100 != 0)||(year %400 ==0))
	{
		flag = 1;//flag为1时，是闰年
		int day=days_in_month(year, month);
		printf("%d\n",day);
	}
	else
	{
		int day = days_in_month(year, month);
		printf("%d\n", day);
	}


	return 0;
}