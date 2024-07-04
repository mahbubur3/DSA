#include <iostream>

using namespace std;

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
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    
    // track tail
    Node* tail = c;
    
    // Built connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    printList(head);
    printListReverse(tail);

    return 0;
}




// Doubly linked list insert operations
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

void insertAnyPosition(Node* head, int p, int v) {
    Node* newNode = new Node(v);
    Node* temp = head;
    for (int i = 1; i <= p - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

void insertHead(Node*& head, Node*& tail, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) { // If head is empty [Corner case]
        head = newNode; // set newNode as head
        tail = newNode; // set newNode as tail
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertTail(Node*& head, Node*& tail, int v) {
    Node* newNode = new Node(v);
    if (tail == NULL) { // if tail is empty
        head = newNode; // set newNode as head
        tail = newNode; // set newNode as tail
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
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c; // Track tail
    
    // Built connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int p, v;
    cin >> p >> v;
    if (p > listLength(head)) {
        cout << "invalid index" << endl;
    } else if (p == 0) {
        insertHead(head, tail, v);
    } else if (p == listLength(head)) {
        insertTail(head, tail, v);
    } else {
        insertAnyPosition(head, p, v);
    }

    printList(head);
    printListReverse(tail);

    return 0;
}






// Doubly linked list delete operations
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

void deleteItem(Node* head, int p) {
    Node* temp = head;
    for (int i = 1; i <= p - 1; i++) {
        temp = temp->next;
    }
    Node* nodeDelete = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete nodeDelete;
}

void deleteTail(Node*& tail) {
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

void deleteHead(Node*& head) {
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
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
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c; // Track tail
    
    // Built connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int p;
    cin >> p;
    if (p >= listLength(head)) {
        cout << "invalid" << endl;
    } else if (p == 0) {
        deleteHead(head);
    } else if (p == listLength(head) - 1) {
        deleteTail(tail);
    } else {
        deleteItem(head, p);
    }

    printList(head);
    printListReverse(tail);

    return 0;
} 







// user input
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
    printList(head);
    printListReverse(tail);

    return 0;
}
