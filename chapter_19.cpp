bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if (root == NULL) {
    	return false;
    }

    if (root->data == x) {
    	return true;
    }

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r);
}



// Problem two
queue<pair<TreeNode<int>*, int>> q;
q.push({root, 1});

while (!q.empty()) {
	pair<TreeNode<int>*, int> p = q.front();
	TreeNode<int>* n = p.first;
	int l = p.second;
	q.pop();

	if (n->val == searchedValue) {
		return l;
	}

	if (n->left != NULL) {
		q.push({n->left, l + 1});
	}
	if (n->right != NULL) {
		q.push({n->right, l + 1});
	}
}




// Problem three - Left view of a binary tree
bool freq[3005] = {false};
queue<pair<TreeNode<int>*, int>> q;

if (root != NULL) {
	q.push({root, 1});
}

vector<int> v;
while (!q.empty()) {
	pair<TreeNode<int>*, int> p = q.front();
	q.pop();
	TreeNode<int>* n = p.first;
	int l = p.second;

	if (freq[l] == false) {
		v.push_back(n->data);
		freq[l] = true;
	}

	if (n->left != NULL) {
		q.push({n->left, l + 1});
	}
	if (n->right != NULL) {
		q.push({n->right, l + 1})
	}
}

return v;





// Problem four - diameter of binary tree
int mx = 0;
int maxHeight(TreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}

	int l = maxHeight(root->left);
	int r = maxHeight(root->right);
	int d = l + r;
	mx = max(mx, d);

	return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int>* root) {
	mx = 0;
	int getHeight = maxHeight(root);
	
	return mx;
}





// Problem five - Special binary tree
if (root->left == NULL && root->right == NULL) {
	return true;
}

if (root->left == NULL || root->right == NULL) {
	return false;
}

bool l = isSpecialBinaryTree(root->left);
bool r = isSpecialBinaryTree(root->right);
if (l == false || r == false) {
	return false;
}




// Problem six
vector<int> v;
queue<TreeNode<int>*> q;
if (root != NULL) {
	q.push(root);
}

while (!q.empty()) {
	TreeNode<int>* n = q.front();
	q.pop();

	v.push_back(n->val);

	if (n->left != NULL) {
		q.push(n->left);
	}
	if (n->right != NULL) {
		q.push(n->right);
	}
}

reverse(v.begin(), v.end());
return v;


