#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**人见人爱A^B，结果保留最后三位，因而在快速幂的过程中进行取模运算 
*快速幂思路：在不断二进制转换指数的同时，底数不断求自己的平方 
*本题最终mod 1000 
*/

int FastExponentiation(int a,int b,int mod){
	//a^b，结果取模mod
	int answer = 1;
	while(b!=0){
		//转二进制，当前位为1则具有因数 
		if(b%2==1){
			answer *= a;
			answer %= mod;
		}
		b/=2;
		a*=a;//作为因数，无论有无该项都需要随之不断平方，以供调用 
		a%=mod;
	} 
	return answer;
}

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		cout<<FastExponentiation(a,b,1000);
	}
	
	return 0;
}

