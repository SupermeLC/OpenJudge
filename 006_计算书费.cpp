//http://noi.openjudge.cn/ch0106/03/
#include <stdlib.h>
#include <math.h>
#include<stdio.h>

int main()
{
	double price[10] = { 28.9, 32.7 ,45.6, 78, 35 , 86.2,27.8,43 , 56 , 65 };
	int num[10];
	double tot=0;
	for (int i = 0; i < 10; i++) {
		scanf("%d",&num[i]);
	}
	for (int i = 0; i < 10; i++) {
		tot += num[i] * price[i];
	}
	printf("%.1lf",tot);
	system("pause");
	return 0;
}