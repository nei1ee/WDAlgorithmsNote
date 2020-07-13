#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    string str;
    stack<char> temp;
    string ans="";
    while(cin>>str) {
        for(int i=0; i<str.size(); i++) {
            if(str[i]==')') {
                if(!temp.empty()) {
                    temp.pop();
                    ans+=" ";
                } else {
                    ans+="?";
                }
            } else if(str[i]=='(') {
                if(i==str.size()-1) {
                    ans+="$";
                } else {
                    temp.push(str[i]);
                    ans+=" ";
                }
            } else {
                ans+=" ";
            }
        }
        cout<<str<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
