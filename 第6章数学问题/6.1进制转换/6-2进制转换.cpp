#include<iostream>
#include<string>
#include<stack>
using namespace std;

string Divide(string str,int x) {
    int remainder=0;
    for(int i=0; i<str.size(); i++) {
        int current=remainder*10+str[i]-'0';
        str[i]=current/x+'0';
        remainder=current%x;
    }
    int pos=0;
    while(str[pos]=='0') {
        pos++;
    }
    return str.substr(pos);
}

int main() {
    string str;
    while(getline(cin,str)) {
        stack<int> binary;
        while(str.size()!=0) {
            int last=str[str.size()-1]-'0';
            binary.push(last%2);
            str=Divide(str,2);
        }
        while(!binary.empty()) {
            printf("%d",binary.top());
            binary.pop();
        }
        printf("\n");
    }
    return 0;
}
