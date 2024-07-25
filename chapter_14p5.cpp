#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

// Problem 1
class MyStack {
public:
	vector<int> v;

	void push(int val) {
		v.push_back(val);
	}

	void pop() {
		v.pop_back();
	}

	int top() {
		return v.back();
	}

	int length() {
		return v.size();
	}

	bool empty() {
		if (v.size() == 0) {
			return true;
		} else {
			return false;
		}
	}
};

int main() {
	MyStack s1, s2;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s1.push(x);
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		s2.push(x);
	}

	bool isSame = true;
	if (s1.length() == s2.length()) {
		while (!s1.empty()) {
			if (s1.top() != s2.top()) {
				isSame = false;
				break;
			} else {
				s1.pop();
				s2.pop();
			}
		}
	} else {
		isSame = false;
	}
	
	if (isSame) {
	    cout << "YES" << endl;
	} else {
	    cout << "NO" << endl;
	}

	return 0;
}



// USING STACK STL
int main() {
	stack<int> s1;
	stack<int> s2;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s1.push(x);
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		s2.push(x);
	}

	bool isSame = true;
	if (s1.length() == s2.length()) {
		while (!s1.empty()) {
			if (s1.top() != s2.top()) {
				isSame = false;
				break;
			} else {
				s1.pop();
				s2.pop();
			}
		}
	} else {
		isSame = false;
	}
	
	if (isSame) {
	    cout << "YES" << endl;
	} else {
	    cout << "NO" << endl;
	}

	return 0;
}







// Problem 2
int main() {
	stack<int> s;
	queue<int> q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.push(x);
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

    bool isSame = true;
    if (s.size() == q.size()) {
        while (!s.empty()) {
            if (s.top() != q.front()) {
                isSame = false;
                break;
            } else {
                s.pop();
                q.pop();
            }
        }
    } else {
        isSame = false;
    }
    
    if (isSame) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 

	return 0;
}







// Problem 3
int main() {
	stack<int> s;
	stack<int> s2;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.push(x);
	}

	while (!s.empty()) {
		s2.push(s.top());
		s.pop();
	}

	while (!s2.empty()) {
		cout << s2.top() << " ";
		s2.pop();
	}

	return 0;
}





// Problem 4
int main() {
	queue<int> q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	stack<int> s;

	while (!q.empty()) {
		s.push(q.front());
		q.pop();
	}

	queue<int> q2;

	while (!s.empty()) {
		q2.push(s.top());
		s.pop();
	}

	while (!q2.empty()) {
		cout << q2.front() << " ";
		q2.pop();
	}

	return 0;
}
