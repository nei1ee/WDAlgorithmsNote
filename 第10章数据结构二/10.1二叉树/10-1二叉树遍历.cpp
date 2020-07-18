#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**二叉树遍历 
*思路：重点在于根据题目要求建立一棵树 
*此外便是对应的进行访问，这点不难 
*/

struct Node{
	char data;
	Node* left;
	Node* right;
	Node(char c):data(c),left(NULL),right(NULL){};
};
//从给定输入字符串开始构建树，返回根节点 
Node* BuildTree(int &position,const string &str){
	char c=str[position++];
	if(c=='#')return NULL;
	Node *node = new Node(c);
	node->left = BuildTree(position,str);
	node->right = BuildTree(position,str);
	return node;
}

void InOrder(Node* root){
	if(root == NULL)return ;
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
	return ;
} 

int main(){
	string str;
	while(cin>>str){
		int position = 0;
		Node* root = BuildTree(position,str);
		InOrder(root);
		cout<<endl;
	}

	return 0;
}

