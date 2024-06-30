#include <iostream>

using namespace std;

// Create linked list
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void printList(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next;
	}
}

int main() {
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	
	// Build connection
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;

	// Print the linked list
	printList(head);

	return 0;
}




// Operations
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertAnyPosition(Node* head, int p, int n) { // total function complexity o(n)
    Node* newNode = new Node(n);
    Node* temp = head;
    for (int i = 1; i < p - 1; i++) { // O(N)
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertHead(Node*& head, int n) { // o(1)
    Node* newNode = new Node(n);
    newNode->next = head;
    head = newNode;
}

int listLength(Node* head) { // o(n)
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void printList(Node* head) {
	Node* temp = head;
	while (temp != NULL) { // o(n)
		cout << temp->num << " ";
		temp = temp->next;
	}
}

int main() {
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	
	// Build connection
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	
	int p, n;
	cin >> p >> n;
	if (p > listLength(head)) {
	    cout << "Entered invalid index" << endl;
	} else {
	    if (p == 1) {
	        insertHead(head, n);
	    } else {
	        insertAnyPosition(head, p, n);
	    }
	    printList(head);
	}

	return 0;
}



// Delete recap
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void deleteItem(Node* head, int p) {
    Node* temp = head;
    for (int i = 1; i < p - 1; i++) {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void printList(Node* head) {
	Node* temp = head;
	while (temp != NULL) { // o(n)
		cout << temp->num << " ";
		temp = temp->next;
	}
}

int main() {
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	
	// Build connection
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;

    printList(head);
    int p;
    cin >> p;
    deleteItem(head, p);
    printList(head);
    
    return 0;
}




// New way to user input with complexity o(n)
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) { // O(1)
	Node* newNode = new Node(n);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	tail->next = newNode;
	tail = newNode;
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
	while (true) { // O(N)
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	printList(head);

	return 0;
}




// Print list recursively
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void printList(Node* n) {
	if (n == NULL) {
		return;
	}

	cout << n->num << " ";
	printList(n->next);
}

int main() {
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	
	// Build connection
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;

	printList(head);
    
    return 0;
}



// Print reverse using recursion
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void printListReverse(Node* n) {
	if (n == NULL) {
		return;
	}

	printList(n->next);
	cout << n->num << " ";
}

int main() {
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	
	// Build connection
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;

	printListReverse(head);
    
    return 0;
}





// Sort linked list
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

	for (Node* i = head; i->next != NULL; i = i->next) {
		for (Node* j = i->next; j != NULL; j = j->next) {
			// cout << i->num << " " << j->num << endl;
			if (i->num > j->num) { // Ascending order. for dscending use '<'
				swap(i->num, j->num);
			}
		}
	}

	printList(head);

	return 0;
}


