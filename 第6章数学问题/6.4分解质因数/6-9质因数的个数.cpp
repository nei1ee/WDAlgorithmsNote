#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

//两种选其一
const int MAXN=35000;
//const int MAXN=sqrt(1e9)+1;

bool isPrime[MAXN];
vector<int> prime;

void Init() {
    for(int i=0; i<MAXN; i++) {
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2; i<MAXN; i++) {
        if(!isPrime[i])continue;
        prime.push_back(i);
        for(int j=i*i; j<MAXN; j+=i) {
            isPrime[i]=false;
        }
    }
}

int main() {
    Init();
    int num;
    while(scanf("%d",&num)!=EOF) {
        int answer=0;
        for(int i=0; i<prime.size()&&prime[i]<num; i++) {
            int factor=prime[i];
            while(num%factor==0) {
                num/=factor;
                answer++;
            }
        }
        if(num>1)answer++;
        printf("%d\n",answer);
    }
    return 0;
}
