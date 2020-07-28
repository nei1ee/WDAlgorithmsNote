#include<iostream>

using namespace std;

long long fac(int n) {
    if(n==1) {
        return 2;
    } else {
        return 3*fac(n-1)+2;
    }
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        cout<<fac(n)<<endl;
    }
    return 0;
}
