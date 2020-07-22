#include<iostream>

using namespace std;

int GCD(int a,int b) {
    if(b==0) {
        return a;
    } else {
        return GCD(b,a%b);
    }
}
int main() {
    int n;
    while(~(scanf("%d",&n))) {
        if(n==0)break;
        int num[n],sum=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&num[i]);
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(GCD(num[i],num[j])==1){
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
