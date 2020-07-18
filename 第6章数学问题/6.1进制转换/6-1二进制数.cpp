#include<iostream>
#include<stack>

using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        stack<int> binary;
        while(n!=0) {
            binary.push(n%2);
            n=n/2;
        }
        while(!binary.empty()){
            cout<<binary.top();
            binary.pop();
        }
        cout<<endl;
    }
    return 0;
}
