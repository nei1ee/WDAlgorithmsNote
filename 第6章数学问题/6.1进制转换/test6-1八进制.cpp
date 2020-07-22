#include<iostream>
#include<stack>

using namespace std;

int main(){
    int number;
    stack<int> octal;
    while(scanf("%d",&number)!=EOF){
        while(number!=0){
            octal.push(number%8);
            number/=8;
        }
        while(!octal.empty()){
            cout<<octal.top();
            octal.pop();
        }
        cout<<endl;
    }
    return 0;
}
