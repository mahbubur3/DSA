#include <iostream>

using namespace std;

// Problem 1
class Node {
public:
	int num;
	Node* next;
	Node* prev;
	Node(int num) {
		this->num = num;
		this->next = NULL;
		this->prev = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
	Node* newNode = new Node(n);
	if (tail == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = tail->next;
}

int listLength(Node* head) {
	int len = 0;
	Node* temp = head;
	while (temp != NULL) {
		len++;
		temp = temp->next;
	}
	return len;
}

int listLength2(Node* head2) {
	int len = 0;
	Node* temp = head2;
	while (temp != NULL) {
		len++;
		temp = temp->next;
	}
	return len;
}

bool isSame = true;
void sameToSame(Node* head, Node* head2) {
	int size = listLength(head);
	int size2 = listLength2(head2);
	if (size != size2) {
		isSame = false;
		return;
	}
	
	Node* temp = head;
	Node* temp2 = head2;
	if (size == size2) {
		while (temp != NULL) {
			if (temp->num != temp2->num) {
				isSame = false;
				return;
			} else {
				temp = temp->next;
				temp2 = temp2->next;
			}
		}
	}
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;
	Node* head2 = NULL;
	Node* tail2 = NULL;

	int n, n2;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	while (true) {
		cin >> n2;
		if (n2 == -1) {
			break;
		}
		insertTail(head2, tail2, n2);
	}
	
	sameToSame(head, head2);
	if (isSame) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}







// Problem 2
class Node {
public:
	int num;
	Node* next;
	Node* prev;
	Node(int num) {
		this->num = num;
		this->next = NULL;
		this->prev = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
	Node* newNode = new Node(n);
	if (tail == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = tail->next;
}

void makeReverse(Node* head, Node* tail) {
	Node* i = head;
	Node* j = tail;
	while (i != j && i->next != j) {
		swap(i->num, j->num);
		i = i->next;
		j = j->prev;
	}
	swap(i->num, j->num);
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
	Node* tail = NULL;

	int n;
	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		insertTail(head, tail, n);
	}

	makeReverse(head, tail);
	printList(head);

	return 0;
}






// Problem 3
class Node {
public:
	int num;
	Node* next;
	Node* prev;
	Node(int num) {
		this->num = num;
		this->next = NULL;
		this->prev = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
	Node* newNode = new Node(n);
	if (tail == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = tail->next;
}

bool isPalindrome = true;
void palindrome(Node* head, Node* tail) {
	Node* i = head;
	Node* j = tail;
	while (i != j && i->next != j) {
		if (i->num != j->num) {
			isPalindrome = false;
			return;
		}
		i = i->next;
		j = j->prev;
	}

	if (i->num != j->num) {
		isPalindrome = false;
		return;
	}
	i = i->next;
	j = j->prev;
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

	palindrome(head, tail);
	if (isPalindrome) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}







// Problem 4
class Node {
public:
	int num;
	Node* next;
	Node* prev;
	Node(int num) {
		this->num = num;
		this->next = NULL;
		this->prev = NULL;
	}
};

void insertHead(Node*& head, Node*& tail, int v) {
	Node* newNode = new Node(v);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
}

void insertTail(Node*& head, Node*& tail, int v) {
	Node* newNode = new Node(v);
	if (tail == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = tail->next;
}

void insertPosition(Node* head, int x, int v) {
	Node* newNode = new Node(v);
	Node* temp = head;
	for (int i = 1; i <= x - 1; i++) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	newNode->next->prev = newNode;
	newNode->prev = temp;
}

int listLength(Node* head) {
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
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->next;
	}
	cout << endl;
}

void printListReverse(Node* tail) {
	Node* temp = tail;
	while (temp != NULL) {
		cout << temp->num << " ";
		temp = temp->prev;
	}
	cout << endl;
}

int main() {
	Node* head = NULL;
	Node* tail = NULL;

	int q;
	cin >> q;
	while (q--) {
		int x, v, flag = 1;
		cin >> x >> v;
		if (x > listLength(head)) {
            flag = 0;
		} else if (x == 0) {
			insertHead(head, tail, v);
		} else if (x == listLength(head)) {
			insertTail(head, tail, v);
		} else {
		    insertPosition(head, x, v);
		}
		
		if (flag == 0) {
		    cout << "invalid" << endl;
		} else {
		    printList(head);
	        printListReverse(tail);
		}
		
	}

	return 0;
}






// Problem 5
class Node {
public:
	int num;
	Node* next;
	Node* prev;
	Node(int num) {
		this->num = num;
		this->next = NULL;
		this->prev = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int v) {
	Node* newNode = new Node(v);
	if (tail == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = tail->next;
}

void sortList(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->num > j->num) {
                swap(i->num, j->num);
            }
        }
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

	int v;
	while (true) {
		cin >> v;
		if (v == -1) {
			break;
		}
		insertTail(head, tail, v);
	}
    
    sortList(head);
	printList(head);

	return 0;
}
