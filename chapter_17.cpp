#include <iostream>

using namespace std;

// Traverse with Pre order
class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void preOrder(TreeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

int main() {
	TreeNode* root = new TreeNode(10);
	TreeNode* a = new TreeNode(20);
	TreeNode* b = new TreeNode(30);
	TreeNode* c = new TreeNode(40);
	TreeNode* d = new TreeNode(50);
	TreeNode* e = new TreeNode(60);
	TreeNode* f = new TreeNode(70);
	TreeNode* g = new TreeNode(80);
	TreeNode* h = new TreeNode(90);
	TreeNode* i = new TreeNode(100);

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
class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void postOrder(TreeNode* root) {
	if (root == NULL) {
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int main() {
	TreeNode* root = new TreeNode(10);
	TreeNode* a = new TreeNode(20);
	TreeNode* b = new TreeNode(30);
	TreeNode* c = new TreeNode(40);
	TreeNode* d = new TreeNode(50);
	TreeNode* e = new TreeNode(60);
	TreeNode* f = new TreeNode(70);
	TreeNode* g = new TreeNode(80);
	TreeNode* h = new TreeNode(90);
	TreeNode* i = new TreeNode(100);

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
class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void inOrder(TreeNode* root) {
	if (root == NULL) {
		return;
	}

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

int main() {
	TreeNode* root = new TreeNode(10);
	TreeNode* a = new TreeNode(20);
	TreeNode* b = new TreeNode(30);
	TreeNode* c = new TreeNode(40);
	TreeNode* d = new TreeNode(50);
	TreeNode* e = new TreeNode(60);
	TreeNode* f = new TreeNode(70);
	TreeNode* g = new TreeNode(80);
	TreeNode* h = new TreeNode(90);
	TreeNode* i = new TreeNode(100);

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
