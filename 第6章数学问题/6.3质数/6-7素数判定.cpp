#include<iostream>
#include<math.h>

using namespace std;

bool judge(int x) {
    if(x<2) {
        return false;
    } else {
        for(int i=2; i<=sqrt(x); i++) {
            if(x%i==0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        if(judge(n)) {
            cout<<"yes"<<endl;
        } else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
