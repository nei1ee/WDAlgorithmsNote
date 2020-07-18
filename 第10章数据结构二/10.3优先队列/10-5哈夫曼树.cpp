#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
/**哈夫曼树（使用优先队列抽取结点进行构造） 
*构造过程中，所有中间结点的权值和，即为此哈夫曼树的带权路径和 
*priority_queue<int,vector<int>,greater<int>>构造小顶堆（小的置前） 
*/
int main(){
	int n,x;
	int result=0;
	int a,b;
	while(cin>>n){
		priority_queue<int,vector<int>,greater<int> > q;
		result=0;
		while(n--){
			cin>>x;
			q.push(x);
		}
		while(q.size()>1){
			a = q.top();
			q.pop();
			b = q.top();
			q.pop();
			result+=a+b;
			q.push(a+b);
		}
		cout<<result<<endl;
		
	}

	return 0;
}

