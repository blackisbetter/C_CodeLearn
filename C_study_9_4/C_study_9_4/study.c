#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
 
//void menu()
//{
//	printf("******************************\n");
//	printf("*******   0.exit   ***********\n");
//	printf("*******   1.play   ***********\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	//1.���������
//	//�������Χ��1~100֮��
//	int ret = rand()%100+1;
//	int k = 0;
//	int i = 0;
//	printf("����ʮ�λ��������\n");
//	//2.������
//	while (i<10)
//	{
//		printf("������Ŀ������:>");
//		scanf("%d", &k);
//		if (ret > k)
//		{
//			printf("��С��\n");
//			i++;
//		}
//		else if (ret < k)
//		{
//			printf("�´���\n");
//			i++;
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j=2;j<=sqrt(n);j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

//int is_leap_year(int year)
//{
//	if ((year %4==0) && (year %100 !=0) || (year%400 ==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int binum_search(int arr[], int sz, int k,int* pco)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;//�м�ֵ
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			*pco = mid;
//			return 1;
//		}
//	}
//	if(left >right)
//	{
//		return -1;
//	}
//}


//void ADD(int* pn)
//{
//	(*pn)++;
//}


int main()
{
	////�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
	////�������ֵ��0����ʾ�����ַ������
	//int i = 0;
	//char password[20] = { 0 };
	////�����������ַ�����abcdef
	//for (i=0;i<3;i++)
	//{
	//	printf("����������:>");
	//	scanf("%s", password);
	//	if (strcmp(password, "abcdef") == 0)
	//	{
	//		printf("��¼�ɹ�\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�������\n");
	//	}
	//}
	//if (3 == i)
	//{
	//	printf("�����������������˳�����\n");
	//}
	//

	//���鴫��ʱ��������������Ԫ�ص�ַ����Ҫָ���������


	//дһ����������Ϸ
	//int input = 0;

	//do
	//{
	//	menu();
	//	printf("��ѡ��:>");
	//	scanf("%d", &input);
	//	//time()Ϊʱ���,\
	//	//srand()Ϊ��������������
	//	srand((unsigned int)time(NULL));
	//	switch (input)
	//	{
	//		case 0:
	//			printf("�˳���Ϸ\n");
	//			break;
	//		case 1:
	//			game();
	//			break;
	//		default:
	//			printf("�������������!\n");
	//			break;
	//	}

	//} while (input);



	//Ҫ����������Ϳ����ÿ⺯��rand(),ͷ�ļ�Ϊstdlib.h
	//time()Ϊʱ���   ������Ҫ��ָ�룬����Ϊ��ָ��
	//ʹ��rand()������������srand(),srand()Ϊ���������ʼλ��

	//int ret=rand()%100      ret�ķ�Χ��0~99
	//int ret=rand()%100+1    ret�ķ�Χ��1~100

	//goto���
	//


	//����
	//�⺯��
	//�Զ��庯��


	//��ʵ�δ����β�ʱ���β�ֻ��ʵ�ε�һ����ʱ����
	//���βε��޸Ĳ���Ӱ��ʵ��

	//��Ҫ�ı�ʵ�ε�ֵ��Ҫȡ��ַ

	//һ�������п����кܶ�.c�ļ�,����ֻ����һ��main����
	//ʵ�ο����ǣ����������������ʽ�������ȣ�����ʵ���Ǻ������͵���
	//�ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��β�

	//��ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч.

	//�β�ʵ����֮����ʵ���൱��ʵ�ε�һ����ʱ����
	
	//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
	//��ַ���ã�1.��ַ����ʱ�Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ��
	//���ú����ķ�ʽ
	//2.���ִ��η�ʽ�����ú����뺯����ߵı�����������������ϵ��Ҳ���Ǻ���
	//�ڲ�����ֱ�Ӳ��������ⲿ�ı���

	//sqrt(m) ��m��ƽ������˼
	//��ӡ��100��200֮�������
	//һ����m����������������ĳ�Ա����<=sqrt(m)
	//int i = 0;
	//for (i=100;i<=200;i++)
	//{
	//	//100��200֮�����
	//	int j = 0;
	//	int flag = 1;//���flagΪ1��Ϊ���������flagΪ0��Ϊ����
	//	for (j=2;j<=sqrt(i);j++)
	//	{
	//		if (i%j ==0)
	//		{
	//			flag = 0;
	//		}
	//	}
	//	if (1 == flag)
	//	{
	//		printf("%d  ", i);
	//	}
	//}

    //��100~200֮���ж�������
	/*int i = 0;
	int count = 0;
	for (i=101;i<=200;i+=2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}	
	printf("\ncount=%d\n", count);*/


	//int year = 0;
	//for (year=1000;year<=2000;year++)
	//{
	//	//�ж�year�ǲ�������
	//	if (is_leap_year(year))
	//	{
	//		printf("%d ", year);
	//	}
	//}
    
	//дһ���������ö��ֲ��������������е�ĳ����
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int co = 0;
	//printf("��ѡ����Ҫ���ҵ�����:>");
	//scanf("%d",&k);
	////�涨����1�����ҵ��ˣ�����-1����û�ҵ�
	//int ret = binum_search(arr, sz, k,&co);
	//if (-1 == ret)
	//{
	//	printf("û�ҵ�\n");
	//}
	//else
	//{
	//	printf("�ҵ��ˣ��±���:%d\n",co);
	//}


	//���鴫��ʱ�����ǵ�һ��Ԫ�صĵ�ַ�����Բ����ں����ڲ������������
	//bool����    ͷ�ļ�stdbool.h
	//boolҲ��һ���ֽڣ�����һ�㶼����bool,false�͵���0��true�͵��ڷ�0

	//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
	//
//int num = 0;
//ADD(&num);
//printf("%d\n",num);
//ADD(&num);
//printf("%d\n", num);

//������Ƕ�׺���ʽ����
//1.������Ƕ��
//��������Ƕ�׵��ã����ǲ���Ƕ�׶���

//int len = strlen("abcdef");
//printf("%d\n",len);
//
////��ʽ����
//printf("%d\n",strlen("abcdef"));


	//��ʽ����:��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
    //printf()����ֵ������ַ��ĸ���
   // printf("%d", printf("%d", printf("%d", 43)));//4321


	//main��������Ҫ���������Ǳ�����main�������в�����
    //int mian(int argc,char* argv[],char* envp[])
	//{}

	//�����������Ͷ���:
	//����Ҫ��������ʹ�ã�����������һ��Ҫ����ͷ�ļ���

	//��һ������Ŀ�У�����������һ���˸㶨����ģ��
	//����ÿ���˶����Լ�����İ�飬����Ҫ�ֿ���д��Ȼ����ͷ�ļ�����
	//#pragma once��Ϊ�˷�ֹͷ�ļ��ظ�����
	// 
	//����ʹ������Ԥ����
	//#ifndef __TEST_H__
	//#define __TEST_H__
	////����������
	//int add(int x,int y)
	//#endif//__TEST_H__
	////����Ҳ���Է�ֹͷ�ļ����ظ�����


	
	
	return 0;
}