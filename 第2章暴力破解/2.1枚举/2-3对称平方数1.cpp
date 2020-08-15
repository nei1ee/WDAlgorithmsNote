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
    for(int i=0; i<=256; i++) {
        if(i*i==Reverse(i*i)) {
            printf("%d\n",i);
        }
    }
    return 0;
}
