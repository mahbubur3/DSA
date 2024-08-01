// Problem one: Implement Stack With Linked List (singly)
class Stack {
    //Write your code here

public:
    Node* head = NULL;
    Node* tail = NULL;
    int len = 0;

    Stack() {
        //Write your code here
    }

    int getSize() {
        return len;
    }

    bool isEmpty() {
        if (len == 0) {
			return true;
		} else {
			return false;
		}
    }

    void push(int data) {
        len++;
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (isEmpty()) {
            return;
        }
        len--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int getTop() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }
};





// Problem two: Implement a Queue
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
public:
    Node* head = NULL;
	Node* tail = NULL;
	int len = 0;

    Queue() {
        // Implement the Constructor
    }

    bool isEmpty() {
        if (len == 0) {
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int data) {
        len++;
		Node* newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
			return;
		}
		tail->next = newNode;
		tail = tail->next;
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }

		Node* deleteNode = head;
        int val = deleteNode->data;
		head = head->next;
        
        if (head == NULL) {
			tail = NULL;
		}
		delete deleteNode;
        len--;
        return val;
    }

    int front() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }
};




// Problem three: Reverse First K elements of Queue
queue<int> reverseElements(queue<int> q, int k) {
    stack<int> s;
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while (!s.empty()) {
        q2.push(s.top());
        s.pop();
    }
    
    while (!q.empty()) {
        q2.push(q.front());
        q.pop();
    }

    return q2;
}




// Problem four: Min Stack
class minStack {
public:
	stack<int> s, m;
	
	minStack() {
		
	}
	
	void push(int num) {
		if (s.empty()) {
			s.push(num);
			m.push(num);
			return;
		}
		int minVal = min(num, m.top());
		m.push(minVal);
		s.push(num);
	}
	
	int pop() {
		if (s.empty()) {
			return -1;
		} else {
			int topElement = s.top();
			s.pop();
			m.pop();
			return topElement;
		}
	}
	
	int top() {
		if (s.empty()) {
			return -1;
		} else {
			return s.top();
		}
	}

	int getMin() {
		if (m.empty()) {
			return -1;
		} else {
			return m.top();
		}
	}
};




// Problem five: Kevin’s stack problem
string kevinStackProblem(string &s) {
	stack<char> st;
	for (char c : s) {
		st.push(c);
	}

	string s2 = "";
	while (!st.empty()) {
		s2 += st.top();
		st.pop();
	}

	return s2;
}
