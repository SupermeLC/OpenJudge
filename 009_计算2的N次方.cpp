//http://noi.openjudge.cn/ch0106/12/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define Max 200




int main()
{
	int num;
	int i,j,k,len;
	int a[Max],b[Max];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	a[0] = 1;


	scanf("%d",&num);
	
	//n次幂
	for (i = 1; i <= num; i++) {
		//求长度
		len = 0;
		for (j = Max - 1; j >= 0; j--) {
			if (a[j] == 0) {
				len++;
			}
			else
				break;
		}
		len = Max - len;

		
		//传入b，模拟加法
		for (j = Max - 1; j >= 0; j--) {
			b[j] = a[j];
		}


		//加法计算
		for (k = 0; k < len; k++) {
			a[k] = a[k] +  b[k];
			if (a[k] >= 10) {
				a[k + 1] += 1;
				a[k] = a[k] % 10;
			}
		}
	}

	//计算长度
	len = 0;
	for (j = Max - 1; j >= 0; j--) {
		if (a[j] == 0) {
			len++;
		}
		else
			break;
	}
	len = Max - len;

	//输出
	for (j = len-1; j >= 0; j--) {
		printf("%d", a[j]);
	}


	system("pause");
	return 0;
}