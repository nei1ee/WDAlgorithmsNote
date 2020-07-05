#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    while(cin>>str) {
        for(int i=0; i<str.size(); i++) {
            bool first=false;//重复字符的第一次出现
            if(str[i]=='*')continue;
            for(int j=i+1; j<str.size(); j++) {
                if(str[i]==str[j]) {
                    if(!first) {
                        printf("%c:%d",str[i],i);
                        first=true;
                    }
                    printf(",%c:%d",str[j],j);
                    str[j]='*';
                }
            }
            if(first) {
                printf("\n");
            }
        }
    }
    return 0;
}
