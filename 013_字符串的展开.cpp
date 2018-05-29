//http://noi.openjudge.cn/ch0107/35/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	string test;
	string output;
	cin >> test;
	int len;
	len = test.size();

	char f, b;
	cout << test[0];
	for (int i = 1; i < len; i++) {
		f = test[i - 1];
		b = test[i + 1];
		int t = b - f-1;
		char temp;
		if (p3 == 1) 
			temp = f;
		else 
			temp = b;
		if (test[i] == '-'&& ((b <= 'z'&&f >= 'a') || (b <= '9'&&f >= '0')) && f < b) {
			if (p1 == 1) {
				for (int j = 0; j < t; j++) {
					if (p3 == 1) 
						temp++;
					else 
						temp--;
					for (int k = 0; k < p2; k++)
						cout << temp;
				}
			}
			else if (p1 == 2) {
				for (int j = 0; j < t; j++) {
					char temp1;
					if (p3 == 1) {
						temp++;
						if(b <= '9'&&f >= '0')
							temp1 = temp;
						else
							temp1 = temp - 32;
					}
					else {
						temp--;
						if (b <= '9'&&f >= '0')
							temp1 = temp;
						else
							temp1 = temp - 32;
					}
					for (int k = 0; k < p2; k++)
						cout << temp1;
				}
			}
			else {
				for (int j = 0; j < t; j++) {
					for (int k = 0; k < p2; k++)
						cout << "*";
				}
			}
		}//big if
		else
			cout << test[i];
	}//for

	system("pause");
	return 0;
}