#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//����1������һֱģ2����2���Ի�ȡ��ĩβ����������Ȼ�����ж��ǲ���1
//int count_num_1(int n)
//{
//	//����n�е�1�ĸ���
//	//��ʮ�����У���Ҫ��ȡĩβ��������ͨ��ģ10���ٳ�10���Ϳ���ȡ��
//	//ͬ����������Ҫ��ȡĩβ��������ͨ��ģ2���ٳ�2���Ϳ���ȡ��
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		if (n%2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//��2������ret&=(ret-1)������һֱ���ٺ����1��Ҳ���������ж�һ�����ǲ���2��n�η�
//int count_num_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	return count;
//}

//��3��ÿ������һ��λ��&1��������ǲ��ǵ���1
//int count_num_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i=0;i<32;i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

int print_month_day(int month,int flag)
{
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			if (flag)
				return 29;
			else
				return 28;
			break;
	}
}

int main()
{
	//���������������в�ͬλ�ĸ���
	//google������
	
	//��1��
	//int m = 0;
	//int n = 0;
	//int i = 0;
	//int count = 0;
	//scanf("%d%d",&m,&n);

	//for (i=0;i<32;i++)
	//{
	//	if (((m>>i)&1) != ((n>>i)&1)) //����ǰ�������λ�ǲ���1,�಻���
	//	{
	//		count++;
	//	}
	//}

	//printf("%d\n",count);

	//��2��
	//�������Ȱ�λ���,��ʹ��ret&(ret-1)�����ж��ٸ�1
	//int m = 0;
	//int n = 0;
	//int count = 0;
	//scanf("%d%d", &m, &n);

	//int ret = m ^ n;//��ͬΪ0����ͬΪ1
	////Ȼ���ٿ��ж��ٸ�1
	//while (ret)
	//{
	//	ret = ret & (ret - 1);
	//	count++;
	//}
	//printf("%d\n",count);

	

	//дһ���������ز����������е�1
	//int n = 0;
	//scanf("%d",&n);

	//int ret = count_num_1(n);
	//printf("%d\n",ret);

	//��ӡһ������������λ��ż��λ���ֱ��ӡ�ڲ�ͬ�����У�
	//int n = 0;
	//int i = 0;
	//scanf("%d",&n);

	////����λ
	//for (i=30;i>=0;i-=2)
	//{
	//	printf("%d ",(n>>i)&1);
	//}
	//printf("\n");
	////ż��λ
	//for (i=31;i>=1;i-=2)
	//{
	//	printf("%d ",(n>>i)&1);
	//}

	//��C�����У�ȫ�ֱ����;�̬����������ھ�̬��
	//ȫ�ֱ����;�̬������δ��ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
	//�ֲ������洢��ջ�����ֲ�������δ��ʼ����ʱ��Ĭ�������ֵ


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

	//����ת�� int->unsigned int->long int->unsigned long int->float ->double->long double
	//ֻҪ�ڱ��ʽ��һ���������͵�����һ�������Ǿͻᷢ������ת��,������ת�����Ǹ��������s

	//���Ϊʲô��>???
	//��Ϊsizeof()�����ͺ�i�����Ͳ�һ����sizeof�ķ���������size_t��Ҳ����unsigned int
	//���Ա��ʽi>sizeof(i)�ᷢ������ת��,i������ת����unsigned int����,��-1��ת������һ���޷�����
	//i�ͱ����һ���ܴ����

	//��ӡx��ͼ��
	//��ӡͼ����һ�㶼��Ҫ�ѹ����ҵ�
	//int n = 0;
	//while (scanf("%d",&n) !=EOF)
	//{
	//	int i = 0;
	//	int j = 0;
	//	for (i=0;i<n;i++)//��
	//	{
	//		for (j=0;j<n;j++)//��
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
	

	//��ȡ�·�����
	//����������
	//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ�

	//���������
	//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣

	//���룺2008 2 
	//�����29

	int year = 0;
	int month= 0;
	scanf("%d%d",&year,&month);
	int flag = 0;//Ĭ��Ϊƽ��
	//���ж���������껹��ƽ��
	if ((year %4 == 0 && year % 100 != 0)||(year %400 ==0))
	{
		flag = 1;//flagΪ1ʱ��������
		int day=print_month_day(month,flag);
		printf("%d\n",day);
	}
	else
	{
		int day = print_month_day(month, flag);
		printf("%d\n", day);
	}


	return 0;
}