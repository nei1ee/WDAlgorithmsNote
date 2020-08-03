#include<iostream>
#include<map>

using namespace std;

int main() {
    map<string, string> dictionary;
    string str;
    while(getline(cin,str)) {
        if(str=="@END@")break;
        int pos=str.find("]");
        //÷‰”Ô
        string key=str.substr(0,pos+1);
        //π¶ƒ‹
        string value=str.substr(pos+2);
        dictionary[key]=value;
        dictionary[value]=key;
    }
    int n;
    scanf("%d",&n);
    getchar();
    string temp;
    for(int i=0; i<n; i++) {
        getline(cin,temp);
        string answer=dictionary[temp];
        if(answer=="") {
            answer="what?";
        } else if(answer[0]=='[') {
            answer=answer.substr(1,answer.size()-2);
        }
        cout<<answer<<endl;
    }
    return 0;
}
