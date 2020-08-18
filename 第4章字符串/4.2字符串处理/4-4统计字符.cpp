#include<iostream>
#include<string>
using namespace std;
int main() {
    string str1,str2;
    while(getline(cin,str1)) {
        if(str1=="#")break;
        getline(cin,str2);
        int num[200]={0};
        for(int i=0;i<str2.size();i++){
             num[str2[i]]++;
        }
        for(int i=0;i<str1.size();i++){
            printf("%c %d\n",str1[i],num[str1[i]]);
        }
    }
    return 0;
}
