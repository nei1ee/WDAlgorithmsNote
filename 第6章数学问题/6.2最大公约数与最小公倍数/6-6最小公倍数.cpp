#include<iostream>

using namespace std;

int GCD(int a,int b) {
    if(b==0) {
        return a;
    } else {
        return GCD(b,a%b);
    }
}
int main() {
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF) {
        printf("%d\n",(a*b)/GCD(a,b));
    }
    return 0;
}
