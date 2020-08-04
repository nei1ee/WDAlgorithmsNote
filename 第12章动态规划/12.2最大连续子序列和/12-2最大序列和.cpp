#include<iostream>
using namespace std;
const int MAXN=1000000;

int num[MAXN];

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        long long sum=-1,temp=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&num[i]);
            if(temp>0) {
                temp+=num[i];
            } else {
                temp=num[i];
            }
            if(temp>sum) {
                sum=temp;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
