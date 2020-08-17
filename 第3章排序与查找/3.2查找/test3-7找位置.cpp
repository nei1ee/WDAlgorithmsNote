#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    while(cin>>str) {
        for(int i=0; i<str.size(); i++) {
            bool isFirst=false;
            //如果字母已遍历
            if(str[i]=='*')continue;
            for(int j=i+1; j<str.size(); j++) {
                if(str[i]==str[j]) {
                    if(!isFirst) {
                        printf("%c:%d",str[j],i);
                        isFirst=true;
                    }
                    printf(",%c:%d",str[j],j);
                    str[j]='*';//已遍历
                }
            }
            if(isFirst)printf("\n");
        }
    }
    return 0;
}
