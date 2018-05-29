//http://noi.openjudge.cn/ch0107/15/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	cin >> num;
	string name;
	string ch;
	for (int i = 0;i < num; i++) {
		cin >> name;
		int len;
		len = name.size();
		for (int j = 0; j < len; j++) {
			if (j == 0) {
				if (name[j] >= 'a'&&name[j] <= 'z') {
					name[j] -= 32;
					cout << name[j];
				}
				else
					cout << name[j];
			}
			else {
				if (name[j] >= 'A'&&name[j] <= 'Z') {
					name[j] += 32;
					cout << name[j];
				}
				else
					cout << name[j];
			}
		}
		cout << endl;


	}


	system("pause");
	return 0;
}