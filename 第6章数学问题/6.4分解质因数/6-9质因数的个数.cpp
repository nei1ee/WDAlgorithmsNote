#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<cmath>
using namespace std;


#define MAXN 35000
bool isPrime[MAXN];
vector<int> prime;

void initial(){
	fill_n(isPrime,MAXN,true);
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<MAXN;++i){
		if(!isPrime[i])continue;
		prime.push_back(i);
		for(int j=i*i;j<MAXN;j+=i){
			isPrime[j]=false;
		}
	}
	return ;
}

int main(){
	initial();
	int N;
	int ans=0;
	while(cin>>N){
		ans=0;
		for(int i=0;i<prime.size()&&prime[i]<N;++i){
			int factor = prime[i];
			while(N%factor==0){
				N/=factor;
				++ans;
			}
		}
		
		if(N>1)++ans;
		cout<<ans<<endl;
	}

	return 0;
}

