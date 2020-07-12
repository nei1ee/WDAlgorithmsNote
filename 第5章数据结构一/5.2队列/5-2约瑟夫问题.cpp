#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
/**约瑟夫问题 
*思路：循环队列实现（或是使用普通队列模拟实现循环队列，队首出队后压入队尾） 
*
*/
int main(){
	int n,p,m;
	queue<int> children;
	//多组数据外定义结构，要注意运行每一组时务必是初始化的状态 
	while(cin>>n>>p>>m){
		if(n==0&&p==0&&m==0)break;
		//首先依次入队
		for(int i=0;i<n;++i){
			//Tips:先-1，再+1，输出分布[1,n] 
			children.push((p+i-1)%n+1);
		} 
		//开始报数（到m出队/输出）
		int count=1;
		while(children.size()!=1){
			if(count!=m){
				children.push(children.front());
				children.pop();
				++count;
			}
			else{
				cout<<children.front()<<",";
				children.pop();
				count=1;
			}	
		}
		cout<<children.front()<<endl;
		children.pop();
	}

	return 0;
}

