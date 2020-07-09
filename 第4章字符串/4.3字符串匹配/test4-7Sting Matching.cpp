#include<iostream>
#include<string>

using namespace std;

int main() {
    string str1,str2;
    int sum=0,i,j,k;
    cin>>str1>>str2;
    for(i=0; i<str1.size(); i++) {
        for(j=i,k=0; j<str1.size()&&k<str2.size(); j++,k++) {
            if(str1[j]!=str2[k]){
                break;
            }
        }
        if(k==str2.size()){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
