#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
/**完数与盈数（清华复试） 
*思路：vector变长数组存储结果 
*不能直接bool型函数判断是完数还是盈数，如4,1+2=3<4，它都不是，所以返回sum值 
*/

int calSum(const int &num){
	int sum=1;
	//定义中sum为所有因子和，除了本身，因而除1以外，其他因子都加一对
	//for循环开一半即可 
	double sqr=sqrt(num);
	for(int i=2;i<sqr;++i){
		if(num%i==0){
			sum+=i;
			sum+=num/i;
		}
	}
	//单独计算完全平方根 
	if(sqr==(int)sqr)sum+=(int)sqr;
	return sum;
}

int main(){
	vector<int> Num_E;
	vector<int> Num_G;
	for(int i=2;i<=60;++i){
		if(calSum(i)>i)Num_G.push_back(i);
		else if(calSum(i)==i)Num_E.push_back(i);
	}
	//以下格式输出
	printf("E:");
	for(int i=0;i<Num_E.size();++i)cout<<" "<<Num_E[i];
	printf("\nG:");
	for(int i=0;i<Num_G.size();++i)cout<<" "<<Num_G[i];
	
	

	return 0;
}

