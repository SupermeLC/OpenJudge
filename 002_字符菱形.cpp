//http://noi.openjudge.cn/ch0101/09/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char a;
	scanf("%c", &a);
	//1,2,3
	for (int i = 3; i>0; i--) {
		int j = i - 1;
		for (int k =0; k<j; k++) {
			printf(" ");
		}
		j = 4 - i;
		for (int k = 0; k<2 * j - 1; k++) {
			printf("%c", a);
		}
		printf("\n");
	}
	//4,5
	for (int i = 2; i>0; i--) {
		int j = 3 - i;
		for (int k = 0; k<j; k++) {
			printf(" ");
		}
		j = i;
		for (int k = 0; k<2 * j - 1; k++) {
			printf("%c", a);
		}
		printf("\n");
	}





	system("pause");
	return 0;
}
