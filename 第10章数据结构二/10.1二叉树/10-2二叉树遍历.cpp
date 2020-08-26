#include<iostream>
using namespace std;

struct TreeNode {
    char data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(char c):data(c),leftChild(NULL),rightChild(NULL) {};
};

TreeNode *Build(string str1,string str2) {
    if(str1.size()==0) {
        return NULL;
    }
    char c=str1[0];
    //创建新节点
    TreeNode *root = new TreeNode(c);
    //寻找切分点
    int pos=str2.find(c);
    root->leftChild=Build(str1.substr(1,pos),str2.substr(0,pos));
    root->rightChild=Build(str1.substr(pos+1),str2.substr(pos+1));
    return root;
}

void PostOrder(TreeNode *root) {
    if(root==NULL) {
        return;
    }
    PostOrder(root->leftChild);
    PostOrder(root->rightChild);
    printf("%c",root->data);
}

int main() {
    string str1,str2;
    while(cin>>str1>>str2) {
        TreeNode *root=Build(str1,str2);
        PostOrder(root);
        printf("\n");
    }
    return 0;
}

