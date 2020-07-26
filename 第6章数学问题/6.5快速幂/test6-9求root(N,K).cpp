#include<iostream>

using namespace std;

//k进制表示的各位数字之和
int sum(int n,int k) {
    int answer=0;
    while(n!=0) {
        answer+=n%k;
        n/=k;
    }
    return answer;
}

int root(int n,int k) {
    if(n<k)return n;
    return root(sum(n,k),k);
}

int cal(int x,int y,int k) {
    if(y==1) {
        return root(x,k);
    } else if(y%2==1) {
        return cal(cal(x,y/2,k)*cal(x,y/2,k)*cal(x,1,k),1,k);
    } else {
        return cal(cal(x,y/2,k)*cal(x,y/2,k),1,k);
    }
}


int main() {
    int x,y,k;
    while(cin>>x>>y>>k) {
        cout<<cal(x,y,k)<<endl;
    }
    return 0;
}
