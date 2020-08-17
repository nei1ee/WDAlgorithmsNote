#include<iostream>
#include<string.h>
using namespace std;
int keytab[26]= {
    1,2,3,1,2,3,
    1,2,3,1,2,3,1,2,3,
    1,2,3,4,1,2,3,1,2,3,4
};

int main() {
    string str;
    while(cin>>str) {
        int time=0;
        char temp;
        for(int i=0; i<str.size(); i++) {
            time+=keytab[str[i]-'a'];
            //按键差值等于字母差值则在一个按键上
            if(i>0&&(str[i]-temp)==(keytab[str[i]-'a']-keytab[temp-'a'])) {
                time+=2;
            }
            temp=str[i];
        }
        printf("%d\n",time);
    }
    return 0;
}
