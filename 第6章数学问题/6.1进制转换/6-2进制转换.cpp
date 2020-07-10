#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/**进制转换 
*思路：长度最多为30位，因而使用字符串来存储该数，同时定义字符串除2函数 
*
*/

string divide2(const string &s){
	//模拟手动除以2
	const int n=s.size();
	string res(n,'0');
	int bias=0;
	for(int i=0;i<n;++i){
		res[i]=(s[i]-'0'+10*bias)/2+'0';
		bias=(s[i]-'0'+10*bias)%2;
	}
	int index=0;
	while(res[index]=='0')++index;
	return res.substr(index);
}

int main(){
	string s;
	vector<int> v;
	int last; 
	while(cin>>s){
		while(s.size()!=0){
			last = s[s.size()-1]-'0';
			v.push_back(last%2);
			s=divide2(s);
		}
		for(int i=v.size()-1;i>=0;--i)cout<<v[i];
		cout<<endl;		
		v.clear();
	}

	return 0;
}

