// Program to Find Number of Children of Given Node in N-Ary Tree / Generic Tree

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

int getChildren(node *root, int p){

	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		int s=q.size();
		for(int i=0;i<s;i++){
			node *temp=q.front();
			q.pop();
			if(temp->data=p){
				int x=temp->child.size();
				return x;
			}
			for(int j=0;j<temp->child.size();j++)
				q.push(temp->child[j]);
		}
	}
	return -1;
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


	cout<<getChildren(root,3);

	return 0;
}