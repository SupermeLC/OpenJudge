//http://noi.openjudge.cn/ch0107/04/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	cin >> num;
	string p1, p2;
	while (num > 0) {
		cin >> p1>> p2;
		if (p1[0] == 'R'){
			if (p2[0] == 'R') printf("Tie\n");
			if (p2[0] == 'P') printf("Player2\n");
			if (p2[0] == 'S') printf("Player1\n");
		}
		if (p1[0] == 'S'){
			if (p2[0] == 'S') printf("Tie\n");
			if (p2[0] == 'R') printf("Player2\n");
			if (p2[0] == 'P') printf("Player1\n");
		}
		if (p1[0] == 'P'){
			if (p2[0] == 'P') printf("Tie\n");
			if (p2[0] == 'S') printf("Player2\n");
			if (p2[0] == 'R') printf("Player1\n");
		}		
		num--;
	}

	return 0;
}