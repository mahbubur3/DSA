// Problem one
class Solution {
public:
    bool checkTree(TreeNode* root) {
        if (root->left->val + root->right->val == root->val) {
            return true;
        } else {
            return false;
        }
    }
};




// Problem two
bool check(TreeNode* root, int x) {
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()) {
		TreeNode* p = q.front();
		q.pop();
		
		if (p->val != x) {
            return false;
        }
		
		if (p->left) {
			q.push(p->left);
		}
		if (p->right) {
			q.push(p->right);
		}
	}
    return true;
}

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int x = root->val;
        return check(root, x);
    }
};





// Problem three
class Solution {
public:
	void operationWithPreOrder(TreeNode* root, vector<int>& v) {
		if (root == NULL) {
			return;
		}

		if (root->left == NULL && root->right == NULL) {
		    v.push_back(root->val);
		}

		operationWithPreOrder(root->left, v);
		operationWithPreOrder(root->right, v);
	}
	
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        operationWithPreOrder(root1, v1);
        operationWithPreOrder(root2, v2);
		return v1 == v2;
        //OR
        // if (v1 == v2) {
        //     return true;
        // } else {
        //     return false;
        // }
    }
};
