#include<iostream>

using namespace std;

int main() {
    int a;
    while(scanf("%d",&a)!=EOF) {
        int minimun=0,maximun=0;
        if(a%2==0) {
            minimun=a/4+(a%4)/2;
            maximun=a/2;
        }
        printf("%d %d\n",minimun,maximun);
    }
    return 0;
}
