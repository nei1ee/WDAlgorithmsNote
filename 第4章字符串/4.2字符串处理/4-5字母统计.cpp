#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    int num[26]={0};
    while(cin>>str){
        for(int i=0;i<str.size();i++){
            num[str[i]-'A']++;
        }
        for(int i=0;i<26;i++){
            printf("%c:%d\n",i+'A',num[i]);
        }
    }
    return 0;
}
