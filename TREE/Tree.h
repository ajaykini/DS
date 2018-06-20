
#ifndef _TREE_H
#define _TREE_H

typedef struct node{
	int data;
	struct node *left;//will hold the reference to the left node
	struct node *right;//will hold the reference to the right node
}Node;

//below enums will hold the value specif to tree type
enum ttype{
	BINARY_T=1 //Binary tree
};

enum order{
	INORDER=1 //Inorder Traversal
};

class Tree {

	private:
		int nele;//total number of nodes in the tree
		ttype type;//type of the tree
		order ord;//order in which tree will be Processed/Displayed
		Node *newNode(int data);//will be called when adding creating a new node to add wrappers.
		
	public:
		Tree(void);//constructor
		Node *root;//will hold the reference to the root node

		//Tree Stats/Info
		int lh;//height of the left tree
		int rh;//height of the right tree

		//Tree Operations
		Node *add(int data,Node *root);//add an element to the tree
		int remove(int position);//remove the element from the tree
		void display(Node *);

		//Tree Traversal
		void inorder(Node *);

};

#endif