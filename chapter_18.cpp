#include <bits/stdc++.h>

using namespace std;


// Traverse with level order
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

void levelOrder(BinaryTreeNode* root) {
	queue<BinaryTreeNode*> q;
	q.push(root);

	while (!q.empty()) {
		// 1. keep first item and take out
		BinaryTreeNode* frontItem = q.front();
		q.pop();
		// 2. do other work
		cout << frontItem->data << " ";
		// 3. keep their children
		if (frontItem->left != NULL) { // or only frontItem->left
			q.push(frontItem->left);
		}
		if (frontItem->right != NULL) {
			q.push(frontItem->right);
		}
	}
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
	
	levelOrder(root);

	return 0;
}






/* Binary tree node input from user */
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

BinaryTreeNode* inputBinaryTree() {
	BinaryTreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new BinaryTreeNode(n);
	}

	queue<BinaryTreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		// 1. keep and take out
		BinaryTreeNode* p = q.front();
		q.pop();

		// 2. do other work
		int l, r;
		cin >> l >> r;
		BinaryTreeNode* myLeft;
		BinaryTreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new BinaryTreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new BinaryTreeNode(r);
		}
		p->left = myLeft;
		p->right = myRight;

		// 3. keep their children
		if (p->left != NULL) { // or only frontItem->left
			q.push(p->left);
		}

		if (p->right != NULL) {
			q.push(p->right);
		}
	}

	return root;
}

// print with pre-order
void printBinaryTree(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	printBinaryTree(root->left);
	printBinaryTree(root->right);
}

// Print with level order
/* void printBinaryTree(BinaryTreeNode* root) {
	if (root == NULL) {
		return;
	}

	queue<BinaryTreeNode*> q;
	q.push(root);

	while (!q.empty()) {
		BinaryTreeNode* frontItem = q.front();
		q.pop();
		cout << frontItem->data << " ";
		if (frontItem->left) { // or frontItem->left != NULL
			q.push(frontItem->left);
		}
		if (frontItem->right) {
			q.push(frontItem->right);
		}
	}
} */

int main() {
	BinaryTreeNode* root = inputBinaryTree();
	printBinaryTree(root);

	return 0;
}






// Count nodes in a binary tree
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

BinaryTreeNode* inputBinaryTree() {
	BinaryTreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new BinaryTreeNode(n);
	}

	queue<BinaryTreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		BinaryTreeNode* p = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;
		BinaryTreeNode* myLeft;
		BinaryTreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new BinaryTreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new BinaryTreeNode(r);
		}
		p->left = myLeft;
		p->right = myRight;

		if (p->left != NULL) { // or only frontItem->left
			q.push(p->left);
		}

		if (p->right != NULL) {
			q.push(p->right);
		}
	}

	return root;
}

int countNode(BinaryTreeNode* root) {
	if (root == NULL) {
		return 0;
	}

	int l = countNode(root->left);
	int r = countNode(root->right);
	return l + r + 1;
}

int main() {
	BinaryTreeNode* root = BinaryTreeNode();
	cout << countNode(root) << endl;

	return 0;
}







// count leaf nodes in a binary tree
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

BinaryTreeNode* inputBinaryTree() {
	BinaryTreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new BinaryTreeNode(n);
	}

	queue<BinaryTreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		BinaryTreeNode* p = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;
		BinaryTreeNode* myLeft;
		BinaryTreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new BinaryTreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new BinaryTreeNode(r);
		}
		p->left = myLeft;
		p->right = myRight;

		if (p->left != NULL) { // or only frontItem->left
			q.push(p->left);
		}

		if (p->right != NULL) {
			q.push(p->right);
		}
	}

	return root;
}

int countLeaf(BinaryTreeNode* root) {
	if (root == NULL) {
		return 0;
	}

	if (root->left == NULL && root->right == NULL) {
		return 1;
	} else {
		int l = countLeaf(root->left);
		int r = countLeaf(root->right);
		return l + r;
	}
}

int main() {
	BinaryTreeNode* root = inputBinaryTree();
	cout << countLeaf(root) << endl;

	return 0;
}






// Find maximum height of a binary tree
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

BinaryTreeNode* inputBinaryTree() {
	BinaryTreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new BinaryTreeNode(n);
	}

	queue<BinaryTreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		BinaryTreeNode* p = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;
		BinaryTreeNode* myLeft;
		BinaryTreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new BinaryTreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new BinaryTreeNode(r);
		}
		p->left = myLeft;
		p->right = myRight;

		if (p->left != NULL) { // or only frontItem->left
			q.push(p->left);
		}

		if (p->right != NULL) {
			q.push(p->right);
		}
	}

	return root;
}

int getMaxHeight(BinaryTreeNode* root) {
	if (root == NULL) {
		return 0;
	}

	int l = getMaxHeight(root->left);
	int r = getMaxHeight(root->right);
	return max(l, r) + 1;
}

int main() {
	BinaryTreeNode* root = inputBinaryTree();
	cout << getMaxHeight(root) << endl;

	return 0;
}
