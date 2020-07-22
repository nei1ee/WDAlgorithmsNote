#include<iostream>
#include<string>
#include<vector>

using namespace std;

int char2int(char ch) {
    if(ch>='A'&&ch<='Z') {
        return ch-'A'+10;
    } else {
        return ch-'0';
    }
}

//十六进制字符转二进制字符串
string dec2bin(char ch) {
    string str(4,'0');
    vector<int> answer;
    int number=char2int(ch);
    while(number!=0) {
        answer.push_back(number%2);
        number=number/2;
    }
    for(int i=answer.size()-1; i>=0; i--) {
        str[4-i-1]=answer[i]+'0';
    }
    return str;
}

//字符串乘法
string mutiple(string str,int x) {
    int carry=0;//保存进位
    for(int i=str.size()-1; i>=0; i--) {
        int current=x*(str[i]-'0')+carry;
        str[i]=current%10+'0';
        carry=current/10;
    }
    if(carry!=0) {
        str="1"+str;
    }
    return str;
}

//字符串加法
string add(string str,int x) {
    int carry=x;
    for(int i=str.size()-1; i>=0; i--) {
        int current=(str[i]-'0')+carry;
        str[i]=current%10+'0';
        carry=current/10;
    }
    if(carry!=0) {
        str="1"+str;
    }
    return str;
}

int main() {
    string str;
    while(cin>>str) {
        string binary="";
        for(int i=2; i<str.size(); i++) {
            binary+=dec2bin(str[i]);
        }
        string answer="0";
        for(int i=0; i<binary.size(); i++) {
            answer=mutiple(answer,2);
            answer=add(answer,binary[i]-'0');
        }
        cout<<answer<<endl;
    }
    return 0;
}
