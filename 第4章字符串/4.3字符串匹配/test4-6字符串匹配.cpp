#include<iostream>
#include<string>

using namespace std;

//两个字符是否是同一字母
int match(char c1,char c2) {
    if(c1<='Z'&&c1>='A') {
        c1+='a'-'A';
    }
    if(c2<='Z'&&c2>='A') {
        c2+='a'-'A';
    }
    return (c1==c2);
}

int main() {
    int n,j,k;
    cin>>n;
    string str[n],temp;
    for(int i=0; i<n; i++) {
        cin>>str[i];
    }
    cin>>temp;
    for(int i=0; i<n; i++) {
        for(j=0,k=0; j<str[i].size()&&k<temp.size(); j++,k++) {
            if(temp[k]=='[') {
                //在[]中找到匹配
                while(temp[++k]!=']') {
                    if(match(str[i][j],temp[k])) {
                        break;
                    }
                }
                if(temp[k]==']') {
                    break;
                }
                //匹配之后找到]
                while(temp[k]!=']') {
                    k++;
                }
            } else {
                if(!match(str[i][j],temp[k])) {
                    break;
                }
            }
        }
        if(j==str[i].size()&&k==temp.size()) {
            cout<<i+1<<" "<<str[i]<<endl;
        }
    }
    return 0;
}
