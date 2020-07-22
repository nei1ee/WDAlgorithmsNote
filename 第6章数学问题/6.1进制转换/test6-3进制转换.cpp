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

int main() {
    string str;
    while(cin>>str) {
        int answer=0;
        int bit=1;
        for(int i=str.size()-1; i>=2; i--) {
            answer+=char2int(str[i])*bit;
            bit*=16;
        }
        cout<<answer<<endl;
    }
    return 0;
}
