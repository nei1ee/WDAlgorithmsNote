#include<iostream>
#include<algorithm>
using namespace std;
/**
贪心策略：最先结束最优先
**/
const int MAXN=101;

struct Program {
    int startTime;
    int endTime;
};

bool Compare(Program x,Program y) {
    return x.endTime<y.endTime;
}

int main() {
    int n;
    Program program[MAXN];
    while(scanf("%d",&n)!=EOF) {
        if(n==0)break;
        for(int i=0; i<n; i++) {
            scanf("%d%d",&program[i].startTime,&program[i].endTime);
        }
        sort(program,program+n,Compare);
        int currentTime=0,answer=0;
        for(int i=0; i<n; i++) {
            if(currentTime<=program[i].startTime) {
                answer++;
                currentTime=program[i].endTime;
            }
        }
        printf("%d\n",answer);
    }
    return 0;
}
