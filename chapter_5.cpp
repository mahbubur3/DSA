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
	cout << (*a.next).num << endl; // OR
	// cout << a.next->num << endl;

	return 0;
}


// Ruff - create node
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
	c.next = NULL;

	cout << a.num << endl;
	cout << a.next->num << endl;
	cout << a.next->next->num << endl;

	return 0;
}


// Constructor
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
	Node a(200);
	Node b(500);

	a.next = &b;

	cout << a.num << endl;
	cout << a.next->num << endl;

	return 0;
}



// Create dynamic node
class Node {
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
}


// Ruff
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
	Node* head = new Node(20);
	Node* a = new Node(50);

	head->next = a;

	cout << head->num << endl;
	cout << head->next->num << endl;

	return 0;
}


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


// Dynamic object node with printing singly linked list 
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
    Node* head = new Node(40);
    Node* b = new Node(80);
    Node* c = new Node(70);
    Node* d = new Node(20);
    
    head->next = b;
    b->next = c;
    c->next = d;
    
    // cout << head->num << endl;
    // cout << head->next->num << endl;
    // cout << head->next->next->num << endl;
    
    // we cannot print this list in second time. cause head is null, so we need temp
    // while (head != NULL) {
    //     cout << head->num << endl;
    //     head = head->next;
    // }
    
    Node* temp = head;
    while (temp != NULL) {
        cout << temp-> num << endl;
        temp = temp->next;
    }
    
    // temp = head; // if we need to print second time
    // while (temp != NULL) {
    //     cout << temp-> num << endl;
    //     temp = temp->next;
    // }
    
    return 0;
}


// RECAP
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
    Node head(100);
    Node b(200);
    Node c(300);
    Node d(400);
    
    head.next = &b;
    b.next = &c;
    c.next = &d;
    
    cout << head.num << endl;
    cout << head.next->num << endl;
    cout << head.next->next->num << endl;
    cout << head.next->next->next->num << endl;

    return 0;
}

// Dynamic object node
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
    Node* head = new Node(400);
    Node* b = new Node(800);
    Node* c = new Node(700);
    
    head->next = b; // cause head is pointer
    b->next = c; // b is also pointer & c is also
    
    
    cout << head->num << endl;
    cout << head->next->num << endl;
    cout << head->next->next->num << endl;
    
    return 0;
}



/* EXERCISE */
// number f
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
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* e = new Node(60);

	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;

	int sum = 0;
	Node* temp = head;
	while (temp->num != 50) {
		sum = sum + temp->num;
		temp = temp->next;
	}

	cout << sum << endl;

	return 0;
}
