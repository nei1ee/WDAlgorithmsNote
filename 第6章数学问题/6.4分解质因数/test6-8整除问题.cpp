#include<iostream>
#include<math.h>

using namespace std;

const int MAXN=1000;

bool isPrime[MAXN];
vector<int> prime;

//求2-1000所有素数
void init() {
    fill_n(isPrime,MAXN,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2; i<MAXN; i++) {
        if(!isPrime[i])continue;
        prime.push_back(i);
        for(int j=i*i; j<MAXN; j+=i) {
            //质数的倍数为非质数
            isPrime[j]=false;
        }
    }
    return ;
}

int main() {
    init();
    int n,a;
    while(scanf("%d%d",&n,&a)!=EOF) {
        int answer=0;
        for(int i=0; i<prime.size()&&prime[i]<num; i++) {
            int factor=prime[i];
            while(num%factor==0) {
                num/=factor;
                answer++;
            }
        }
        if(num>1) {
            answer++;
        }
    }
    return 0;
}

