#include<iostream>

using namespace std;

struct TreeNode {
    int data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(int num):data(num),leftChild(NULL),rightChild(NULL) {};
};

TreeNode* Insert(TreeNode*root,int data,int father) {
    if(root==NULL) {
        //创建新节点
        root=new TreeNode(data);
        printf("%d\n",father);
    } else if(data<root->data) {
        //插入左子树
        root->leftChild=Insert(root->leftChild,data,root->data);
    } else {
        //插入右子树
        root->rightChild=Insert(root->rightChild,data,root->data);
    }
    return root;
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        TreeNode* root=NULL;
        int data;
        for(int i=0; i<n; i++) {
            scanf("%d",&data);
            root=Insert(root,data,-1);
        }
    }
    return 0;
}
