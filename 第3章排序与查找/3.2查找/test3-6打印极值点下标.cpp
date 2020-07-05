#include<iostream>
using namespace std;
int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        int num[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&num[i]);
        }
        if(num[0]<num[1]||num[0]>num[1]) {
            printf("0 ");
        }
        for(int i=1; i<n-1; i++) {
            if((num[i-1]<num[i]&&num[i]>num[i+1])||(num[i-1]>num[i]&&num[i]<num[i+1])) {
                printf("%d ",i);
            }
        }
        if(num[n-1]>num[n-2]||num[n-1]<num[n-2]) {
            printf("%d \n",n-1);
        } else {
            printf("\n");
        }
    }
    return 0;
}
