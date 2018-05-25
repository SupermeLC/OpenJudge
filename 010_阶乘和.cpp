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
	//传入result，模拟加法
	for (j = Max - 1; j >= 0; j--) {
		result[j] = a[j];
	}

	for (i = 1; i < num; i++) {//依次加
		//传入b，模拟加法
		for (j = Max - 1; j >= 0; j--) {
			b[j] = a[j];
		}
		for (j = 1; j <= i; j++) {//依次乘
			 //计算长度
			len = 0;
			for (k = Max - 1; k >= 0; k--) {
				if (a[k] == 0)  
					len++;
				else 
					break;
			}
			len = Max - len;
			//加法计算
			for (k = 0; k < len; k++) {
				a[k] = a[k] + b[k];
				if (a[k] >= 10) {
					a[k + 1] += 1;
					a[k] = a[k] % 10;
				}
			}
		}


		//计算长度
		len = 0;
		for (j = Max - 1; j >= 0; j--) {
			if (a[j] == 0)
				len++;
			else
				break;
		}
		len = Max - len;


		//后数与前数相加
		for (j = 0; j < len; j++) {
			result[j] = result[j] + a[j];
			if (result[j] >= 10) {
				result[j + 1] += 1;
				result[j] = result[j] % 10;
			}
		}
	}
	
	//计算长度
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