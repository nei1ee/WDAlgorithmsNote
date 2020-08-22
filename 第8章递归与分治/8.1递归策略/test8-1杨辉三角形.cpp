#include<iostream>
using namespace std;
int fun(int x,int y) {
    if(y==1||x==y) {
        return 1;
    } else {
        return fun(x-1,y-1)+fun(x-1,y);
    }
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        for (int i=2; i<=n; i++) {
            for (int j=1; j<=i; j++) {
                printf("%d ",fun(i,j));
            }
            printf("\n");
        }
    }
    return 0;
}
