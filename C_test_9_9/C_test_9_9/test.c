#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//char* reverse_string(char* pstr,int len)//ָ����ʽ
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

//void reverse_string(char arr[],int left,int right)//�ݹ���ʽ
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

//int DigitSum(int n)//�ǵݹ�汾
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

//�ݹ�Ҫ����������,ÿһ�ζ�Խ��Խ�ӽ��������
//int DigitSum(int n)//�ݹ鷽ʽ
//{
//	int sum = 0;
//	if (n > 9)
//		return DigitSum(n / 10)+ n % 10 ;
//	else
//		return n;
//}

//double Pow(int n,int k)//�ǵݹ�ʵ��
//{
//	//����n��k�η�
// //��ȱ��,û���ǵ�kΪ���������
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

//double Pow(int n,int k)//�ݹ�ʵ��
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

	//�ַ�������
	//��дһ��������reverse_string �������ݹ�ʵ�֣�
	//��:char str[]="abcdef";
	//����֮���Ϊ:"fedcba";
	/*char str[] = "abcdef";
	int len = strlen(str);
	int left = 0;
	int right = len - 1;
	reverse_string(str,left,right);
	printf("%s\n",str);*/

	//����һ������ÿλ֮��(�ݹ�ʵ��)
	//дһ���ݹ麯��DigitSum(n),����һ���Ǹ���,���������������֮��
	//���磺DigitSum(1729),��Ӧ�÷���1+7+2+9,���ĺ���19

	/*int k = 0;
	scanf("%d",&k);
	int ret=DigitSum(k);
	printf("%d\n",ret);*/

	//�ݹ�ʵ��n��k�η�
	//int n = 0;
	//int k = 0;
	////��n��k����ȡֵ
	//scanf("%d%d", &n, &k);

	//double ret=Pow(n,k);
	//printf("%.2lf\n",ret);


	//���ű��ʽ
	//
	//int arr[] = {1,2,(3,4),5};//���ű��ʽ 1,2,4,5
	//printf("%d\n",sizeof(arr));//16

	//����Ҳ������,such as:int arr[10];
	//���������Ϊ::: ȥ��������ʣ�µľ����������� int [10]
	//int arr[10] = { 0 };
	//printf("%d\n",sizeof(int [10]));//int [10]��arr�����������

	//sizeof��strlen������
	//sizeof��һ��������
	//������������������ͣ���ռ�ڴ�ռ��С�ģ�����ע�ڴ��д�ŵľ�������
	//��λ���ֽ�

	//strlen
	//strlen��һ���⺯��,��ר�����ַ������ȵģ�ֻ������ַ���
	//�Ӳ��������ĵ�ַ���һֱ��\0��ͳ��\0֮ǰ���ֵ��ַ��ĸ���
	//�ַ����Ľ�����־���� '\0'

	//������a�е����ݺ�����b�е����ݽ��н�����(����һ����)
	//int arr1[] = {1,3,5,7,9};
	//int arr2[] = { 2,4,6,8,0};
	//int sz = sizeof(arr1)/sizeof(arr1[0]);//����ĳ���
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