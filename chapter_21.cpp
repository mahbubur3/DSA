// Search in Binary Tree (BST)
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

TreeNode* inputTree() {
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

		if (p->left) {
			q.push(p->left);
		}

		if (p->right) {
			q.push(p->right);
		}
	}

	return root;
}

bool searchItemAtTree(TreeNode* root, int x) {
	if (root == NULL) return false;
	if (root->data == x) return true;
	if (x < root->data) {
		return searchItemAtTree(root->left, x);
	} else {
		return searchItemAtTree(root->right, x);
	}
}

int main() {
	TreeNode* root = inputTree();
	if (searchItemAtTree(root, 10)) {
		cout << "Found" << endl;
	} else {
		cout << "Not found" << endl;
	}

	return 0;
}






// Insert in BST
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

TreeNode* inputTree() {
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

		if (p->left) {
			q.push(p->left);
		}

		if (p->right) {
			q.push(p->right);
		}
	}

	return root;
}

void insertItemAtTree(Node*& root, int x) {
	if (root == NULL) {
		root = new Node(x);
		return;
	}

	if (x < root->data) {
		if (root->left == NULL) {
			root->left = new Node(x);
		} else {
			insertItemAtTree(root->left, x);
		}
	} else {
		if (root->right == NULL) {
			root->right = new Node(x);
		} else {
			insertItemAtTree(root->right, x);
		}
	}
}

void printTree(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()) {
		TreeNode* p = q.front();
		q.pop();
		cout << p->data << " ";
		if (p->left) {
			q.push(p->left);
		}
		if (p->right) {
			q.push(p->right);
		}
	}
}

int main() {
	TreeNode* root = inputTree();
	insertItemAtTree(root, 13);
	insertItemAtTree(root, 32);
	printTree(root);

	return 0;
}





// Convert array to bst
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

TreeNode* arrayToBinaryST(int a[], int n, int l, int r) {
	if (l > r) {
		return NULL;
	}

	int mid = (l + r) / 2;
	TreeNode* root = new TreeNode(a[mid]);
	TreeNode* leftRoot = arrayToBinaryST(a, n, l, mid - 1);
	TreeNode* rightRoot = arrayToBinaryST(a, n, mid + 1, r);
	root->left = leftRoot;
	root->right = rightRoot;
	return root;
}

void printTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()) {
		TreeNode* p = q.front();
		q.pop();
		cout << p->data << " ";
		if (p->left) {
			q.push(p->left);
		}
		if (p->right) {
			q.push(p->right);
		}
	}
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	TreeNode* root = arrayToBinaryST(a, n, 0, n - 1);
	printTree(root);

	return 0;
}
