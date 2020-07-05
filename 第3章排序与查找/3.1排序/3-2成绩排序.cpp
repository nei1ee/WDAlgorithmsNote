#include<iostream>
#include<algorithm>

using namespace std;

struct Student {
    int id;
    int score;
};
bool compare(Student x,Student y) {
    if(x.score==y.score) {
        return x.id<y.id;
    } else {
        return x.score<y.score;
    }
}
int main() {
    Student stu[100];
    int n;
    while(scanf("%d",&n)!=EOF) {
        for(int i=0; i<n; i++) {
            scanf("%d %d",&stu[i].id,&stu[i].score);
        }
        sort(stu,stu+n,compare);
        for(int i=0; i<n; i++) {
            printf("%d %d\n",stu[i].id,stu[i].score);
        }
    }
}
