#include<iostream>
#include<stack>

using namespace std;

int main(){
	int n;
	stack<long long> num;
	long long temp;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			cin>>temp;
			num.push(temp);
		}
		for(int i=0;i<n;i++){
			cout<<num.top()<<" ";
			num.pop();
		}
	}
	return 0;
}
