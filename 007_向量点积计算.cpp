//http://noi.openjudge.cn/ch0106/09/
#include <stdlib.h>
#include <math.h>
#include<stdio.h>

int main()
{
	int a[1000], b[1000];
	int num,result=0;
	scanf("%d",&num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < num; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < num; i++) {
		result += a[i] * b[i];
	}
	printf("%d",result);

	system("pause");
	return 0;
}