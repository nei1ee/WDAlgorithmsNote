#include<iostream>

using namespace std;

struct TreeNode {
    int data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(int num):data(num),leftChild(NULL),rightChild(NULL) {};
};

TreeNode* Insert(TreeNode*root,int data) {
    if(root==NULL) {
        //创建新节点
        root=new TreeNode(data);
    } else if(data<root->data) {
        //插入左子树
        root->leftChild=Insert(root->leftChild,data);
    } else if(data>root->data)  {
        //插入右子树
        root->rightChild=Insert(root->rightChild,data);
    }
    return root;
}

//前序遍历
void PreOrder(TreeNode *root) {
    if(root==NULL)return;
    printf("%d ",root->data);
    PreOrder(root->leftChild);
    PreOrder(root->rightChild);
    return;
}

//中序遍历
void InOrder(TreeNode *root) {
    if(root==NULL)return;
    InOrder(root->leftChild);
    printf("%d ",root->data);
    InOrder(root->rightChild);
    return;
}

//后序遍历
void PostOrder(TreeNode *root) {
    if(root==NULL)return;
    PostOrder(root->leftChild);
    PostOrder(root->rightChild);
    printf("%d ",root->data);
    return;
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        TreeNode* root=NULL;
        int data;
        for(int i=0; i<n; i++) {
            scanf("%d",&data);
            root=Insert(root,data);
        }
        PreOrder(root);
        printf("\n");
        InOrder(root);
        printf("\n");
        PostOrder(root);
        printf("\n");
    }
    return 0;
}
