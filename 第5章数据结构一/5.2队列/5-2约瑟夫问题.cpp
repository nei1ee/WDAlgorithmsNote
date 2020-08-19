#include<iostream>
#include<queue>
using namespace std;

int main() {
    int n,p,m;
    while(scanf("%d%d%d",&n,&p,&m)) {
        if(n==0&&p==0&&m==0) {
            break;
        }
        queue<int> myQueue;
        for(int i=0; i<n; i++) {
            myQueue.push(i+1);
        }
        for(int i=1; i<p; i++) {
            myQueue.push(myQueue.front());
            myQueue.pop();
        }
        while(!myQueue.empty()) {
            for(int i=1; i<m; i++) {
                myQueue.push(myQueue.front());
                myQueue.pop();
            }
            if(myQueue.size()==1) {
                printf("%d",myQueue.front());
                myQueue.pop();
            } else {
                printf("%d,",myQueue.front());
                myQueue.pop();
            }
        }
        printf("\n");
    }
    return 0;
}
