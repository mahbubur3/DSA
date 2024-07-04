#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

// Find minimum and maximum
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void minMax(Node* head) {
	int mn = INT_MAX, mx = INT_MIN;

	Node* temp = head;
	while (temp != NULL) {
		if (temp->num < mn) {
			mn = temp->num;
		}
		if (temp->num > mx) {
			mx = temp->num;
		}
		temp = temp->next;
	}
	cout << mn << " " << mx << endl;
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	minMax(head);

	return 0;
}



// Count even or odd number
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void countEvenOdd(Node* head) {
	int even = 0, odd = 0;

	Node* temp = head;
	while (temp != NULL) {
		if (temp->num % 2 == 0) {
			even++;
		} else {
			odd++;
		}
		temp = temp->next;
	}

	cout << even << " " << odd << endl;
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	countEvenOdd(head);

	return 0;
}






// Search item in linked list
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void searchItem(Node* head, int x) {
	bool isFound = false;

	Node* temp = head;
	while (temp != NULL) {
		if (temp->num == x) {
			isFound = true;
			break;
		}
		temp = temp->next;
	}

	if (isFound) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	int x;
	cin >> x;
	searchItem(head, x);

	return 0;
}






// Check palindrome or not
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void checkPalindrome(Node* head) {
	vector<int> v;
	Node* temp = head;
	while (temp != NULL) {
		v.push_back(temp->num);
		temp = temp->next;
	}

	vector<int> v2;
	v2 = v;
	reverse(v2.begin(), v2.end());
	if (v == v2) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	checkPalindrome(head);

	return 0;
}





// Delete specific item
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void deleteItem(Node*& head, int x) {
	if (head->num == x) {
		Node* deleteNode = head;
		head = head->next;
		delete deleteNode;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		if (temp->next->num == x) {
			Node* deleteNode = temp->next;
			temp->next = temp->next->next;
			delete deleteNode;
			break;
		}
		temp = temp->next;
	}
}

void printList(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next;
	}
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	int x;
	cin >> x;
	deleteItem(head, x);
	printList(head);

	return 0;
}
