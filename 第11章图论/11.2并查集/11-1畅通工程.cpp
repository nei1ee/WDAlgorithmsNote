#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**畅通工程 
*实现一个并查集（合并，查找并压缩） 
*
*/

#define MAXN 1000
int father[MAXN];
int height[MAXN]={0};

//随着多组输入数据的输入，在每一组数据输入后都需要进行一次初始化 
void Initial(const int &n){
	//此处i应为1-n,与输入x,y范围对应 
	for(int i=0;i<=n;++i){
		father[i]=i;
		height[i]=0;
	}
}

int Find(const int &x){
	if(x!=father[x])father[x]=Find(father[x]);
	return father[x];
}

void Union(int x,int y){
	x = Find(x);
	y = Find(y);
	if(x!=y){
		if(height[x]<height[y])
			father[x]=y;
		else if(height[x]>height[y])
			father[y]=x;
		else{
			father[y]=x;
			++height[x];
		}
	}
	return ;
}

int main(){
	int n,m;
	while(cin>>n){
		if(n==0)break;
		cin>>m;
		Initial(n);
		while(m--){
			int x,y;
			cin>>x>>y;
			Union(x,y);
		}
		int answer = -1;
		for(int i=1;i<=n;++i){
			if(Find(i)==i)++answer;
		}
		cout<<answer<<endl;
	}


	return 0;
}

