// Program to Print All Path From Root to Leaves of N-Ary Tree

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

void printPath(vector<int> &res){

	for(auto it:res)
		cout<<it<<" ";
	cout<<"\n";
}

void rootToLeaves(node *root, vector<int> res){

	res.push_back(root->data);
	if(root->child.size()==0)
		printPath(res);
	for(auto it:root->child)
		rootToLeaves(it,res);
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
	(root->child[2]->child[0]->child).push_back(createNode(11));

	vector<int> res;
	rootToLeaves(root,res);

	return 0;
}