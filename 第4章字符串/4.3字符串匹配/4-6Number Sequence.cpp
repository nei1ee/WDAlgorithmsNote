#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

const int MAXN = 1000000;
const int MAXM = 10000;

int text[MAXN];
int pattern[MAXM];
int nextTable[MAXM];

void GetNextTable(int m){		// 创建next表
	int i = 0, j = -1;		
	nextTable[0] = -1;
	while (i < m) {			//因为找前后缀的匹配,所以让j=-1,使得第一个模式串从i=1开始
		if(j == -1 || pattern[i] == pattern[j]){	
			i++;
			j++;
			nextTable[i] = j;
		}else {
			j = nextTable[j];
		}
	}
}

int KMP(int n, int m){
	GetNextTable(m);
	int i = 0, j = 0;
	while(i < n && j < m){			// n是目标字符串，m是模式串
		if(j == -1 || text[i] == pattern[j]){	//匹配成功, 
			i++;					//或者是j==-1, 首部匹配失败，直接文本串向后移动一位
			j++;
		}else{						//匹配失败, 根据next数组移动模式串的j, 保持文本串的i不回溯, 
			j = nextTable[j];	
		}
		/* 把开头不匹配的情况单独拿出来
		if(text[i] == pattern[j]){
			i++;
			j++;
		}else if(j == 0 && text[i] != pattern[j]){
			i++;
		}else {
			j = nextTable[j];
		}*/
	}
	if(j == m){				//移动到边界，匹配成功
		return i - j + 1;
	}else {
		return -1;
	}
}

int main(){
	int caseNumber;
	cin>>caseNumber;
	while(caseNumber--){
		int n, m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>text[i];
		}
		for(int j=0;j<m;j++){
			cin>>pattern[j];
		}
		cout<<KMP(n, m)<<endl;
	}
	return 0;
}

/*KMP理解
https://blog.csdn.net/v_JULY_v/article/details/7041827
https://www.zhihu.com/question/21923021
*/
