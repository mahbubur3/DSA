#include <iostream>
#include <string>

using namespace std;

// Reference
// int main() {
//     string food = "pizza";
//     string &meal = food;

//     cout << meal << endl;

//     return 0;
// }


/*void text(string& s) {
	s = "Emirates";
}

int main() {
	string s = "Dubai";
	text(s);
	cout << s << endl;

	return 0;
}*/


/*void num(int* &p) {
	p = NULL;
}

int main() {
	int n = 100;
	int* p = &n;

	num(p);
	cout << p << endl;

	return 0;
}*/


/* void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 100, b = 200;
	swap(a, b);
	cout << a << " " << b << endl;

	return 0;
} */

/*void test(int*& p) {
	p = NULL;
}

int main() {
	int x = 10;
	int *p = &x;

	test(p);

	cout << *p << endl;

	return 0;
}*/




// Insert number on tail
/* void insertAtTail(Node* &head, int n) {
	Node* newNode = new Node(n); // Create new node

	// If head is null
	if (head == NULL) {
		head = newNode;

		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	} // Now temp is in last node

	temp->next = newNode;
}

// Print linked list
void printList(Node* head) {
	Node* temp = head;

	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next; 
	}

	cout << endl;
}

int main() {
	Node* head = NULL;

	while (true) {
		cout << "Option 1: Insert at tail" << endl;
		cout << "Option 2: Print linked list" << endl;
		cout << "Option 3: Terminate" << endl;

		int option;
		cin >> option;
		if (option == 1) {
			cout << "Enter number: ";
			
			int n;
			cin >> n;

			insertNum(head, n);
		} else if (option == 2) {
			showList(head);
		} else if (option == 3) {
			break;
		}
	}

	return 0;
} */



// Insert at any position
/* class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertAtTail(Node* &head, int n) {
	Node* newNode = new Node(n); // Create new node

	// If head is null
	if (head == NULL) {
		head = newNode;
		cout << endl << "Inserted at head" << endl << endl;

		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	} // Now temp is in last node

	temp->next = newNode;
}

void insertAtAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n); // Create new node
	Node* temp = head;

	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	cout << endl << endl << "Inserted at position " << p << endl << endl;
}

void printList(Node* head) {
	cout << endl;
	cout << "Linked list: ";
	
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next;
	}

	cout << endl << endl;
}

int main() {
	Node* head = NULL;

	while (true) {
		cout << "Option 1: Insert at tail" << endl;
		cout << "Option 2: Print linked list" << endl;
		cout << "Option 3: Insert at any position" << endl;
		cout << "Option 4: Terminate" << endl;

		int option;
		cin >> option;
		if (option == 1) {
			cout << "Enter number: ";
			int n;
			cin >> n;

			insertAtTail(head, n);
		} else if (option == 2) {
			printList(head);
		} else if (option == 3) {
			int p, n;
			cout << "Enter position: ";
			cin >> p;

			cout << "Enter number: ";
			cin >> n;

			insertAtAnyPosition(head, p, n);
		} else if (option == 4) {
			break;
		}
	}

	return 0;
} */



// Insert at head - not complete
/* class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertAtTail(Node* &head, int n) {
	Node* newNode = new Node(n); // Create new node

	// If head is null
	if (head == NULL) {
		head = newNode;
		cout << endl << "Inserted at head" << endl << endl;

		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	} // Now temp is in last node

	temp->next = newNode;
}

void insertAtAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n); // Create new node
	Node* temp = head;

	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	cout << endl << endl << "Inserted at position " << p << endl << endl;
}

void insertAtHead(Node* &head, int n) {
	Node* newNode = new Node(n);
	newNode->next = head;
	head = newNode;

	cout << endl << "Inserted at head" << endl << endl;
}

void printList(Node* head) {
	cout << endl;
	cout << "Linked list: ";
	
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next;
	}

	cout << endl << endl;
}

int main() {
	Node* head = NULL;

	while (true) {
		cout << "Option 1: Insert at tail" << endl;
		cout << "Option 2: Print linked list" << endl;
		cout << "Option 3: Insert at any position" << endl;
		cout << "Option 4: Insert at head" << endl;
		cout << "Option 5: Terminate" << endl;

		int option;
		cin >> option;
		if (option == 1) {
			cout << "Enter number: ";
			int n;
			cin >> n;

			insertAtTail(head, n);
		} else if (option == 2) {
			printList(head);
		} else if (option == 3) {
			int p, n;
			cout << "Enter position: ";
			cin >> p;

			cout << "Enter number: ";
			cin >> n;

			if (p == 0) {
				insertAtHead(head, n);
			}

			insertAtAnyPosition(head, p, n);
		} else if (option == 4) {
			break;
		}
	}

	return 0;
} */



// Delete number from linked list
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertAtTail(Node* &head, int n) {
	Node* newNode = new Node(n); // Create new node

	// If head is null
	if (head == NULL) {
		head = newNode;
		cout << endl << "Inserted at head" << endl << endl;

		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	} // Now temp is in last node

	temp->next = newNode;
}

void insertAtAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n); // Create new node
	Node* temp = head;

	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	cout << endl << endl << "Inserted at position " << p << endl << endl;
}

void deleteItem(Node* head, int p) {
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	Node* deleteNode = temp->next;
	temp->next = temp->next->next;

	delete deleteNode;
}

// void insertAtHead(Node* &head, int n) {
// 	Node* newNode = new Node(n);
// 	newNode->next = head;
// 	head = newNode;

// 	cout << endl << "Inserted at head" << endl << endl;
// }

void printList(Node* head) {
	cout << endl;
	cout << "Linked list: ";
	
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next;
	}

	cout << endl << endl;
}

int main() {
	Node* head = NULL;

	while (true) {
		cout << "Option 1: Insert at tail" << endl;
		cout << "Option 2: Print linked list" << endl;
		cout << "Option 3: Insert at any position" << endl;
		cout << "Option 4: Insert at head" << endl;
		cout << "Option 5: Delete a position" << endl;
		cout << "Option 6: Terminate" << endl;

		int option;
		cin >> option;
		if (option == 1) {
			cout << "Enter number: ";
			int n;
			cin >> n;

			insertAtTail(head, n);
		} else if (option == 2) {
			printList(head);
		} else if (option == 3) {
			int p, n;
			cout << "Enter position: ";
			cin >> p;

			cout << "Enter number: ";
			cin >> n;

			// if (p == 0) {
			// 	insertAtHead(head, n);
			// }

			insertAtAnyPosition(head, p, n);
		} else if (option == 5) {
			cout << "Enter position: ";
			int p;
			cin >> p;
			deleteItem(head, p);
		} else if (option == 6) {
			break;
		}
	}

	return 0;
}
