#include<iostream>
#include<string>
#include<vector>

using namespace std;

//×Ö·û´®³ı·¨
string divide(string str,int x) {
    int remainder=0;//±£ÁôÓàÊı
    for(int i=0; i<str.size(); i++) {
        int current=str[i]-'0'+remainder*10;
        str[i]=current/x+'0';
        remainder=current%x;
    }
    int index=0;
    while(str[index]=='0')index++;
    return str.substr(index);
}

int main() {
    string str;
    vector<int> binary;
    int last;
    while(getline(cin,str)) {
        while(str.size()!=0) {
            last=str[str.size()-1]-'0';
            binary.push_back(last%2);
            str=divide(str,2);
        }
        for(int i=binary.size()-1; i>=0; i--) {
            cout<<binary[i];
        }
        cout<<endl;
    }

    return 0;
}
