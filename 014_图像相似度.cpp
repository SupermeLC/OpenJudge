//http://noi.openjudge.cn/ch0108/06/
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a[100][100],b[100][100];
    int m,n;
    cin >> m>>n;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cin >> b[i][j];
        }
    }
    int sum=0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(a[i][j]==b[i][j])
                sum++;
        }
    }
    double per = sum/float(m*n)*100;
    printf("%.2f",per);
	return 0;
}