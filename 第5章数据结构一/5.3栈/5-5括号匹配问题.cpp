#include<iostream>
#include<string>
#include<stack>

using namespace std;

//)(rttyy())sss)(
int main() {
    string str;
    while(cin>>str) {
        stack<int> brackets;
        string answer(str.size(),' ');
        for(int i=0; i<str.size(); i++) {
            if(str[i]==')') {
                if(!brackets.empty()) {
                    brackets.pop();
                } else {
                    answer[i]='?';
                }
            } else if(str[i]=='(') {
                brackets.push(i);
            }
        }
        while(!brackets.empty()){
            answer[brackets.top()]='$';
            brackets.pop();
        }
        cout<<str<<endl;
        cout<<answer<<endl;
    }
    return 0;
}
