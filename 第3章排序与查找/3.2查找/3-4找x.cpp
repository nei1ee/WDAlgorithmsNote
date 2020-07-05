#include<iostream>

using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        int num[n],target,index=-1;
        for(int i=0; i<n; i++) {
            scanf("%d",&num[i]);
        }
        scanf("%d",&target);
        for(int i=0; i<n; i++) {
            if(num[i]==target) {
                index=i;
            }
        }
        printf("%d",index);
    }
    return 0;
}
