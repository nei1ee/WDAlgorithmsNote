#include<iostream>
#include<algorithm>

using namespace std;
struct Point {
    int x,y;
};
const int MAXN=1001;
Point point[MAXN];
bool mycompare(Point a,Point b){
    if(a.x==b.x){
        return a.y<b.y;
    }else{
        return a.x<b.x;
    }
}
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){

        for(int i=0;i<n;i++){
            scanf("%d %d",&point[i].x,&point[i].y);
        }
        sort(point,point+n,mycompare);
        printf("%d %d\n",point[0].x,point[0].y);
    }
    return 0;
}
