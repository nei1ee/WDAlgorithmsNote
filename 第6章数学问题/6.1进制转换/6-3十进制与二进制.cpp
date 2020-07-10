#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/**十进制与二进制 
*思路：十进制转二进制，二进制逆序，二进制转十进制（乘一个不同的10指数后相加） 
*注意：此题数据仍较大，1000位以内 
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

string multiple(string str,const int& x,int carry){
	carry=0;//存储进位
	for(int i=str.size()-1;i>=0;--i){
		int curr=x*(str[i]-'0')+carry;
		str[i]=curr%10+'0';
		carry = curr/10;
	} 
	if(carry!=0)str=(char)('0'+carry)+str;
	return str;
}

string add(string str,int x){
	return multiple(str,1,x);
}


int main(){
	vector<int> v;
	string A;
	int last;
	while(cin>>A){
		while(A.size()!=0){
			last = A[A.size()-1]-'0';
			v.push_back(last%2);
			A = divide2(A);	
		}
		string ans = "0";
		for(int i=0;i<v.size();++i){
			ans = multiple(ans,2,0);
			ans = add(ans,v[i]);
			cout<<ans<<endl;
		} 
		cout<<ans<<endl;
		
	}
	//v的正序即原数二进制逆序

	return 0;
}

