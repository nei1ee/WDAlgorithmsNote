#include<iostream>
#include<string>
using namespace std;

int nextTable[10000]={0};

void GetNextTable(int m, string pattern){
	int i = 0, j = -1;
	nextTable[0] = -1;
	while(i < m){
		if(j == -1 || pattern[i] == pattern[j]){
			i++;
			j++;
			nextTable[i] = j;
		}else{
			j = nextTable[j];
		}
	}
}

int KMP(string text, string pattern){
	int n = text.length();
	int m = pattern.length();
	GetNextTable(m, pattern);
	int i = 0, j = 0;
	int num = 0;	//匹配次数
	while(i < n && j < m){
		if(j == -1 || text[i] == pattern[j]){
			i++;
			j++;
		}else {
			j = nextTable[j];
		}	
		if(j == m){		//这里把判断加到循环内，用来判断匹配次数
			num++;
			j = nextTable[j];
		}
	}
	return num;
}

int main(){
	int caseNumber;
	cin>>caseNumber;
	string pattern, text;
	while(caseNumber--){
		cin>>pattern>>text;
		cout<<KMP(text, pattern)<<endl;
	}	
	return 0;
}
