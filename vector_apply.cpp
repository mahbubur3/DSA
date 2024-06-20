#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a[5] = {10, 20, 30, 40, 50};
	
	vector<int> v(a, a + 5);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}


	vector<int> v = {10, 20, 30};
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}


	vector<int> v = {10, 20, 30};
	v.pop_back();
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}


	vector<int> a = {10, 20, 30};
	a.insert(a.begin() + 1, 100);
	for (int i : a) {
		cout << i << " ";
	}


	vector<int> a = {10, 20, 30};
	a.insert(a.begin(), 100);
	for (int i : a) {
		cout << i << " ";
	}


	vector<int> a = {10, 20, 30};
	a.insert(a.end(), 100);
	for (int i : a) {
		cout << i << " ";
	}


	vector<int> a = {10, 20, 30};
	vector<int> b = {99, 88};
	a.insert(a.end(), b.begin(), b.end());
	for (int i : a) {
		cout << i << " ";
	}


	vector<int> a = {5, 9, 2, 8, 1};
	replace(a.begin(), a.end(), 5, 100);
	for (int i : a) {
		cout << i << " ";
	}


	vector<int> a = {5, 3, 2, 5, 9, 5, 7, 2};
	auto it = find(a.begin(), a.end(), 20);
	if (it == a.end()) {
		cout << "Not Found" << endl;
	} else {
		cout << "Found" << endl;
	}

	return 0;
}


// Capital first character of string
int main() {
	int n;
	cin >> n;
	cin.ignore();

	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) {
		s[i][0] -= 32;
	}

	for (string i : s) {
		cout << i << endl;
	}

	return 0;
}


// Replace number and find index
int main() {
	int n, oldNum, newNum, findNum;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> oldNum >> newNum;
	cin >> findNum;

	replace(a.begin(), a.end(), oldNum, newNum);
	for (int i : a) {
		cout << i << " ";
	}

	cout << endl;

	auto it = find(a.begin(), a.end(), findNum);
	if (it == a.end()) {
		cout << -1 << endl;
	} else {
		cout << it - a.begin(); 
	}

	return 0;
}


// Codeforces problems
// New array
int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	b.insert(b.end(), a.begin(), a.end());
	for (int i : b) {
		cout << i << " ";
	}

	return 0;
}


// Reversing
int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	reverse(a.begin(), a.end());

	for (int i : a) {
		cout << i << " ";
	}

	return 0;
}
