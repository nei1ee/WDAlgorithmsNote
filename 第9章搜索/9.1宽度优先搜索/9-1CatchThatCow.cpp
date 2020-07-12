#include<queue>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**Catch That Cow
*思路：求最短时间等最优状态的问题，皆可以通过将时间作为状态的一个量 
*不断搜索状态，使用宽度优先搜索，坐标率先达到目的点的时间，即为最短时间 
*/

struct Status{
	//定义包含时间的状态
	int n;
	int T;
	Status(int n,int t):n(n),T(t){} ;
};
#define MAXN 100000
//零初始化器，对bool型默认全赋值false 
bool visited[MAXN]={0};


int BFS(const int &n,const int &k){
	//在BFS时，入队即修改visit可以剔除掉相同节点同时入队（当然本题不可能）
	//本函数中，使用了出队修改visited，即出队视为访问了 
	queue<Status> q;
	q.push(Status(n,0));
	while(!q.empty()){
		//队列非空，则出队一个，访问之
		Status curr=q.front();
//		cout<<curr.n<<" "<<curr.T<<endl;
		visited[curr.n]=true;
		if(curr.n==k)return curr.T;
		
		//出队，同时将下一步可能状态入队
		q.pop();
		for(int i=0;i<3;++i){
			Status next(curr.n,curr.T+1);
			switch(i){
				case 1:++next.n;break;
				case 2:--next.n;break;
				case 0:next.n*=2;break;
			}
			if(next.n<0||next.n>MAXN||visited[next.n])continue;
			q.push(next);
		} 
	}
	
	return -1;
}

int main(){
	int n,k;cin>>n>>k;
	cout<<BFS(n,k);
	return 0;
}

