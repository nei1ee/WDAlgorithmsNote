#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        int num[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&num[i]);
        }
        sort(num,num+n);
        if(n==1) {
            printf("%d\n-1",num[n-1]);
        } else {
            printf("%d\n",num[n-1]);
            for(int i=0; i<n-1; i++) {
                printf("%d ",num[i]);
            }
        }

    }
    return 0;

}
