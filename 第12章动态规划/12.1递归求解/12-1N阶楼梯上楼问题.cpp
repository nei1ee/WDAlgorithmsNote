#include<iostream>
using namespace std;
/**
N阶楼梯上楼问题
斐波那契数列的变体，只需考虑n-1和n-2阶分别到n的方式
**/

const int MAXN=91;
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
