#include<iostream>
#include<stack>

using namespace std;

int main() {
    int n;
    while(cin>>n) {
        stack<int> temp;
        char type;
        if(n==0) {
            break;
        }
        for(int i=0; i<n; i++) {
            cin>>type;
            if(type=='A') {
                if(temp.empty()) {
                    cout<<"E"<<endl;
                } else {
                    cout<<temp.top()<<endl;
                }
            } else if(type=='P') {
                int num;
                cin>>num;
                temp.push(num);
            } else if(type=='O') {
                if(!temp.empty()) {
                    temp.pop();
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
