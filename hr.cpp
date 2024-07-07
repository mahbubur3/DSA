#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ASSIGNMENT 01
int main() {
    int n, q;
    cin >> n >> q;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i - 1];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        
        int sum;
        if (l == 0) {
            sum = pre[r] - 0;
        } else {
            sum = pre[r] - pre[l - 1];
        }
    }
    
    return 0;
}




// case one
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    bool isDuplicate = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            isDuplicate = true;
            break;
        }
    }
    
    if (isDuplicate == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;   
}



// Case 2
int main() {
    long long n;
    cin >> n;
    
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<long long> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }
    
    reverse(pre.begin(), pre.end());
    
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
    
    return 0;    
}



// Case three
int main() {
    int t;
    cin >> t;
    
    while (t--) {  
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        // int l = 0, r = n - 1;
        // int midIndex = (l + r) / 2;
        // while (l < r) {
        //     if ()
        // }
        // if (v[midIndex - 1] > v[midIndex]) {
        //     cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }
        
        bool isSorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                isSorted = false;
                break;
            }
        }
        
        if (isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}



// case four
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int x;
    cin >> x;
    
    a.insert(a.begin() + x, b.begin(), b.end());
    
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}



// Case five
// Tests matrix
int main() {
    int n;
    cin >> n;
    
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}


int main() {
    int n;
    cin >> n;
    
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j && i + j == n - 1) {
                cout << "X";
            } else if (i == j) {
                cout << "\\";
            } else if (i + j == n - 1) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}





// ASSIGNMENT 03
/ Problem 1
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
	tail->next = newNode;
	tail = newNode;
}

void findDifference(Node* head) {
	int mn = INT_MAX, mx = INT_MIN;
	Node* temp = head;
	while (temp != NULL) {
		if (temp->num < mn) {
			mn = temp->num;
		}
		if (temp->num > mx) {
			mx = temp->num;
		}
		temp = temp->next;
	}
	cout << mx - mn << endl;
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

	findDifference(head);

	return 0;
}






// Problem 2
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void searchItem(Node* head, int x) {
	bool isFound = false;
	int i = 0;
	Node* temp = head;
	while (temp != NULL) {
		if (temp->num == x) {
			isFound = true;
			break;
		}
		temp = temp->next;
		i++;
	}

	if (isFound) {
		cout << i << endl;
	} else {
		cout << -1 << endl;
	}
}

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
	tail->next = newNode;
	tail = newNode;
}

int main() {
	int q;
	cin >> q;
	while (q--) {
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

		int x;
		cin >> x;
		searchItem(head, x);
	}

	return 0;
}




// problem 3
class Node {
public:
	int num;
	Node* next;

	Node(int num) {
		this->num = num;
		this->next = NULL;
	}
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
	tail->next = newNode;
	tail = newNode;
}

void sameToSame(Node* head, Node* head2) {
    vector<int> v;
    Node* temp = head;
    while (temp != NULL) {
        v.push_back(temp->num);
        temp = temp->next;
    }

    vector<int> v2;
    Node* temp2 = head2;
    while (temp2 != NULL) {
        v2.push_back(temp2->num);
        temp2 = temp2->next;
    }

    if (v == v2) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int n;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        insertTail(head, tail, n);
    }

    int n2;
    while (true) {
        cin >> n2;
        if (n2 == -1) {
            break;
        }
        insertTail(head2, tail2, n2);
    }

    sameToSame(head, head2);

	return 0;
}



// Another way
class Node {
public:
    int num;
    Node* next;

    Node(int num) {
        this->num = num;
        this->next = NULL;
    }
};

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool isSame = true;
void sameToSame(Node* head, Node* head2) {
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }

    Node* temp2 = head2;
    int len2 = 0;
    while (temp2 != NULL) {
        len2++;
        temp2 = temp2->next;
    }

    if (len != len2) {
        isSame = false;
    }

    temp = head;
    temp2 = head2;
    while (temp != NULL && temp2 != NULL) {
        if (temp->num != temp2->num) {
            isSame = false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int n;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        insertTail(head, tail, n);
    }

    int n2;
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

void insertHead(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertTail(Node*& head, Node*& tail, int n) {
    Node* newNode = new Node(n);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void deleteItem(Node*& head, Node*& tail, int n) {
    if (head == NULL) {
        return;
    }

    if (n == 0) {
        Node* nodeDelete = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        delete nodeDelete;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < n - 1; i++) {
        if (temp->next == NULL) {
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL) {
        return;
    }

    Node* nodeDelete = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL) {
        tail = temp;
    }
    delete nodeDelete;
}

void deleteHead(Node*& head, Node*& tail) {
    if (head == NULL) {
        return;
    }

    Node* nodeDelete = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    }
    delete nodeDelete;
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

    int q;
    cin >> q;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insertHead(head, tail, v);
        } else if (x == 1) {
            insertTail(head, tail, v);
        } else if (x == 2) {
            deleteItem(head, tail, v);
        }
        printList(head);
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

void insertTail(Node*& head, Node*& tail, int n) {
	Node* newNode = new Node(n);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	tail = newNode;
}


void deleteDuplicate(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i; j->next != NULL; ) {
            if (i->num == j->next->num) {
                Node* deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            } else {
                j = j->next;
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
	
	deleteDuplicate(head);
	printList(head);
	
	return 0;
}
