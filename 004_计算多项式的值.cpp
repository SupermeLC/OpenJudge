//http://noi.openjudge.cn/ch0103/07/
#include <math.h>
#include <stdio.h>
int main()
{
	double a, b, c, d, x, result;
	scanf("%lf %lf %lf %lf %lf",  &x, &a, &b, &c, &d);
	result = a *pow(x,3) + b*pow(x, 2) + c*x + d;
	printf("%.7lf", result);
	return 0;
}