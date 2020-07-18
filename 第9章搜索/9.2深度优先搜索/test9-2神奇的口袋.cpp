#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**神奇的口袋 
*思路：每个物体具有状态0,1（邻居状态） 
*当V>=40时退出，否则不断深搜.状态为(curr_V,curr_things) 
*/

int result=0;
int a[25];
int n;

void DFS(const int &index,const bool &isChosed,const int &V){
//	cout<<"index:"<<index<<" isChosed:"<<isChosed<<" V:"<<V<<" result:"<<result<<endl;
	
	if(V==40){
		++result;return;
	}
	if(V>40){
		return ;	
	}
	if(index==(n)){
		return;
	}else{
		DFS(index+1,true,V+a[index+1]);
		DFS(index+1,false,V);
	}
	return ;
}


int main(){
	cin>>n;
	//原先使用while(n--)，这样改变了n的值，在DFS中使用n则不灵！！ 
	for(int i=0;i<n;++i)cin>>a[i+1];
	DFS(0,false,0);
	
	cout<<result<<endl;

	return 0;
}

