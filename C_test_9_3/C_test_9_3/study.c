#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	//forѭ��
	/*for (���ʽ1;���ʽ2;���ʽ3)
	{
		ѭ�����;
	}*/
	//���ʽ1Ϊ��ʼ������
	//���ʽ2Ϊ�����жϲ���
	//���ʽ3Ϊ��������
	//break��ֱ�ӽ���ѭ��
	//continue������forѭ���ĵ�������У����¿�ʼѭ��

	//���飺1.������forѭ�������޸�ѭ������,��ֹforѭ��ʧȥ����
	//2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��

	//int i = 0;
	////ǰ�պ󿪵�д��
	//for (i=0;i<10;i++)
	//{}

	//���߶��Ǳ�����
	/*for(i=0;i<=9;i++)
	{}*/

	//����ѭ��Ҫѭ�����ٴ�?
	/*int i = 0;
	int k = 0;
	for (i=0,k=0; k=0; i++,k++)
	{
		k++;
	}*/
	//�������һ��ѭ��0�Σ���Ϊ�ڶ����ֺ�ǰ�����жϣ��������k����ֵΪ0����false
	//����ѭ��һ��ִֻ��0��

	//���ֲ��ң��۰���ң�
	//ǰ�����������飬���������
	//��һ��������Ч��
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�صĸ���
	//int left = 0;
	//int right = sz - 1;
	//printf("��ѡ����Ҫ�ҵ�����:");
	//scanf("%d", &k);

	////int mid = ��left+right��/2;//�����long long���͵Ŀ��ܻ����
	////����������Ĳ����з���
	//while (left <= right) //ע�������left��С�ڵ���right
	//{
	//	int mid = left + (right - left) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ���,�±�Ϊ%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ���\n");
	//}

	//sizeof��strlen() �����ַ�����ʱ��������
	//���磺
	//char buf[] = "abc";// a b c \0
	//printf("%d\n", sizeof(buf)); //4
	//printf("%d\n", strlen(buf)); //3
	//sizeof���ʵ���ַ�������Ҫ������Ϊ��'\0'Ҳ���ȥ��


	//char arr1[] = "welcome to bit!!!!";
	//char arr2[] = "##################";
	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];

	//	printf("%s\n", arr2);
	//	Sleep(1000);//���ߵ�һ���⺯��,ͷ�ļ�windows.h
	//	//�����Ļ
	//	system("cls");//system��һ���⺯��,����ִ��ϵͳ����,ͷ�ļ�stdlib.h
	//	left++;
	//	right--;

	//}

	return 0;
}