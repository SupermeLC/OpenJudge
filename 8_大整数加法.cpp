//http://noi.openjudge.cn/ch0106/10/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define Max 210

int main()
{
	char a[Max], b[Max];
	int ax[Max], bx[Max];
	int len_a, len_b;

	memset(ax, 0, sizeof(ax));
	memset(bx, 0, sizeof(bx));

	scanf("%s", a);
	scanf("%s", b);

	//获取长度
	len_a = strlen(a);
	len_b = strlen(b);

	//长整数反向，其中ax，bx为相对位置
	int j = 0;
	for (int i = len_a - 1; i >= 0; i--) {
		ax[j++] = a[i] - '0';
	}
	j = 0;
	for (int i = len_b - 1; i >= 0; i--) {
		bx[j++] = b[i] - '0';
	}

	int n;
	if (len_a > len_b)
		n = len_a;
	else
		n = len_b;


	//加法运算
	for (int i = 0; i < n; i++) {

		ax[i] = ax[i] + bx[i];
		if (ax[i] >= 10) {
			ax[i + 1] += 1;
			ax[i] = ax[i] % 10;
		}
	}

	//调整n到数头
	if (ax[n] > 0) n++;

	while (ax[n] == 0 && n >0) {
		n--;
	}

	for (int i = n; i >= 0; i--) {
		printf("%d", ax[i]);
	}

	system("pause");
	return 0;
}