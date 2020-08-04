#include<iostream>
using namespace std;
const int MAXN=1000;
int father[MAXN];   //父亲节点

int Find(int x) {//寻找根节点
    if(father[x]==-1) {
        return x;
    } else {
        father[x]=Find(father[x]);
        return father[x];
    }
}

int main() {
    int n,m;
    while(scanf("%d",&n)!=EOF) {
        if(n==0)break;
        scanf("%d",&m);
        for(int i=1; i<=n; i++) {
            father[i]=-1;
        }
        for(int i=0; i<m; i++) {
            int x,y;
            scanf("%d %d",&x,&y);
            x=Find(x);
            y=Find(y);
            if(x!=y) { //不在同一棵树上
                father[y]=x;
            }
        }
        int answer=-1;
        for(int i=1; i<=n; i++) {
            if(father[i]==-1) {
                answer++;
            }
        }
        printf("%d\n",answer);
    }
    return 0;
}
