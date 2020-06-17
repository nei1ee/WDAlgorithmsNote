#include<iostream>

using namespace std;
int keytab[26]= {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};

int main() {
    char words[100]= {'\0'};
    while(scanf("%s",words)!=EOF) {
        int time=0;
        int i=0;
        char temp=words[i++];
        while(temp!='\0') {
            //是否在一个按键上
            if((words[i]-temp)==(keytab[words[i]-'a']-keytab[temp-'a'])) {
                time+=2;
            }
            time+=keytab[temp-'a'];
            temp=words[i++];
        }
        printf("%d\n",time);
    }
    return 0;
}
