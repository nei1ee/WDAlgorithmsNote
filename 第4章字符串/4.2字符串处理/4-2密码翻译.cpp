#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    while(getline(cin,str)) {
        for(int i=0; i<str.size(); i++) {
            char temp=str[i];
            if(str[i]=='z') {
                str[i]='a';
            } else if(str[i]=='Z') {
                str[i]='A';
            } else if((str[i]<='Z'&&str[i]>='A')||(str[i]<='z'&&str[i]>='a')) {
                str[i]+=1;
            } else {
                continue;
            }
        }
        cout<<str;
    }
    return 0;
}
