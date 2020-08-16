#include<iostream>
using namespace std;
int main() {
    int h;
    while(scanf("%d",&h)!=EOF) {
        int col=h+(h-1)*2;
        for(int i=0; i<h; i++) {
            for(int j=0; j<col; j++) {
                if(j<col-(h+2*i)) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
