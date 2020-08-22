#include<iostream>
using namespace std;
/**
二叉树
考虑左子树+右子树的节点个数
**/

int node(int m,int n) {
    if(m>n) {
        return 0;
    } else {
        return 1+node(m*2,n)+node(m*2+1,n);
    }
}

int main() {
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF) {
        if(m==0&&n==0)break;
        cout<<node(m,n)<<endl;
    }
    return 0;
}
