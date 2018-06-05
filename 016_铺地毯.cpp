#include <iostream>
#include <string.h>
using namespace std;
//http://noi.openjudge.cn/ch0109/14/
#define MAX 10000



int main() {
    int num;
    int a,b,c,d;
    int e[MAX],f[MAX],g[MAX],h[MAX];
    int x,y;
    int res=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a>>b>>c>>d;
        e[i] = a;
        f[i] = b;
        g[i] = a+c;
        h[i] = b+d;
    }
    cin>>x>>y;
    for(int i = num-1;i>=0;i--){
        if((x>=e[i])&&(x<=g[i])&&(y>=f[i])&&(y<=h[i])){
            res =i+1;
            break;
        }
    }
    if(res!=0)
        cout<<res;
    else
        cout<<-1;
    

	return 0;
}