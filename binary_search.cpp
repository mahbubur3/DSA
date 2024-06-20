#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, x;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> x;
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

	return 0;
}


int main() {
	int n, x;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> x;

	bool isDuplicate = false;
	int l = 0, r = n - 1;
	while (l <= r) {
		int midIn = (l + r) / 2;
		if (a[midIn] == x) {
			if (midIn > 0 && a[midIn + 1] == x || midIn < n - 1 && a[midIn - 1] == x) {
				isDuplicate = true;
				break;
			}
		} else if (x > a[midIn]) {
			l = midIn + 1;
		} else {
			r = midIn - 1;
		}
	}

	if (isDuplicate) {
		cout << "found" << endl;
	} else {
		cout << "not found" << endl;
	}

	return 0;
}
