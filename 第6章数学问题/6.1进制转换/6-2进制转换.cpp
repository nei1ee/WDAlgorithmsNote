#include<iostream>
#include<string>
#include<vector>

using namespace std;

//Ä£Äâ³ıÒÔ2
string div2(string str) {
    int n=str.size();
    string res(n,'0');
    int bias=0,index=0;
    for(int i=0;i<n;i++){
        res[i]=(str[i]-'0'+bias*10)/2+'0';
        bias=(str[i]-'0'+bias*10)%2;
    }
    while(res[index++]=='0');
    return res.substr(index-1);
}

int main() {
    string str;
    vector<int> binary;
    int last;
    while(getline(cin,str)) {
        while(str.size()!=0) {
            last=str[str.size()-1]-'0';
            binary.push_back(last%2);
            str=div2(str);
        }
        for(int i=binary.size()-1;i>=0;i--){
            cout<<binary[i];
        }
        cout<<endl;
    }

    return 0;
}
