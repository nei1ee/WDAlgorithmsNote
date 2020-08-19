#include<iostream>
#include<vector>
using namespace std;
int getSum(int x) {
    int sum=0;
    for(int i=1; i<x; i++) {
        if(x%i==0) {
            sum+=i;
        }
    }
    return sum;
}

int main() {
    vector<int> num_E;
    vector<int> num_G;
    for(int i=2; i<=60; i++) {
        if(i==getSum(i)) {
            num_E.push_back(i);
        } else if(i<getSum(i)) {
            num_G.push_back(i);
        }
    }
    printf("E:");
    for(int i=0; i<num_E.size(); i++) {
        printf(" %d",num_E[i]);
    }
    printf("\nG:");
    for(int i=0; i<num_G.size(); i++) {
        printf(" %d",num_G[i]);
    }
    return 0;
}
