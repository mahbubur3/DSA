#include <iostream>

using namespace std;

// Create Node
/*class Node {
	public:
		int num;
		Node* next;
};

int main() {
	Node a, b;

	a.num = 20;
	b.num = 40;
	a.next = &b;
	b.next = NULL;

	cout << a.num << endl;
	// cout << (*a.next).num << endl; // OR
	cout << a.next->num << endl;

	return 0;
}*/


// Ruff
/*class Node {
	public:
		int num;
		Node* next;
};

int main() {
	Node a, b, c;

	a.num = 200;
	b.num = 500;
	c.num = 900;

	a.next = &b;
	b.next = &c;

	cout << a.num << endl;
	cout << a.next->num << endl;
	cout << b.next->num << endl;

	return 0;
}*/


// Constructor
/* class Node {
	public:
		int num;
		Node* next;

		Node(int num) {
			this->num = num;
			this->next = NULL;
		}
};

int main() {
	Node a(200);
	Node b(500);

	a.next = &b;

	cout << a.num << endl;
	cout << a.next->num << endl;

	return 0;
} */



// Create dynamic node
/* class Node {
public:
	int number;
	Node* next;

	Node(int number) {
		this->number = number;
		this->next = NULL;
	}
};

int main() {
	Node* head = new Node(100); // Now head is pointer
	Node* a = new Node(50);

	head->next = a;

	cout << head->number << endl;
	cout << a->number << endl;
	cout << head->next->number << endl; // If i access a pointer value using head
	// OR
	cout << (*(*head).next).number << endl;

	return 0;
} */


// Ruff
/*class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

int main() {
	Node* head = new Node(20);
	Node* a = new Node(50);

	head->next = a;

	cout << head->num << endl;
	cout << head->next->num << endl;

	return 0;
}*/


class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

int main() {
	// Normal node
	// Node head(50);
	// Node b(80);

	// head.next = &b;

	// cout << head.num << endl;
	// cout << head.next->num << endl;

	// Dynamic node
	Node* head = new Node(100);
	Node* b = new Node(500);

	head->next = b;

	cout << head->num << endl;
	cout << head->next->num << endl;

	return 0;
}
