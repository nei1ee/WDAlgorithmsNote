#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**A Knight's Journey
*思路： 将时间作为状态组的一部分，不断深入扩展 
*同时在扩展过程中剔除重复点，如果最终能够达到step==p*q则说明可以遍历整个棋盘，否则不能 
*/



#define MAXN 30
int p,q;
bool visited[MAXN][MAXN]={0};

int direction[8][2]={
{-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2}
};

bool DFS(const int &x,const int &y,const int &step,const string &ans){
	if(p*q==step){
		cout<<ans<<endl<<endl;
		return true;
	} else{
		for(int i=0;i<8;++i){
			int x_n=x+direction[i][0];
			int y_n=y+direction[i][1];
			char col = y_n + 'A';
			char row = x_n + '1';
			//如果越界，则不操作跳过
			if(x_n<0||x_n>=p||y_n<0||y_n>=q||visited[x_n][y_n]) continue;
			//不越界且未访问过，则访问它（标记它）
			visited[x_n][y_n]=true;
			//退出传递
			if(DFS(x_n,y_n,step+1,ans+col+row)) {
				return true;
			}
			
			//在进入下一个邻居时，该点取消访问（深度不相关）
			visited[x_n][y_n]=false; 
		}
	}
	return false;
}

int main(){
	int n;cin>>n;
	int casenum=0;
	while(n--){
		cin>>p>>q;
		cout<<"Scenario #"<<++casenum<<":"<<endl;
		visited[0][0]=true;
		if(!DFS(0,0,1,"A1")){
			cout<<"impossible"<<endl<<endl;
		}
	}

	return 0;
}

