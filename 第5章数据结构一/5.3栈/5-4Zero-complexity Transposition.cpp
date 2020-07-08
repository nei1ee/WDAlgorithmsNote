#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
/**ÄæĞòÊä³öÎÊÌâ 
*
*
*/
int main(){
	int n;
	stack<long long int> s;
	int num;
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>num;
			s.push(num);
		}
		cout<<s.top();
		s.pop();
		for(int i=1;i<n;++i){
			cout<<" "<<s.top();
			s.pop();
		}
	}
	return 0;
}

