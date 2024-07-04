#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

// LIST BUILT-IN FUNCTIONS
int main() {
	// Initialization
	list<int> myList(5, 2);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << " ";
	}


	// list<int> l = {1, 2, 3, 4, 5};
	list<int> myList(l);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		cout << *it << endl;
	}


	// Using array
	int a[5] = {10, 20, 30, 40, 50};
	list<int> l(a, a + 5);
	for (auto it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}


	// Using vector
	vector<int> v = {10, 20, 30, 40, 50};
	list<int> l(v.begin(), v.end());
	// for (auto it = l.begin(); it != l.end(); it++) {
	// 	cout << *it << " ";
	// }
	for (int i : l) {
		cout << i << " ";
	}


	return 0;
}



// Capacity functions
int main() {
	list<int> l = {10, 20, 30};
	l.resize(2);
	// l.resize(5); // default set 0
	l.resize(5, 10); // 10 set remaining position
	for (int i : l) {
		cout << i << " ";
	}

	return 0;
}



// Modifiers functions
int main() {
	// Assign to another list
	list<int> oldList = {100, 200, 300};
	list<int> newList;
	newList = oldList;
	for (int i : newList) {
		cout << i << " ";
	}



	// Insert tail
	list<int> l = {10, 20, 30};
	l.push_back(100);
	for (int i : l) {
		cout << i << " ";
	}

	// Insert head
	list<int> l = {10, 20, 30};
	l.push_front(100);
	for (int i : l) {
		cout << i << " ";
	}

	// Delete tail
	list<int> l = {10, 20, 30};
	l.pop_back();
	for (int i : l) {
		cout << i << " ";
	}

	// Delete head
	list<int> l = {10, 20, 30};
	l.pop_front();
	for (int i : l) {
		cout << i << " ";
	}



	// Insert any position
	list<int> l = {10, 20, 30, 40};
	l.insert(next(l.begin(), 1), 100); // O(N) cause next use loop. if use invalid index this will loop back.
	for (int i : l) {
		cout << i << " ";
	}

	list<int> l = {10, 20, 30, 40};
	l.insert(next(l.begin(), 2), {100, 200, 300}); // Multiple insert
	for (int i : l) {
		cout << i << " ";
	}

	// Insert another list
	list<int> l = {10, 20, 30};
	list<int> l2 = {500, 800};
	l.insert(next(l.begin(), 1), l2.begin(), l2.end());
	for (int i : l) {
		cout << i << " ";
	}

	// Delete any position
	list<int> l = {10, 20, 30};
	l.erase(next(l.begin(), 1));
	for (int i : l) {
		cout << i << " ";
	}

	// Delete multiple
	list<int> l = {10, 20, 30, 40, 50, 60};
	l.erase(next(l.begin(), 1), next(l.begin(), 4));
	for (int i : l) {
		cout << i << " ";
	}



	// Replace
	list<int> l = {10, 20, 30, 40, 50, 10, 60};
	replace(l.begin(), l.end(), 10, 1000);
	for (int i : l) {
		cout << i << " ";
	}



	// Find
	list<int> l = {10, 20, 30, 40, 50, 60};
	auto it = find(l.begin(), l.end(), 90);
	// cout << *it << endl;
	if (it == l.end()) {
		cout << "Not found" << endl;
	} else {
		cout << "Found" << endl;
	}

	return 0;
}



// Operation functions
int main() {
	list<int> l = {10, 20, 30, 10, 40, 10, 50};
	l.remove(10); // Remove all 10
	l.sort(); // Sort ascending
	l.sort(greater<int>()); // Sort dscending
	for (int i : l) {
		cout << i << " ";
	}


	// Remove duplicate using unique(). do not work if list is not sorted
	list<int> l = {20, 10, 50, 20, 30, 10, 40, 10};
	l.sort(); // work also dscending order
	l.unique();
	for (int i : l) {
		cout << i << " ";
	}


	// Reverse list
	list<int> l = {20, 10, 50, 20};
	l.reverse();
	for (int i : l) {
		cout << i << " ";
	}

	return 0;
}


// Element access
int main() {
	list<int> l = {10, 20, 30, 40, 50};
	// cout << l.front(); // First element
	// cout << l.back(); // Last element
	cout << *next(l.begin(), 2) << endl; // next will return iterator so we need to dereference

	return 0;
}




// Reverse singly linked list (recursively)
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void makeReverse(Node*& head, Node* current) {
	if (current->next == NULL) {
		head = current;
		return;
	}
	makeReverse(head, current->next);
	current->next->next = current;
	current->next = NULL;
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
	Node* head = new Node(1);
	Node* a = new Node(2);
	Node* b = new Node(3);
	Node* c = new Node(4);
	Node* d = new Node(5);
	
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;

	makeReverse(head, head);
	printList(head);
    
    return 0;
}





// Reverse doubly linked list (Two pointers)
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

void makeReverse(Node* head, Node* tail) {
	Node* i = head;
	Node* j = tail;
	while (i != j && i->next != j) {
		swap(i->num, j->num);
		i = i->next;
		j = j->prev;
	}
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;
    
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    makeReverse(head, tail);
    printList(head);

    return 0;
}




// Cycle detect - singly linked list
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

	head->next = a;
	a->next = b;
	b->next = c;
	// c->next = head;
	c->next = NULL; // is c->next null then

	Node* slow = head;
	Node* fast = head;
	bool isDetected = false;
	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow) {
			isDetected = true;
			break;
		}
	}

	if (isDetected) {
		cout << "Cycle detected" << endl;
	} else {
		cout << "Not detected" << endl;
	}

	return 0;
}
