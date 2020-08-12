#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	string s1, s2;
	cin>>s1>>s2;
	string s1_left = s1.substr(0, s1.find('.'));	// 分割整数和小数部分
	string s1_right = s1.substr(s1.find('.')+1);
	string s2_left = s2.substr(0, s2.find('.'));
	string s2_right = s2.substr(s2.find('.')+1);

	if(s1_left.length() < s2_left.length())		//s1_left永远是最长的
		s1_left.swap(s2_left);
	if(s1_right.length() < s2_right.length())	//s1_right永远是最长的
		s1_right.swap(s2_right);
//	cout<<s1_left<<" "<<s2_left<<endl;
	int f = 0;					//记录进位数字
	for(int i=s2_right.length()-1;i>=0;i--){	 // 小数部分加法
		int a=s1_right[i]-'0'+s2_right[i]-'0'+f; // 对应位相加，注意从最短数的最后一位相加
		s1_right[i] = a%10+'0';		//将数字变成字符
		f = a/10;
	}
	
	int len = s1_left.length()-1;				 // 整数部分加法
	for(int i=s2_left.length()-1;i>=0;i--){
		int a=s1_left[len]-'0'+s2_left[i]-'0'+f; // 对应位相加，注意从最短数的最后一位相加
		s1_left[len] = a%10+'0';		//将数字变成字符
		f = a/10;
		len--;
	}
	
	while(len>=0){							// 最长整数部分剩余位
		int a = s1_left[len]-'0'+f;
		s1_left[len] = a%10+'0';
		f = a/10;
		len--;
	}
	if(len<0 && f==1){						// 处理 5.3+5.9 这样的情况
		s1_left.insert(0, "1");
	}
	cout<<s1_left<<"."<<s1_right<<endl;
	return 0;
}
