#include <iostream>
#include <string>

using namespace std;

// Reference
int main() {
    string food = "pizza";
    string &meal = food;
    cout << meal << endl;

    return 0;
}


void text(string& s) {
	s = "Emirates";
}

int main() {
	string s = "Dubai";
	text(s);
	cout << s << endl;

	return 0;
}



void num(int* &p) {
	p = NULL;
}

int main() {
	int n = 100;
	int* p = &n;

	num(p);
	cout << p << endl;

	return 0;
}



void swap(int& x, int& y) {
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
}



void test(int*& p) {
	p = NULL;
}

int main() {
	int x = 10;
	int *p = &x;

	test(p);

	cout << *p << endl;

	return 0;
}





// insert at tail
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








// Handle error
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

		// If entered wrong position for insert
		if (temp == NULL) {
			cout << "Entered wrong position" << endl;
			return;
		}
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

		// If entered wrong position for delete
		if (temp == NULL) {
			cout << "Entered wrong position" << endl;
			return;
		}
	}

	// if enterted wrong position
	if (temp->next == NULL) {
		cout << "Entered wrong position" << endl;
		return;
	}

	Node* nodeDelete = temp->next; // Store delete node in another node
	temp->next = temp->next->next;
	delete nodeDelete;
}

// Delete head
void deleteHead(Node*& head) {
	// If head is not available
	if (head == NULL) {
		cout << "Head is not available" << endl;
	}

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








// Take linked list input
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

	// User input
	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, n);
	}

	printLinkedList(head);

	return 0;
}





// EXERCISE
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

void insertTail(Node*& head, int n) {
    Node* newNode = new Node(n);
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

void deleteTail(Node* head) {
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void listLength(Node* head) {
    Node* temp = head;
    int l = 0;
    while (temp != NULL) {
        l++;
        temp = temp->next;
    }
    cout << l << endl;
}

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
        cout << "Option 1: Insert tail" << endl;
        cout << "Option 2: Delete tail" << endl;
        cout << "Option 3: Show the list" << endl;
        cout << "Option 4: Show the list length" << endl;
        cout << "Option 5: Terminate" << endl;

        int o;
        cin >> o;
        if (o == 1) {
            int n;
            cout << "Enter item: ";
            cin >> n;
            insertTail(head, n);
        } else if (o == 2) {
            deleteTail(head);
        } else if (o == 3) {
            printList(head);
        } else if (o == 4) {
            listLength(head);
        } else if (o == 5) {
            break;
        }
    }

    return 0;
}
