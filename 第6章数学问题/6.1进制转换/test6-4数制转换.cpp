#include<iostream>
#include<string>
#include<vector>

using namespace std;
/*
考虑将原整数转换为十进制，再将十进制数转换为目标进制
*/


int char2int(char ch) {
    if(ch>='A'&&ch<='Z') {
        return ch-'A'+10;
    } else if(ch>='a'&&ch<='z') {
        return ch-'a'+10;
    } else {
        return ch-'0';
    }
}

char int2char(int x) {
    if(x<=9) {
        return x+'0';
    } else {
        return x-10+'A';
    }
}

int main() {
    int a,b;
    string str;
    while(~scanf("%d",&a)) {
        cin>>str>>b;
        int bit=1;
        int dec=0;
        vector<char> answer;
        for(int i=str.size()-1; i>=0; i--) {
            dec+=char2int(str[i])*bit;
            bit*=a;
        }
        while(dec!=0){
            answer.push_back(int2char(dec%b));
            dec/=b;
        }
        for(int i=answer.size()-1;i>=0;i--){
            cout<<answer[i];
        }
        cout<<endl;
    }
    return 0;
}
