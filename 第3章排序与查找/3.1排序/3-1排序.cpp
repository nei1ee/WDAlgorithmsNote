#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    int arr[100];
    while(scanf("%d",&n)!=EOF) {
        for(int i=0; i<n; i++) {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        for(int i=0; i<n; i++) {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
