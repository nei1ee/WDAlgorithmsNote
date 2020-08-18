#include<iostream>
#include<string>
#include<math.h>

using namespace std;

long int skew(string num) {
    long int ans=0;
    long int n=num.size();
    for(int i=0; i<n; i++) {
        if(num[i]!='0') {
            ans+=(num[i]-'0')*(pow(2,n-i)-1);
        } else {
            continue;
        }
    }
    return ans;
}

int main() {
    string str;
    while(cin>>str) {
        cout<<skew(str)<<endl;
    }
    return 0;
}
