#include<iostream>
#include<queue>

using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        if(!n)break;
        priority_queue<int,vector<int>,greater<int>> myPriorityQueue;
        for(int i=0; i<n; i++) {
            int x;
            scanf("%d",&x);
            myPriorityQueue.push(x);
        }
        int answer=0;
        while(myPriorityQueue.size()>1) {
            int a=myPriorityQueue.top();
            myPriorityQueue.pop();
            int b=myPriorityQueue.top();
            myPriorityQueue.pop();
            answer+=a+b;
            myPriorityQueue.push(a+b);
        }
        printf("%d\n",answer);

    }

    return 0;
}
