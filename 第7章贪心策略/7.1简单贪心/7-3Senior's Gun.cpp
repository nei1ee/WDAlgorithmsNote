#include<iostream>
#include<algorithm>

using namespace std;
/**
贪心策略a[i]-b[j]最大
**/

const int MAXN=10001;
long long gun[MAXN];
long long monster[MAXN];

bool Compare(long long x,long long y) {
    return x>y;
}

int main() {
    int caseNumber;
    scanf("%d",&caseNumber);
    while(caseNumber--) {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++) {
            scanf("%lld",&gun[i]);
        }
        for(int i=0; i<m; i++) {
            scanf("%lld",&monster[i]);
        }
        sort(gun,gun+n,Compare);
        sort(monster,monster+m);
        long long answer=0;
        for(int i=0; i<n; i++) {
            if(i>=m||gun[i]<=monster[i])break;
            answer+=(gun[i]-monster[i]);
        }
        printf("%lld\n",answer);
    }
    return 0;
}
