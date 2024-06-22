#include <iostream>

using namespace std;

// Create Node
class Node {
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
}


// Ruff
class Node {
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
}

