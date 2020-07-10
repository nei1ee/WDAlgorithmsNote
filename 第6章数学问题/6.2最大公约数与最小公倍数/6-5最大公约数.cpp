#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**最大公约数 
*思路：辗转相除法，可以直接While循环实现，不需要使用递归 
*
*/

int GCD(int &a,int &b){
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
} 

int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<GCD(a,b)<<endl;
	}	

	return 0;
}

