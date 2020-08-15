#include<iostream>
using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        for(int x=0; x<=100; x++) {
            for(int y=0; y<=100-x; y++) {
                int res=100-x-y;
                if(15*x+9*y+res<=3*n) {
                    printf("x=%d,y=%d,z=%d\n",x,y,res);
                }
            }
        }
    }
    return 0;
}
