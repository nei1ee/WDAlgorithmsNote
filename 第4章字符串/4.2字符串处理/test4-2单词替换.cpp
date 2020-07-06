#include<iostream>
#include<string>

using namespace std;

int main() {
    string str1,str2,str3;
    while(getline(cin,str1)) {
        cin>>str2;
        cin>>str3;
        string temp="";
        for(int i=0; i<str1.size(); i++) {
            if(str1[i]==' '||i==str1.size()-1) {
                if(i==str1.size()-1) {
                    temp+=str1[str1.size()-1];
                }
                if(temp==str2) {
                    cout<<str3<<" ";
                } else {
                    cout<<temp<<" ";
                }
                temp="";
            } else {
                temp+=str1[i];
            }
        }
    }
    return 0;
}
