#include<iostream>
using namespace std;

struct TreeNode {
    char data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(char c):data(c),leftChild(NULL),rightChild(NULL) {};
};

TreeNode *Build(int &position,string str) {
    char c=str[position++];
    if(c=='#') {
        return NULL;
    }
    //创建新节点
    TreeNode *root=new TreeNode(c);
    //创建左子树
    root->leftChild=Build(position,str);
    //创建右子树
    root->rightChild=Build(position,str);
    return root;
}

void InOrder(TreeNode *root) {
    if(root==NULL) {
        return;
    }
    InOrder(root->leftChild);
    printf("%c ",root->data);
    InOrder(root->rightChild);
}

int main() {
    string str;
    while(cin>>str) {
        int position=0;
        TreeNode *root=Build(position,str);
        InOrder(root);
        printf("\n");
    }
    return 0;
}

