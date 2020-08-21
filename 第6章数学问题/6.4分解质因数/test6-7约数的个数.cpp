#include<iostream>
using namespace std;

int yueshu(int num) {
    int i,answer=0;
    for(i=1; i*i<num; i++) {
        if(num%i==0) {
            answer+=2;
        }
    }
    if(i*i==num)answer++;
    return answer;
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        for(int i=0; i<n; i++) {
            int num;
            scanf("%d",&num);
            printf("%d\n",yueshu(num));
        }
    }
    return 0;
}

