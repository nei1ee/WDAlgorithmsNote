#include<iostream>
#include<string> 
#include<vector>
#include<algorithm>
using namespace std;

const int maxn=11;
vector<string> vec[maxn];
int n;
string s;

int main(){
	while(cin>>n && n!=0){
		for(int i=0;i<n;i++){
			cin>>s;
			vec[i].clear();		//清除上一次的值
			vec[i].push_back(s);
		}
		sort(vec,vec+n);		//排序
		for(int i=0;i<n;i++){	//截取 把形如“a\b\c”的字符串分割成[“a”，“b”，“c”]这样的字符串数组
			s=vec[i][0];
			vec[i].clear();
			int j=0,index;
			while(j<s.size()){				//从下标j开始查找'\'
				if((index=s.find('\\',j))!=string::npos){//find函数在找不到指定值得情况下会返回string::npos
					vec[i].push_back(s.substr(j,index-j));//substr截取函数(从j位开始，截取index-j位) 
					j=index+1;
				}else{
					vec[i].push_back(s.substr(j,s.size()-j));
					break;
				}
			}    
		}
		for(int i=0;i<n;i++){		//打印 
			if(i==0){				//第一个直接输出 
				for(int j=0;j<vec[i].size();j++){
					for(int k=0;k<j;k++)
						cout<<"  ";
					cout<<vec[i][j]<<endl; 
				}
			}else{					//找到和前一个第一个不相等的位置 
				int j=0;
				while(j<vec[i-1].size() && j<vec[i].size() && vec[i][j]==vec[i-1][j])
					j++;
				if(j==0){			//如果第一个字母就不相同，直接输出 
					for(int k=0;k<vec[i].size();k++){
						for(int l=0;l<k;l++)cout<<"  ";
						cout<<vec[i][k]<<endl; 
					}
				}else{				//找到了第一个不相同的位置j，从j开始输出 
					for(int k=j;k<vec[i].size();k++){
						for(int l=0;l<k;l++)
							cout<<"  ";
						cout<<vec[i][k]<<endl;
					}
				} 
			}
		}
		cout<<endl;
	}
	return 0;
} 
