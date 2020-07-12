#include<iostream>
#include<queue>

using namespace std;

int main() {
    //n，n个小孩；p开始报数；m间隔
    int n,p,m;
    while(scanf("%d%d%d",&n,&p,&m)!=EOF) {
        if(n==0&&p==0&&m==0) {
            break;
        }
        queue<int> children;
        //初始化队列
        for(int i=0; i<n; i++) {
            children.push(i+1);
        }
        //使序号为p的小孩到队首
        for(int i=1; i<p; i++) {
            children.push(children.front());
            children.pop();
        }
        while(!children.empty()) {
            for(int i=1; i<m; i++) {
                children.push(children.front());
                children.pop();
            }
            if(children.size()==1) {
                printf("%d\n",children.front());
            } else {
                printf("%d,",children.front());
            }
            children.pop();
        }
    }
    return 0;
}
