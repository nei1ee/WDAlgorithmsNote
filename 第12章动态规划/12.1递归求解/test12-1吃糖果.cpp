#include<iostream>
using namespace std;
/**
吃糖果
斐波那契数列的变体，第n天的方式即n-1和n-2天的方式和
**/

const int MAXN=21;
int dp[MAXN];
int main() {
    int n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<MAXN; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    while(scanf("%d",&n)!=EOF) {
        printf("%lld\n",dp[n+1]);
    }
    return 0;
}
