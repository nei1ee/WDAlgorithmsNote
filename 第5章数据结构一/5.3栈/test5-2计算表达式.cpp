#include<iostream>
#include<algorithm>
#include<string.h>
#include<stack>
#include<cctype> 
using namespace std;
/**计算表达式，输入无空格区分 
*思路：分为符号栈和数值栈，当入栈符号优先级小于栈顶符号优先级时，计算栈顶符号相关表达式 
*输入：一串不区分的字母和符号，（可以使用自动机来进行识别，也可以直接单独判断每行中的每个字符）
*数据的读取和输入是一个难点 
*/

int getPriority(const char& c){
	
	switch(c){
		case '#':return 0;
		case '$':return 1;
		case '+':return 2;
		case '-':return 2;
		default:return 3;
	}
}

double getNumber(const string &str, int &index){
	double number = 0;
	while(isdigit(str[index])){
		number = number * 10 + str[index]-'0';
		++index;
	}
	return number;
}

double Calculate(const double& x,const double& y,const char& op){
	double result = 0;
	switch(op){
		case '+':result = x+y;break;
		case '-':result = x-y;break;
		case '*':result = x*y;break;
		case '/':result = x/y;break;
	}
	return result ;
}

int main(){
	stack<char> sta_op;
	stack<double> sta_num;
	string str;
	while(getline(cin,str)){
		//index维护一个读取指针
		int index = 0;
		sta_op.push('#');//优先级最低，意味着表达式结束
		str+='$';
		while(index<str.size()){
			if(isdigit(str[index])){
				sta_num.push(getNumber(str,index));
			}
			else{
				if(getPriority(sta_op.top())<getPriority(str[index])){
					sta_op.push(str[index]);
					++index;
				}
				else{
					//入栈符号优先级小于栈顶优先级，则先计算栈顶涉及的运算 
					double y= sta_num.top();
					sta_num.pop();
					double x = sta_num.top();
					sta_num.pop();
					sta_num.push(Calculate(x,y,sta_op.top()));
					sta_op.pop();
				}
			}
		} 
		printf("%d\n",(int)sta_num.top());
	}
	
	return 0;
}

