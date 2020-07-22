#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int m,A,B;
    long int sum;
    vector<int> answer;
    while(scanf("%d",&m)!=EOF) {
        if(m==0)break;
        cin>>A>>B;
        sum=A+B;
        if(sum==0) {
            cout<<0;
        } else {
            while(sum!=0) {
                answer.push_back(sum%m);
                sum/=m;
            }
            for(int i=answer.size()-1; i>=0; i--) {
                cout<<answer[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
