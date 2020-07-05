#include<iostream>
#include<algorithm>

using namespace std;

struct Student {
    string name;
    int id;
    int score;
};
//ÉýÐò
bool compareasc(Student x,Student y) {
    if(x.score==y.score) {
        return x.id<y.id;
    } else {
        return x.score<y.score;
    }
}
//½µÐò
bool comparedes(Student x,Student y) {
    if(x.score==y.score) {
        return x.id<y.id;
    } else {
        return x.score>y.score;
    }
}
int main() {
    int n,type;
    while(scanf("%d %d",&n,&type)!=EOF) {
        Student stu[n];
        for(int i=0; i<n; i++) {
            cin>>stu[i].name>>stu[i].score;
            stu[i].id=i;
        }
        if(type) {
            sort(stu,stu+n,compareasc);
        } else {
            sort(stu,stu+n,comparedes);
        }
        for(int i=0; i<n; i++) {
            cout<<stu[i].name<<" "<<stu[i].score<<endl;
        }
    }
}
