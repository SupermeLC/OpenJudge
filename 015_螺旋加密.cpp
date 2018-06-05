//http://noi.openjudge.cn/ch0108/25/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string table[27] = { "00000","00001","00010","00011","00100",
"00101","00110","00111","01000","01001","01010","01011",
"01100","01101","01110","01111","10000","10001","10010",
"10011","10100","10101","10110","10111","11000","11001","11010" };

int main() {
	int data[20][20];
	int m, n;
	string test;
	cin >> m >> n;
	getchar();
	getline(cin, test);
	int len = test.size();
	string temp;
	int pos = 1;
	int px = 0, py = 0;
	for (int i = 0; i<len; i++) {
		if (test[i] == ' ') {
			temp = table[0];
		}
		else {
			temp = table[test[i] - 'A' + 1];
		}
		for (int j = 0; j<5; j++) {//five num
			//cout << px << py << endl;
			if (pos == 1) {
				//cout << data[px][py]<<endl;
				data[px][py] = temp[j] - 48;
				if (py + px + 1 == n) {
					pos = 2;
					px++;
				}
				else
					py++;
			}
			else if (pos == 2) {
				//cout << temp[j]<<endl;
				data[px][py] = temp[j] - 48;
				if (py - px==n-m) {
					pos = 3;
					py--;
				}
				else
					px++;
			}
			else if (pos == 3) {
				//cout << temp[j]<<endl;
				data[px][py] = temp[j] - 48;
				if (py + px + 1 == m) {
					pos = 4;
					px--;
				}
				else
					py--;
			}
			else if (pos == 4) {
				//cout << temp[j]<<endl;
				data[px][py] = temp[j] - 48;
				if (px-py==1) {
					pos = 1;
					py++;
				}
				else
					px--;
			}



		}
	}
	for (int i = 0; i<m; i++) {
		for (int j = 0; j<n; j++) {
		    if(data[i][j]!=0 && data[i][j]!=1)
		        data[i][j]=0;
		}
	}
	for (int i = 0; i<m; i++) {
		for (int j = 0; j<n; j++) {
		    cout << data[i][j];
		}
		//cout << endl;
	}
	cout << endl;








	return 0;
}