#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

// Stack implementation using array (vector)
class myStack {
public:
	vector<int> v;
	void push(int val) {
		v.push_back(val);
	}
	void pop() {
		v.pop_back();
	}
	int top() {
		return v.back();
	}
	int length() {
		return v.size();
	}
	bool empty() {
		if (v.size() == 0) {
			return true;
		} else {
			return false;
		}
	}
};

int main() {
    // myStack st;
    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // st.pop();
    // if (st.empty() == false) { // if stack is empty
    //     cout << st.top() << endl;
    // }

    
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    

	return 0;
}





// Stack implementation using list
class myStack {
public:
	list<int> l;
	void push(int val) {
		l.push_back(val);
	}
	void pop() {
		l.pop_back();
	}
	int top() {
		return l.back();
	}
	int size() {
		return l.size();
	}
	bool empty() {
		if (l.size() == 0) {
			return true;
		} else {
			return false;
		}
	}
};

int main() {
	myStack st;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.push(x);
	}

	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}






// Stack implementation using linked list
class Node {
public:
	int val;
	Node* next;
	Node* prev;

	Node(int val) {
		this->val = val;
		this->next = NULL;
		this->prev = NULL;
	}
};

class myStack {
public:
	Node* head = NULL;
	Node* tail = NULL;
	int len = 0;

	void push(int val) {
		len++;
		Node* newNode = new Node(val);
		if (tail == NULL) {
			head = newNode;
			tail = newNode;
			return;
		}
		tail->next = newNode;
		newNode->prev = tail;
		tail = tail->next;
	}

	void pop() {
		len--;
		Node* deleteNode = tail;
		tail = tail->prev;
		if (tail == NULL) {
			head = NULL;
		} else {
			tail->next = NULL;
		}
		delete deleteNode;
	}

	int top() {
		return tail->val;
	}
	int size() {
		return len;
	}
	bool empty() {
		if (len == 0) {
			return true;
		} else {
			return false;
		}
	}
};

int main() {
	myStack st;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.push(x);
	}

	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}





// Stack implementation using stack STL
int main() {
	// stack<int> st;
	// st.push(100);
	// st.push(200);
	// cout << st.top() << endl;


	stack<int> st; // implementation done
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.push(x);
	}

	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}
