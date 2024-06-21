#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem 01
vector<int> runningSum(int n, vector<int>& a) {
	vector<int> p(n);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i - 1] + a[i];
	}

	return p;
}

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> result = runningSum(n, a);
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}

	return 0;
}


// Problem 02
void equilibriumIndex(int n, vector<int>& a) {
	vector<int> p(n);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i - 1] + a[i];
	}

	int l = 0, r = n - 1;
	int midIndex = (l + r) / 2;

	if (p[midIndex - 1] == p[r] - p[midIndex]) {
		cout << midIndex << endl;
	} else {
		cout << "not" << endl;
	}
}

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	equilibriumIndex(n, a);

	return 0;
}


// Problem 03
void searchNumber(int n, vector<int>& a, int x) {
	bool isFound = false;
	int l = 0, r = n - 1;
	while (l <= r) {
		int midIndex = (l + r) / 2;
		if (a[midIndex] == x) {
			isFound = true;
			break;
		} else if (x > a[midIndex]) {
			l = midIndex + 1;
		} else {
			r = midIndex - 1;
		}
	}

	if (isFound) {
		cout << "Found" << endl;
	} else {
		cout << "Not found" << endl;
	}
}

int main() {
	int n, q, x;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end()); // sort(a, a + n) cannot work cause a is vactor not row array
	
	cin >> q;
	while (q--) {
		cin >> x;
		searchNumber(n, a, x);
	}

	return 0;
}
