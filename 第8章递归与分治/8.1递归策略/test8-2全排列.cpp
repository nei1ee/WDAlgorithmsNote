#include<iostream>
#include<algorithm>
using namespace std;
void pailie(string &str,int s,int t) {
    if(s==t) {
        cout<<str<<endl;
        return;
    } else {
        for(int i=s; i<=t; i++) {
            swap(str[s],str[i]);
            pailie(str,s+1,t);
            swap(str[s],str[i]);
        }
    }
}
int main() {
    string str;
    while(getline(cin,str)) {
        sort(str.begin(),str.end());
        pailie(str,0,str.size()-1);
    }
    return 0;
}
