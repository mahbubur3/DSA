#include <bits/stdc++.h>

using namespace std;

// Print with level order
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void levelOrder(Node* root) {
	queue<Node*> q;

	q.push(root);
	while (!q.empty()) {
		// 1. take out
		Node* frontItem = q.front();
		q.pop();
		// 2. do other work
		cout << frontItem->data << " ";
		// 3. keep their children
		if (frontItem->left) { // or frontItem->left != NULL
			q.push(frontItem->left);
		}
		if (frontItem->right) {
			q.push(frontItem->right);
		}
	}
}

int main() {
	Node* root = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* e = new Node(60);
	Node* f = new Node(70);
	Node* g = new Node(80);
	Node* h = new Node(90);
	Node* i = new Node(100);

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






// Right to left
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void levelOrder(Node* root) {
	queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		// 1. take out
		Node* frontItem = q.front();
		q.pop();
		// 2. do other work
		cout << frontItem->data << " ";
		// 3. keep their children
		if (frontItem->right) { // or frontItem->left != NULL
			q.push(frontItem->right);
		}
		if (frontItem->left) {
			q.push(frontItem->left);
		}
	}
}

int main() {
	Node* root = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* e = new Node(60);
	Node* f = new Node(70);
	Node* g = new Node(80);
	Node* h = new Node(90);
	Node* i = new Node(100);

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
// Create Node
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

// Unser input function
Node* userInput() {
	int val;
	cin >> val;
	
	Node* root;
	if (val == -1) {
		root = NULL;
	} else {
		root = new Node(val);
	}

	queue<Node*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		// 1. take out
		Node* p = q.front();
		q.pop();
		// 2. do other work
		int l, r;
		cin >> l >> r;
		Node* myLeft;
		Node* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new Node(l);
		}
		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new Node(r);
		}
		p->left = myLeft;
		p->right = myRight;
		// 3. keep their children
		if (p->left) { // or frontItem->left != NULL
			q.push(p->left);
		}
		if (p->right) {
			q.push(p->right);
		}
	}
	return root;
}

// Print
void levelOrder(Node* root) {
	if (root == NULL) {
		return;
	}

	queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		// 1. take out
		Node* frontItem = q.front();
		q.pop();
		// 2. do other work
		cout << frontItem->data << " ";
		// 3. keep their children
		if (frontItem->left) { // or frontItem->left != NULL
			q.push(frontItem->left);
		}
		if (frontItem->right) {
			q.push(frontItem->right);
		}
	}
}

int main() {
	Node* root = userInput();
	levelOrder(root);

	return 0;
}






// count nodes in a binary tree
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

// Unser input function
Node* userInput() {
	int val;
	cin >> val;
	
	Node* root;
	if (val == -1) {
		root = NULL;
	} else {
		root = new Node(val);
	}

	queue<Node*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		// 1. take out
		Node* p = q.front();
		q.pop();
		// 2. do other work
		int l, r;
		cin >> l >> r;
		Node* myLeft;
		Node* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new Node(l);
		}
		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new Node(r);
		}
		p->left = myLeft;
		p->right = myRight;
		// 3. keep their children
		if (p->left) { // or frontItem->left != NULL
			q.push(p->left);
		}
		if (p->right) {
			q.push(p->right);
		}
	}
	return root;
}

int count(Node* root) {
	if (root == NULL) {
		return 0;
	}

	int l = count(root->left);
	int r = count(root->right);
	return l + r + 1;
}


int main() {
	Node* root = userInput();
	cout << count(root) << endl;

	return 0;
}







// count leaf nodes in a binary tree
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Node* userInput() {
	int val;
	cin >> val;
	
	Node* root;
	if (val == -1) {
		root = NULL;
	} else {
		root = new Node(val);
	}

	queue<Node*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		// 1. take out
		Node* p = q.front();
		q.pop();
		// 2. do other work
		int l, r;
		cin >> l >> r;
		Node* myLeft;
		Node* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new Node(l);
		}
		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new Node(r);
		}
		p->left = myLeft;
		p->right = myRight;
		// 3. keep their children
		if (p->left) { // or frontItem->left != NULL
			q.push(p->left);
		}
		if (p->right) {
			q.push(p->right);
		}
	}
	return root;
}

int countLeaf(Node* root) {
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
	Node* root = userInput();
	cout << count(root) << endl;

	return 0;
}





// Find maximum height of a binary tree
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Node* userInput() {
	int val;
	cin >> val;
	
	Node* root;
	if (val == -1) {
		root = NULL;
	} else {
		root = new Node(val);
	}

	queue<Node*> q;
	if (root != NULL) {
		q.push(root);
	}

	while (!q.empty()) {
		Node* p = q.front();
		q.pop();
		
		int l, r;
		cin >> l >> r;
		Node* myLeft;
		Node* myRight;
		if (l == -1) {
			myLeft = NULL;
		} else {
			myLeft = new Node(l);
		}
		
		if (r == -1) {
			myRight = NULL;
		} else {
			myRight = new Node(r);
		}
		
		p->left = myLeft;
		p->right = myRight;
		
		if (p->left) {
			q.push(p->left);
		}
		
		if (p->right) {
			q.push(p->right);
		}
	}
	return root;
}

int getMaxHeight(Node* root) {
	if (root == NULL) {
		return 0;
	}

	int l = getMaxHeight(root->left);
	int r = getMaxHeight(root->right);
	return max(l, r) + 1;
}

int main() {
	Node* root = userInput();
	cout << getMaxHeight(root) << endl;

	return 0;
}
