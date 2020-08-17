#include<iostream>
#include<algorithm>
using namespace std;
bool BinarySearch(int n,int target,int num[]) {
    int left=0,right=n-1;
    while(left<=right) {
        int middle=(left+right)/2;
        if(target==num[middle]) {
            return true;
        } else if(target<num[middle]) {
            right=middle-1;
        } else {
            left=middle+1;
        }
    }
    return false;
}

int main() {
    int n,m,target;
    while(scanf("%d",&n)!=EOF) {
        int num[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&num[i]);
        }
        sort(num,num+n);
        scanf("%d",&m);
        for(int i=0; i<m; i++) {
            scanf("%d",&target);
            if(BinarySearch(n,target,num)) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
