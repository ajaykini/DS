#include <iostream>
#include "Tree.h"

using namespace std;

/*
Description: Display the tree
input: Node *
return: void
*/
void Tree::inorder(Node *root){
	if(root != NULL){
		inorder(root->left);
		cout << " | " << root->data << " | ";
		inorder(root->right);
	}
}

/*
Description: Display the tree
input: Node *
return: void
*/
void Tree::display(Node *root){
	switch(this->ord){
		case INORDER:
		default:
			cout << "TREE DISPLAY IN INORDER" << endl;
			inorder(root);
			break;
	}
}

/*
Description: create a new node to add
input: int 
return: Node *
*/
Node *Tree::newNode(int data){
	Node *ele = (Node *)malloc(sizeof(Node));
	ele->data = data;
	ele->left = ele->right = NULL;

	this->nele++;

	return ele;
}

/*
Description: add an element to the tree 
input: 
	param1 : int
	param2 : Node * 
return: Node *
*/
Node* Tree::add(int data,Node *node){
	if(node == NULL){
		return newNode(data);
	}

	if(data < node->data){
		node->left=add(data,node->left);
	}
	else if(data > node->data){
		node->right=add(data,node->right);
	}

	return node;
}

/*Description: remove the data element from the tree
input: int
return: int
*/
int Tree::remove(int data){
	cout << "\nYet To Implement";
	return 0;
}

/*Description: Default Constructor
input: int
return: int
*/
Tree::Tree(){
	this->root = NULL;
	this->nele =0;
	this->type = BINARY_T;
	this->ord = INORDER;
}
