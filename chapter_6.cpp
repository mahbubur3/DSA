#include <iostream>

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
void insertAtTail(Node* &head, int n) {
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


//////////////////////////////////////////////////////////////////////////////////////////////////////////
// insert at tail recap
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Print
void printLinkedList(Node* head) {
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

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
            break;
        }
    }

    return 0;
}







// insert at any position except head
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert at tail
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Insert at any position
void insertAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next; // Move temp to p
	}

	newNode->next = temp->next; // connect new node to next node
	temp->next = newNode; // connect new node to previous node
}

// Print list
void printLinkedList(Node* head) {
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
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	int n;
        	cout << "Enter item: ";
        	cin >> n;
        	insertAnyPosition(head, p, n);
        } else if (o == 4) {
            break;
        }
    }

    return 0;
}






// insert at any position with head
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert at tail
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Insert at any position
void insertAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next; // Move temp to p
	}

	newNode->next = temp->next; // connect new node to next node
	temp->next = newNode; // connect new node to previous node
}

// Insert at head
void insertHead(Node*& head, int n) {
	Node* newNode = new Node(n);
	newNode->next = head; // make new node as head
	head = newNode; // now head is new node
}

// Print list
void printLinkedList(Node* head) {
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
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	int n;
        	cout << "Enter item: ";
        	cin >> n;
        	if (p == 0) { // If insert item in head
        		insertHead(head, n);
        	} else {
        		insertAnyPosition(head, p, n);
        	}
        } else if (o == 4) {
            break;
        }
    }

    return 0;
}







// insert at any position with head - with option 
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert at tail
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Insert at any position
void insertAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next; // Move temp to p
	}

	newNode->next = temp->next; // connect new node to next node
	temp->next = newNode; // connect new node to previous node
}

// Insert at head
void insertHead(Node*& head, int n) {
	Node* newNode = new Node(n);
	newNode->next = head; // make new node as head
	head = newNode; // now head is new node
}

// Print list
void printLinkedList(Node* head) {
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
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Terminate" << endl;

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	int n;
        	cout << "Enter item: ";
        	cin >> n;
        	if (p == 0) { // If insert item in head
        		insertHead(head, n);
        	} else {
        		insertAnyPosition(head, p, n);
        	}
      	} else if (o == 4) {
      	    int n;
      	    cout << "Enter item: ";
      	    cin >> n;
      		insertHead(head, n);
      	} else if (o == 5) {
            break;
        }
    }

    return 0;
}








// delete item from list except head
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert at tail
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Insert at any position
void insertAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next; // Move temp to p
	}

	newNode->next = temp->next; // connect new node to next node
	temp->next = newNode; // connect new node to previous node
}

// Insert at head
void insertHead(Node*& head, int n) {
	Node* newNode = new Node(n);
	newNode->next = head; // make new node as head
	head = newNode; // now head is new node
}

// Delete a node
void deleteItem(Node* head, int p) {
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	Node* nodeDelete = temp->next;
	temp->next = temp->next->next;
	delete nodeDelete;
}

// Print list
void printLinkedList(Node* head) {
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
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Delete item" << endl;
        cout << "Option 5: Terminate" << endl;

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	int n;
        	cout << "Enter item: ";
        	cin >> n;
        	if (p == 0) { // If insert item in head
        		insertHead(head, n);
        	} else {
        		insertAnyPosition(head, p, n);
        	}
        } else if (o == 4) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	deleteItem(head, p);
        } else if (o == 5) {
            break;
        }
    }

    return 0;
}









// delete item from list with head
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert at tail
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Insert at any position
void insertAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next; // Move temp to p
	}

	newNode->next = temp->next; // connect new node to next node
	temp->next = newNode; // connect new node to previous node
}

// Insert at head
void insertHead(Node*& head, int n) {
	Node* newNode = new Node(n);
	newNode->next = head; // make new node as head
	head = newNode; // now head is new node
}

// Delete a node
void deleteItem(Node* head, int p) {
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	Node* nodeDelete = temp->next; // Store delete node in another node
	temp->next = temp->next->next;
	delete nodeDelete;
}

// Delete head
void deleteHead(Node*& head) {
	Node* nodeDelete = head; // Store delete node in another node
	head = head->next; // Set head
	delete nodeDelete;
}

// Print list
void printLinkedList(Node* head) {
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
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Delete item" << endl;
        cout << "Option 5: Terminate" << endl;

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	int n;
        	cout << "Enter item: ";
        	cin >> n;
        	if (p == 0) { // If insert item in head
        		insertHead(head, n);
        	} else {
        		insertAnyPosition(head, p, n);
        	}
        } else if (o == 4) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	if (p == 0) {
        		deleteHead(head);
        	} else {
        		deleteItem(head, p);
        	}
        } else if (o == 5) {
            break;
        }
    }

    return 0;
}










// delete item from list with head - with option
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

// Insert at tail
void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) { // Linked list is empty
        head = newNode; // Set new node is head or first number
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Now head in last
    }

    temp->next = newNode; // Set new node at last
}

// Insert at any position
void insertAnyPosition(Node* head, int p, int n) {
	Node* newNode = new Node(n);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next; // Move temp to p
	}

	newNode->next = temp->next; // connect new node to next node
	temp->next = newNode; // connect new node to previous node
}

// Insert at head
void insertHead(Node*& head, int n) {
	Node* newNode = new Node(n);
	newNode->next = head; // make new node as head
	head = newNode; // now head is new node
}

// Delete a node
void deleteItem(Node* head, int p) {
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
	}

	Node* nodeDelete = temp->next; // Store delete node in another node
	temp->next = temp->next->next;
	delete nodeDelete;
}

// Delete head
void deleteHead(Node*& head) {
	Node* nodeDelete = head; // Store delete node in another node
	head = head->next; // Set head
	delete nodeDelete;
}

// Print list
void printLinkedList(Node* head) {
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
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Delete item" << endl;
        cout << "Option 6: Delete head" << endl;
        cout << "Option 7: Terminate" << endl;

        int o;
        cin >> o;

        if (o == 1) {
            cout << "Enter item: ";
            int n;
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            printLinkedList(head);
        } else if (o == 3) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	int n;
        	cout << "Enter item: ";
        	cin >> n;
        	if (p == 0) { // If insert item in head
        		insertHead(head, n);
        	} else {
        		insertAnyPosition(head, p, n);
        	}
        } else if (o == 4) {
      	    int n;
      	    cout << "Enter item: ";
      	    cin >> n;
      		insertHead(head, n);
		} else if (o == 5) {
        	int p;
        	cout << "Enter position: ";
        	cin >> p;
        	if (p == 0) {
        		deleteHead(head);
        	} else {
        		deleteItem(head, p);
        	}
        } else if (o == 6) {
        	deleteHead(head);
        } else if (o == 7) {
            break;
        }
    }

    return 0;
}
