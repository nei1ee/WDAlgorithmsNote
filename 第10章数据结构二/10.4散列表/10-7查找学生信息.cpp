#include<iostream>
#include<map>
#include<algorithm>
#include<string.h>
using namespace std;
/**查找学生信息 
*思路：使用map以提高检索返回效率 
*本题注意的是，可以将输入整行读入，而不需要区分具体字段 
*/
int main(){
	int n;cin>>n;
	getchar();//吃掉回车 
	map<string, string> student;
	string key,str;
	for(int pos,i=0;i<n;++i){
		getline(cin,str);
		pos = str.find(" ");
		key = str.substr(0,pos);
		student[key]=str;
	}
	int m;cin>>m;
	while(m--){
		cin>>key;
		string answer = student[key];
		if(answer=="")answer="No Answer!";
		cout<<answer<<endl;
	}

	return 0;
}

