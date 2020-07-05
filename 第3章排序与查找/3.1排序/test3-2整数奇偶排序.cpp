#include<iostream>
#include<algorithm>
using namespace std;

bool comparedec(int x,int y) {
    return x>y;
}

int main() {

    int a[10];
    int numx[10],numy[10];//x奇数数组，y偶数数组
    int m=0,n=0;
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]) {
        for(int i=0; i<10; i++) {
            if(a[i]%2==0) {
                numy[n++]=a[i];
            } else {
                numx[m++]=a[i];
            }
        }
        sort(numx,numx+m,comparedec);
        sort(numy,numy+n);
        for(int i=0; i<m; i++) {
            cout<<numx[i]<<" ";
        }
        for(int i=0; i<n; i++) {
            cout<<numy[i]<<" ";
        }
    }
}
