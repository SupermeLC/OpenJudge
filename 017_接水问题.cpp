//http://noi.openjudge.cn/ch0109/15/
#include <iostream>
#include <cstdio>
using namespace std;
#define MAX 10000
int main() {
    int num,pos;
    int w[MAX];
    int result = 0;
    cin>>num>>pos;
    for(int i=0;i<num;i++){
        cin>>w[i];
    }
    int t=1;
    int min_time = 100;
    int a[100];
    int cl=pos;
    for (int i=0; i<pos; i++){  
        a[i] = w[i];
    }
    while(t!=0){
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
        for(int i=0;i<pos;i++){
            //if(a[i] != 0)
            min_time = min(min_time,a[i]);
        }
        //cout<<min_time<<endl;
        result+=min_time;
        for(int i=0;i<pos;i++){
            a[i] -= min_time;
        }
        for(int i=0;i<pos;i++){
            if(a[i]==0&&cl<num){
                a[i] = w[cl];
                cl++;
            }
            if(cl==num)
                t=0;
        }
        min_time = 100;
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    }
    min_time = a[0];
    for(int i=0;i<pos;i++){
        min_time = max(min_time,a[i]);
    }
    result+=min_time;
    cout<<result;
    

    

	return 0;
}