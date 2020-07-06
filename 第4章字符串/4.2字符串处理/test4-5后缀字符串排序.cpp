#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string str;
    cin>>str;
    string sstr[str.size()];
    for(int i=0; i<str.size(); i++) {
        sstr[i]=str.substr(i,str.size());
    }
    sort(sstr,sstr+str.size());
    for(int i=0; i<str.size(); i++) {
        cout<<sstr[i]<<endl;
    }
    return 0;
}
