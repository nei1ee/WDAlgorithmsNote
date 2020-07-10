#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/**二进制数 
*需要注意的是，依次除2后取模得到的是从低位到高位的结果，需要逆序输出 
*
*/

int change(const int& num){
	return 1;
}

int main(){
	int K;cin>>K;
	int num;
	vector<int> result;
	while(K--){
		cin>>num;
		while(num!=0){
			result.push_back(num%2);
			num/=2;
		}
		for(int i=result.size()-1;i>=0;--i)cout<<result[i];
		cout<<endl;
		result.clear();
	}

	return 0;
}

