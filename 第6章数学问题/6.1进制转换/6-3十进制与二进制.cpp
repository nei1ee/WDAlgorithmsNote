#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
/**
此题数字为1000位，普通整型无法存储
**/

//字符串除法
string divide(string str,int x) {
    int remainder=0;//保留余数
    for(int i=0; i<str.size(); i++) {
        int current=str[i]-'0'+remainder*10;
        str[i]=current/x+'0';
        remainder=current%x;
    }
    int index=0;
    while(str[index]=='0')index++;
    return str.substr(index);
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
    while(getline(cin,str)) {
        vector<int> binary;
        while(str.size()!=0) {
            //最低位计算
            int last=str[str.size()-1]-'0';
            //取模运算
            binary.push_back(last%2);
            //整除运算
            str=divide(str,2);
        }
        string answer="0";
        for(int i=0; i<binary.size(); i++) {
            answer=mutiple(answer,2);//乘法运算
            answer=add(answer,binary[i]);//加法运算
        }
        cout<<answer<<endl;
    }

    return 0;
}
