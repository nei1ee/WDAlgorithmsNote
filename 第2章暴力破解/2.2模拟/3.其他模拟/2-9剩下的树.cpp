#include<iostream>
using namespace std;
const int MAXL=10001;
//bool型数组模拟马路
bool road[MAXL];

int main() {
    int l,m;
    while(scanf("%d%d",&l,&m)!=EOF) {
        int left,right,trees=0;
        for(int i=0; i<=l; i++) {
            road[i]=true;
        }
        for(int i=0; i<m; i++) {
            scanf("%d%d",&left,&right);
            for(int j=left; j<=right; j++) {
                if(road[j]) {
                    road[j]=false;
                }
            }
        }
        for(int i=0; i<=l; i++) {
            if(road[i]) {
                trees++;
            }
        }
        printf("%d\n",trees);
    }
    return 0;
}
