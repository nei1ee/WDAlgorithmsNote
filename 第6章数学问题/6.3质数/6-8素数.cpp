#include<iostream>
#include<vector>

using namespace std;

/**素数
*思路：使用素数筛法
*具体即不断剔除素数的倍数
*/

const int MAXN=10001;
//零初始化器，全部初始化为false
bool isPrime[MAXN];
vector<int> Prime;

void initial() {
    fill_n(isPrime,MAXN,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2; i<MAXN; ++i) {
        if(!isPrime[i])continue;
        Prime.push_back(i);
        for(int j=i*i; j<MAXN; j+=i) {
            isPrime[j]=false;
        }
    }
    return ;
}

int main() {
    initial();
    int n;
    while(~scanf("%d",&n)) {
        int count=0;
        for(int i=0; i<Prime.size()&&Prime[i]<n; i++) {
            if(Prime[i]%10==1) {
                count++;
                cout<<Prime[i]<<" ";
            }
        }
        if(!count)cout<<"-1"<<endl;
    }
    return 0;
}
