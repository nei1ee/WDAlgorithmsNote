#include<iostream>
using namespace std;
int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        if(n==0)break;
        int step=0;
        while(n!=1) {
            if(n%2==0) {
                n/=2;
            } else {
                n=(3*n+1)/2;
            }
            step++;
        }
        printf("%d\n",step);
    }
    return 0;
}
