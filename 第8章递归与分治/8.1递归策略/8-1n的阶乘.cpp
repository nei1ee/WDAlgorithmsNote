#include<iostream>

using namespace std;

long long factorial(int n) {
    if(n==0) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        cout<<factorial(n)<<endl;
    }
    return 0;
}
