#include <iostream>

using namespace std;

// Traverse with Pre order
class BinaryTreeNode {
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void preOrder(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

int main() {
	BinaryTreeNode* root = new BinaryTreeNode(10);
	BinaryTreeNode* a = new BinaryTreeNode(20);
	BinaryTreeNode* b = new BinaryTreeNode(30);
	BinaryTreeNode* c = new BinaryTreeNode(40);
	BinaryTreeNode* d = new BinaryTreeNode(50);
	BinaryTreeNode* e = new BinaryTreeNode(60);
	BinaryTreeNode* f = new BinaryTreeNode(70);
	BinaryTreeNode* g = new BinaryTreeNode(80);
	BinaryTreeNode* h = new BinaryTreeNode(90);
	BinaryTreeNode* i = new BinaryTreeNode(100);

	root->left = a;
	root->right = b;
	a->left = c;
	a->right = h;
	c->right = e;
	b->right = d;
	d->left = f;
	d->right = g;
	h->right = i;
	
	preOrder(root);
	return 0;
}




// Traverse with post-order
class BinaryTreeNode {
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void postOrder(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int main() {
	BinaryTreeNode* root = new BinaryTreeNode(10);
	BinaryTreeNode* a = new BinaryTreeNode(20);
	BinaryTreeNode* b = new BinaryTreeNode(30);
	BinaryTreeNode* c = new BinaryTreeNode(40);
	BinaryTreeNode* d = new BinaryTreeNode(50);
	BinaryTreeNode* e = new BinaryTreeNode(60);
	BinaryTreeNode* f = new BinaryTreeNode(70);
	BinaryTreeNode* g = new BinaryTreeNode(80);
	BinaryTreeNode* h = new BinaryTreeNode(90);
	BinaryTreeNode* i = new BinaryTreeNode(100);

	root->left = a;
	root->right = b;
	a->left = c;
	a->right = h;
	c->right = e;
	b->right = d;
	d->left = f;
	d->right = g;
	h->right = i;
	
	postOrder(root);
	return 0;
}




// Traverse with in-order
class BinaryTreeNode {
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void inOrder(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

int main() {
	BinaryTreeNode* root = new BinaryTreeNode(10);
	BinaryTreeNode* a = new BinaryTreeNode(20);
	BinaryTreeNode* b = new BinaryTreeNode(30);
	BinaryTreeNode* c = new BinaryTreeNode(40);
	BinaryTreeNode* d = new BinaryTreeNode(50);
	BinaryTreeNode* e = new BinaryTreeNode(60);
	BinaryTreeNode* f = new BinaryTreeNode(70);
	BinaryTreeNode* g = new BinaryTreeNode(80);
	BinaryTreeNode* h = new BinaryTreeNode(90);
	BinaryTreeNode* i = new BinaryTreeNode(100);

	root->left = a;
	root->right = b;
	a->left = c;
	a->right = h;
	c->right = e;
	b->right = d;
	d->left = f;
	d->right = g;
	h->right = i;
	
	inOrder(root);
	return 0;
}
