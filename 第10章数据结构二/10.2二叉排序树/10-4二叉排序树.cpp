#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**二叉排序树 
*思路：重点在于根据题目要求建立一棵二叉排序树 
*重点定义好insert函数 
*/

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int c):data(c),left(NULL),right(NULL){};
};
//向给定二叉排序树insert 
Node* Insert(Node* root,int x){
	if(root == NULL)root = new Node(x);
	else if(x<root->data)
		root->left = Insert(root->left,x);
	else if(x>root->data)
		root->right = Insert(root->right,x);
	return root;
}

void InOrder(Node* root){
	if(root == NULL)return ;
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
	return ;
} 

void PreOrder(Node* root){
	if(root == NULL)return ;
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
	return ;
} 

void PostOrder(Node* root){
	if(root == NULL)return ;
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
	return ;
} 

int main(){
	int n;int x;
	while(cin>>n){
		Node* root = NULL;
		for(int i=0;i<n;++i){
			cin>>x;
			root = Insert(root,x);
		}
		PreOrder(root);cout<<endl;
		InOrder(root);cout<<endl;
		PostOrder(root);cout<<endl;
	}

	return 0;
}

