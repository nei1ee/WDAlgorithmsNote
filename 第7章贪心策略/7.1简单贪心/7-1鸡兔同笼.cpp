#include<iostream>
using namespace std;
int main() {
    int a;
    while(scanf("%d",&a)!=EOF) {
        int maxinum=0,mininum=0;
        if(a%2==0){
            maxinum=a/2;
            mininum=a/4+(a%4)/2;
        }
        printf("%d %d\n",mininum,maxinum);
    }
    return 0;
}
