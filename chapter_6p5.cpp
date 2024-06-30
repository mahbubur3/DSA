#include <iostream>

using namespace std;
// Problem 1
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertAtEnd(Node*& head, int n) {
	Node* newNode = new Node(n);
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
		insertAtEnd(head, n);
	}

	cout << listLength(head) << endl;

	return 0;
}



// Problem 2
// Using nested loop
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
	newNode->next = temp->next;
	temp->next = newNode;
}

bool isFound = false;
void checkDuplicates(Node* head) {
	for (Node* temp = head; temp != NULL; temp = temp->next) {
		for (Node* semp = temp->next; semp != NULL; semp = semp->next) {
			if (temp->num == semp->num) {
				isFound = true;
				return;
			}
		}
	}
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
	
	checkDuplicates(head);
	if (isFound) {
	    cout << "found" << endl;
	} else {
	    cout << "not found" << endl;
	}

	return 0;
}


// Using nested loop - use bool function
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
	newNode->next = temp->next;
	temp->next = newNode;
}

bool checkDuplicates(Node* head) {
	for (Node* temp = head; temp != NULL; temp = temp->next) {
		for (Node* semp = temp->next; semp != NULL; semp = semp->next) {
			if (temp->num == semp->num) {
				return true;
			}
		}
	}
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
	
	if (checkDuplicates(head)) {
	    cout << "found" << endl;
	} else {
	    cout << "not found" << endl;
	}

	return 0;
}




// using frequency array
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
	newNode->next = temp->next;
	temp->next = newNode;
}

bool checkDuplicate(Node* head) {
    int freq[101] = {0};
    
    Node* temp = head;
    while (temp != NULL) {
        freq[temp->num]++;
        temp = temp->next;
    }
    
    for (int i = 0; i < 101; i++) {
        if (freq[i] > 1) {
            return true;
        }
    }
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
	
	if(checkDuplicate(head)) {
	    cout << "found" << endl;
	} else {
	    cout << "not found" << endl;
	}

	return 0;
}





// Using frequency array - another way
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

int main() {
	Node* head = NULL;

	int freq[101] = {0};
	while (true) {
		int n;
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, n);
		freq[n]++;
	}

	bool isDuplicate = false;
	for (int i = 0; i < 101; i++) {
		if (freq[i] > 1) {
			isDuplicate = true;
			break;
		}
	}
	
	if (isDuplicate) {
		cout << "found" << endl;
	} else {
		cout << "not found" << endl;
	}

	return 0;
} 






// Problem 3
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

int listLength(Node* head) {
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void printMiddle(Node* head) {
	int len = listLength(head);
	int midIndex = len / 2;

	Node* temp = head;
	for (int i = 0; i < midIndex; i++) {
		temp = temp->next;
	}

	if (len % 2 == 0) {
		Node* firstMid = head;
		for (int i = 0; i < midIndex - 1; i++) {
			firstMid = firstMid->next;
		}
        cout << firstMid->num << " " << temp->num << endl;
    } else {
        cout << temp->num << endl;
    }
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

    printMiddle(head);

    return 0;
}




// Problem 4
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

int flag = 1;
void insertAnyPosition(Node* head, int p, int v) {
	Node* newNode = new Node(v);
	Node* temp = head;
	for (int i = 1; i <= p - 1; i++) {
		temp = temp->next;
		
		if (temp == NULL) {
		    flag = 0;
		    return;
		}
	}

	newNode->next = temp->next;
	temp->next = newNode;
}

void insertHead(Node*& head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
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

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, n);
	}
	
	int q;
	cin >> q;
	while (q--) {
	    flag = 1;
	    int p, v;
	    cin >> p >> v;
	    if (p == 0) {
	        insertHead(head, v);
	    } else {
	        insertAnyPosition(head, p, v);
	    }
	    
	    if (flag == 0) {
	        cout << "invalid" << endl;
	    } else {
	        printList(head);
	    }
	}

	return 0;
}





// Problem 5
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

bool isSorted = true;
void checkSorted(Node* head) {
	Node* temp = head;
	while (true) {
		if (temp == NULL || temp->next == NULL) {
            break;
        }
		
        if (temp->num > temp->next->num) {
            isSorted = false;
            break;
        }
        temp = temp->next;
	}
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
	
	checkSorted(head);
	if (isSorted) {
	    cout << "YES" << endl;
	} else {
	    cout << "NO" << endl;
	}

	return 0;
}
