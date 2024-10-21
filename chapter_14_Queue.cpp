#include <iostream>
#include <list>
#include <queue>

using namespace std;

// Queue using singly linked list
class Node {
public:
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		this->next = NULL;
	}
};

class queueOperation {
public:
	Node* head = NULL;
	Node* tail = NULL;

	int len = 0;

	void push(int val) { // value push in last
		len++;
		Node* newNode = new Node(val);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
			return;
		}
		tail->next = newNode;
		tail = tail->next;
	}

	void pop() { // value pop in first cause FIFO
		len--;
		Node* deleteNode = head;
		head = head->next;
		delete deleteNode;
		if (head == NULL) {
			tail = NULL;
		}
	}

	int front() {
		return head->val;
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
	queueOperation q;
	
	// q.push(100);
	// q.push(200);
	// q.pop();
	// cout << q.front() << endl;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}






// Queue using doubly linked list
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

class queueOperation {
public:
	Node* head = NULL;
	Node* tail = NULL;

	int len = 0;

	void push(int val) {
		len++;
		Node* newNode = new Node(val);
		if (head == NULL) {
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
		Node* deleteNode = head;
		head = head->next;
		if (head == NULL) {
			tail = NULL;
			delete deleteNode;
			return;
		}
		head->prev = NULL;
		delete deleteNode;
	}

	int front() {
		return head->val;
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
	queueOperation q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}



// Queue implementation using stl - list
class queueOperation {
public:
	list<int> l;
	void push(int val) {
		l.push_back(val);
	}
	void pop() {
		l.pop_front();
	}
	int front() {
		return l.front();
	}
	int size() {
		return l.size();
	}
	bool empty() {
		return l.empty();
	}
};

int main() {
	queueOperation q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}





// Queue implementation using queue stl
int main() {
	queue<int> q; // implementation done

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}





// 225. Implement stack using queues
class MyStack {
public:
	queue<int> q;

	MyStack() {

	}

	void push(int x) {
		q.push(x);
	}

	int pop() {
		queue<int> newQ;
		
		int last;
		while (!q.empty()) {
			int k = q.front();
			q.pop();
			if (q.empty()) {
				last = k;
				break;
			}
			newQ.push(k);
		}
		q = newQ;
		return last;
	}

	int top() {
		queue<int> newQ;
		
		int last;
		while (!q.empty()) {
			int k = q.front();
			q.pop();
			if (q.empty()) {
				last = k;
			}
			newQ.push(k);
		}
		q = newQ;
		return last;
	}

	bool empty() {
		return q.empty();
	}
};



// 232. Implement queue using stacks
class MyQueue {
public:
    stack<int> s;

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> s2;
        int last;
        while (!s.empty()) {
            int k = s.top();
            s.pop();
            if (s.empty()) {
                last = k;
                break;
            }
            s2.push(k);
        }
        while (!s2.empty()) {
            s.push(s2.top());
            s2.pop();
        }
        return last;
    }
    
    int peek() {
        stack<int> s2;
        int last;
        while (!s.empty()) {
            int k = s.top();
            s.pop();
            if (s.empty()) {
                last = k;
            }
            s2.push(k);
        }
        while (!s2.empty()) {
            s.push(s2.top());
            s2.pop();
        }
        return last;
    }
    
    bool empty() {
        return s.empty();
    }
};
