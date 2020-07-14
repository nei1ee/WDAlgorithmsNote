#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**最大序列和,dp 
*考虑dp[i]表示以Ai结尾的序列的最大和 
*则dp[i]=max{Ai,dp[i-1]+Ai} ,eg.
*/
int main(){
	int N;
	while(cin>>N){
		int *p = new int[N];
		int *dp = new int[N];
		for(int i=0;i<N;++i)cin>>p[i];
		dp[0]=p[0];
		int maxn=-99999;
		for(int i=1;i<N;++i){
			dp[i]=max(p[i],(dp[i-1]+p[i]));
			maxn=max(maxn,dp[i]);
		}
		cout<<maxn<<endl;
	}

	return 0;
}

