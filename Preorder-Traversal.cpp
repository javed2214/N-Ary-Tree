// Preorder Traversal of N-Ary Tree
// Recursive Approach

#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int data;
	vector<struct node *> child;
}node;

node *createNode(int n){

	node *root=new node;
	root->data=n;
	return root;
}

void preOrder(node *root){

	cout<<root->data<<" ";
	for(auto it:root->child)
		preOrder(it);
}

int main(){

	node *root=createNode(1);
	(root->child).push_back(createNode(2));
	(root->child).push_back(createNode(3));
	(root->child).push_back(createNode(4));
	(root->child[0]->child).push_back(createNode(5));
	(root->child[0]->child).push_back(createNode(6));
	(root->child[1]->child).push_back(createNode(7));
	(root->child[1]->child).push_back(createNode(8));
	(root->child[1]->child).push_back(createNode(9));
	(root->child[2]->child).push_back(createNode(10));

	preOrder(root);

	return 0;
}