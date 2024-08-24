// Problem six - LEFT SUM
long long leftSum(BinaryTreeNode<int> *root) {
	queue<BinaryTreeNode<int>*> q;
	if (root != NULL) {
		q.push(root);
	}

	long long int sum = 0;
	while (!q.empty()) {
		BinaryTreeNode<int>* p = q.front();
		q.pop();

		if (p->left != NULL) {
			q.push(p->left);
			sum = sum + p->left->data;
		}

		if (p->right != NULL) {
				q.push(p->right);
		}
    }
	
    return sum;
}



// Problem seven - HEIGHT OF A BINARY TREE
int getMaxHeight(TreeNode<int>* root) {
    if (root == NULL) {
        return 0;
    }

    int l = getMaxHeight(root->left);
    int r = getMaxHeight(root->right);
    return max(l, r) + 1;
}

int heightOfBinaryTree(TreeNode<int> *root) {
	getMaxHeight(root);
} 




// Problem four - Level Order Traversal
vector<int> getLevelOrder(BinaryTreeNode<int> *root) {
    vector<int> v;
    queue<BinaryTreeNode<int>*> q;

    if (root != NULL) {
		q.push(root);
	}
    
    while (!q.empty()) {
        BinaryTreeNode<int>* p = q.front();
        q.pop();
        v.push_back(p->val);

        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return v;
}
