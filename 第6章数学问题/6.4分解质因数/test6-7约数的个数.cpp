#include<iostream>

using namespace std;
//约数的个数

int yueshu(int num) {
    int answer=0,i;
    for(i=1; i*i<num; i++) {
        if(num%i==0) {
            answer+=2;
        }
    }
    if(i*i==num)answer++;
    return answer;
}

int main() {
    int n,num;
    while(scanf("%d",&n)!=EOF) {
        for(int i=0; i<n; i++) {
            scanf("%d",&num);
            cout<<yueshu(num)<<endl;
        }
    }
    return 0;
}

