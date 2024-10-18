#include <bits/stdc++.h>

using namespace std;


// Traverse with level order
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

void levelOrder(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);

	while (!q.empty()) {
		// 1. keep first item and take out
		TreeNode* frontItem = q.front();
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
	
	levelOrder(root);

	return 0;
}






/* Binary tree node input from user */
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

TreeNode* inputBinaryTree() {
	TreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new TreeNode(n);
	}

	queue<TreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		// 1. keep and take out
		TreeNode* p = q.front();
		q.pop();

		// 2. do other work
		int l, r;
		cin >> l >> r;
		TreeNode* myLeft;
		TreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new TreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new TreeNode(r);
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
void printBinaryTree(TreeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	printBinaryTree(root->left);
	printBinaryTree(root->right);
}

// Print with level order
/* void printBinaryTree(TreeNode* root) {
	if (root == NULL) {
		return;
	}

	queue<TreeNode*> q;
	q.push(root);

	while (!q.empty()) {
		TreeNode* frontItem = q.front();
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
	TreeNode* root = inputBinaryTree();
	printBinaryTree(root);

	return 0;
}






// Count nodes in a binary tree
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

TreeNode* inputBinaryTree() {
	TreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new TreeNode(n);
	}

	queue<TreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		TreeNode* p = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;
		TreeNode* myLeft;
		TreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new TreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new TreeNode(r);
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

int countNode(TreeNode* root) {
	if (root == NULL) {
		return 0;
	}

	int l = countNode(root->left);
	int r = countNode(root->right);
	return l + r + 1;
}

int main() {
	TreeNode* root = TreeNode();
	cout << countNode(root) << endl;

	return 0;
}







// count leaf nodes in a binary tree
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

TreeNode* inputBinaryTree() {
	TreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new TreeNode(n);
	}

	queue<TreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		TreeNode* p = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;
		TreeNode* myLeft;
		TreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new TreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new TreeNode(r);
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

int countLeaf(TreeNode* root) {
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
	TreeNode* root = inputBinaryTree();
	cout << countLeaf(root) << endl;

	return 0;
}






// Find maximum height of a binary tree
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

TreeNode* inputBinaryTree() {
	TreeNode* root;

	int n;
	cin >> n;
	if (n == -1) {
		root = NULL;
	} else {
		root = new TreeNode(n);
	}

	queue<TreeNode*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		TreeNode* p = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;
		TreeNode* myLeft;
		TreeNode* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new TreeNode(l);
		}

		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new TreeNode(r);
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

int getMaxHeight(TreeNode* root) {
	if (root == NULL) {
		return 0;
	}

	int l = getMaxHeight(root->left);
	int r = getMaxHeight(root->right);
	return max(l, r) + 1;
}

int main() {
	TreeNode* root = inputBinaryTree();
	cout << getMaxHeight(root) << endl;

	return 0;
}
