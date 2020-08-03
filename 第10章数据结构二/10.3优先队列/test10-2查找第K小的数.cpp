#include<iostream>
#include<queue>

using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        priority_queue<int,vector<int>,greater<int>> myPriorityQueue;
        for(int i=0; i<n; i++) {
            int x;
            scanf("%d",&x);
            myPriorityQueue.push(x);
        }
        int k;
        scanf("%d",&k);
        int step=1,temp=0;
        while(!myPriorityQueue.empty()) {
            int current=myPriorityQueue.top();
            myPriorityQueue.pop();
            if(temp==current) continue;
            if(step==k) {
                printf("%d\n",current);
                break;
            }
            step++;
            temp=current;
        }
    }

    return 0;
}
