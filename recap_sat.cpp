#include <iostream>

using namespace std;

class Node {
public:
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		this->next = NULL;
	}
};

void printList(Node* head) {
	while (head != NULL) {
		cout << head->val << endl;
		head = head->next;
	}
}

int main() {
	Node* head = new Node(100);
	Node* a = new Node(200);
	Node* b = new Node(300);

	head->next = a;
	a->next = b;
	
	printList(head);

	return 0;
}





// Operataions
class Node {
public:
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		this->next = NULL;
	}
};

void insertTail(Node*& head, int val) {
	Node* newNode = new Node(val);
	if (head == NULL) {
		head = newNode;
		return;
	}
	
	Node* temp = head;
	while (temp->next != NULL) {
	    temp = temp->next;
	}
	temp->next = newNode;
}

void insertHead(Node*& head, int val) {
	Node* newNode = new Node(val);
	if (head == NULL) {
		head = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
}

void insertAnyPosition(Node*& head, int pos, int val) {
	if (pos == 0) {
		insertHead(head, val);
	}

	Node* newNode = new Node(val);
	Node* temp = head;
	for (int i = 0; i < pos - 1; i++) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

void deleteItem(Node* head, int pos) {
	Node* temp = head;
	for (int i = 0; i < p - 1; i++) {
		temp = temp->next;
	}
	Node* deleteNode = temp->next;
	temp->next = temp->next->next;
	delete nodeDelete;
}

void deleteHead(Node*& head) {
	Node* nodeDelete = head;
	head = head->next;
	delete nodeDelete;
}

void printList(Node* head) {
	while (head != NULL) {
		cout << head->val << endl;
		head = head->next;
	}
}

int main() {
	Node* head = NULL;

	while (true) {
		int n;
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, n);
	}
	
	printList(head);

	return 0;
}



// Problem one
class Node {
public:
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		this->next = NULL;
	}
};

void insertTail(Node*& head, int val) {
	Node* newNode = new Node(val);
	
	if (head == NULL) {
		head = newNode;
		return;
	}
	
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

int listLength(Node* head) {
	int l = 0;
	Node* temp = head;
	while (temp != NULL) {
		l++;
		temp = temp->next;
	}
	return l;
}

int main() {
	Node* head = NULL;
	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, n);
	}
	cout << listLength(head) << endl;

	return 0;
}
