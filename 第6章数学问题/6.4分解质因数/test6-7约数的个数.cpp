#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**约数的个数 
*这题本身，，只求约数个数，枚举即可，也不用判断素数 
*扩展：可以使用约数个数定理，同时结合素数筛法，不断递增枚举 
*/

int numofdivice(int num){
	int ans=0;
	int i;
	for(i=1;i*i<num;++i){
		if(num%i==0)ans+=2;
	}
	if(i*i==num)++ans;
	return ans;
}

int main(){
	int N;cin>>N;
	int num;
	while(N--){
		cin>>num;
		cout<<numofdivice(num)<<endl;
	}

	return 0;
}

