#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

const int MAXN=30;
bool visit[MAXN][MAXN];
int p,q;

int direction[8][2]= {
    {-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2}
};

bool DFS(int x,int y,int step,string ans) {
    //搜索成功
    if(step==p*q) {
        cout<<ans<<endl<<endl;
        return true;
    } else {
        //遍历邻居节点
        for(int i=0; i<8; i++) {
            int nx=x+direction[i][0];
            int ny=y+direction[i][1];
            //该点的编号
            char col=ny+'A';
            char row=nx+'1';
            if(nx<0||nx>=p||ny<0||ny>=p||visit[nx][ny]) {
                continue;
            }
            //标记该点
            visit[nx][ny]=true;
            if(DFS(nx,ny,step+1,ans+col+row)) {
                return true;
            }
            //取消标记
            visit[nx][ny]=false;
        }
    }
    return false;
}

int main() {
    int n,caseNumber=0;
    scanf("%d",&n);
    memset(visit,false,sizeof(visit));
    while(n--) {
        scanf("%d%d",&p,&q);
        printf("Scenario #%d:\n",++caseNumber);
        visit[0][0]=true;
        if(!DFS(0,0,1,"A1")) {
            printf("impossible\n\n");
        }
    }

    return 0;
}
