//http://noi.openjudge.cn/ch0106/15/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#define Max 200

int main()
{
	int num;
	int i,j,k,len;
	int a[Max],b[Max];
	int result[Max];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(result, 0, sizeof(result));


	scanf("%d",&num);
	
	a[0] = 1;
	//����result��ģ��ӷ�
	for (j = Max - 1; j >= 0; j--) {
		result[j] = a[j];
	}

	for (i = 1; i < num; i++) {//���μ�
		//����b��ģ��ӷ�
		for (j = Max - 1; j >= 0; j--) {
			b[j] = a[j];
		}
		for (j = 1; j <= i; j++) {//���γ�
			 //���㳤��
			len = 0;
			for (k = Max - 1; k >= 0; k--) {
				if (a[k] == 0)  
					len++;
				else 
					break;
			}
			len = Max - len;
			//�ӷ�����
			for (k = 0; k < len; k++) {
				a[k] = a[k] + b[k];
				if (a[k] >= 10) {
					a[k + 1] += 1;
					a[k] = a[k] % 10;
				}
			}
		}


		//���㳤��
		len = 0;
		for (j = Max - 1; j >= 0; j--) {
			if (a[j] == 0)
				len++;
			else
				break;
		}
		len = Max - len;


		//������ǰ�����
		for (j = 0; j < len; j++) {
			result[j] = result[j] + a[j];
			if (result[j] >= 10) {
				result[j + 1] += 1;
				result[j] = result[j] % 10;
			}
		}
	}
	
	//���㳤��
	len = 0;
	for (j = Max - 1; j >= 0; j--) {
		if (a[j] == 0)
			len++;
		else
			break;
	}
	len = Max - len;

	for (j = len-1; j >= 0; j--) {
		printf("%d",result[j]);
	}




	system("pause");
	return 0;
}