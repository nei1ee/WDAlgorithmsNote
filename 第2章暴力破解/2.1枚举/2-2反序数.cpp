#include<iostream>

using namespace std;

int Reverse(int x) {
    int rev=0;
    while(x!=0) {
        rev=rev*10+x%10;
        x/=10;
    }
    return rev;
}

int main() {
    for(int i=1000; i<=1111; i++) {
        if(i*9==Reverse(i)) {
            printf("%d\n",i);
        }
    }
    return 0;
}
