// Zig Zag Level Order Traversal of N-Ary Tree
// Iterative Approach

#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int data;
	vector <struct node *> child;
}node;

node *createNode(int n){

	node *root=new node;
	root->data=n;

	return root;
}

void zigZagTraversal(node *root){

	queue <node *> q;
	q.push(root);
	int level=0;
	vector<vector<int>> res;

	while(!q.empty()){
		int s=q.size();
		vector<int> v;
		for(int i=0;i<s;i++){
			node *temp=q.front();
			q.pop();
			v.push_back(temp->data);
			for(int j=0;j<temp->child.size();j++)
				q.push(temp->child[j]);
		}
		if(level & 1) reverse(v.begin(),v.end());
		level+=1;
		res.push_back(v);
	}
	for(auto it:res){
		for(auto ptr:it)
			cout<<ptr<<" ";
	}
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

	zigZagTraversal(root);

	return 0;
}