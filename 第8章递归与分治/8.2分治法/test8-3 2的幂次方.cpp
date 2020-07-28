#include<iostream>
#include<math.h>

using namespace std;
/**
2µÄÃÝ´Î·½
**/

void print(int num) {
    int i=0;
    while(pow(2,i)<=num) {
        i++;
    }
    i--;
    if(i==0) {
        printf("2(0)");
    } else if(i==1) {
        printf("2");
    } else {
        printf("2(");
        print(i);
        printf(")");
    }
    int remainder=num-pow(2,i);
    if(remainder>0) {
        printf("+");
        print(remainder);
    }
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        print(n);
    }
    return 0;
}
