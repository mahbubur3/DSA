// MAX HEAP
int main() {
	vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
	int x;
	cin >> x;
	v.push_back(x);

	int currentIndex = v.size() - 1;	
	while (currentIndex != 0) {
		int parentIndex = (currentIndex - 1) / 2;
		if (v[parentIndex] < v[currentIndex]) {
			swap(v[parentIndex], v[currentIndex]);
		} else {
			break;
		}
		currentIndex = parentIndex;
	}

	for (int i : v) {
		cout << i << " ";
	}

	return 0;
}



// Sorting
int main() {
	vector<int> v
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);

		int currentIndex = v.size() - 1;	
		while (currentIndex != 0) {
			int parentIndex = (currentIndex - 1) / 2;
			if (v[parentIndex] < v[currentIndex]) {
				swap(v[parentIndex], v[currentIndex]);
			} else {
				break;
			}
			currentIndex = parentIndex;
		}
	}

	for (int i : v) {
		cout << i << " ";
	}

	return 0;
}





// MIN HEAP
int main() {
	vector<int> v
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);

		int currentIndex = v.size() - 1;	
		while (currentIndex != 0) {
			int parentIndex = (currentIndex - 1) / 2;
			if (v[parentIndex] > v[currentIndex]) {
				swap(v[parentIndex], v[currentIndex]);
			} else {
				break;
			}
			currentIndex = parentIndex;
		}
	}

	for (int i : v) {
		cout << i << " ";
	}

	return 0;
}




// Delete from max head
#include <bits/stdc++.h>

using namespace std;

void insertHeap(vector<int>& v, int x) {
	v.push_back(x);
	int currentIndex = v.size() - 1;	
	while (currentIndex != 0) {
		int parentIndex = (currentIndex - 1) / 2;
		if (v[parentIndex] < v[currentIndex]) {
			swap(v[parentIndex], v[currentIndex]);
		} else {
			break;
		}
		currentIndex = parentIndex;
	}
}

void deleteHeap(vector<int>& v) {
	v[0] = v[v.size() - 1];
	v.pop_back();
	int current = 0;
	while (true) {
		int leftIndex = current * 2 + 1;
		int rightIndex = current * 2 + 2;
		int lastIndex = v.size() - 1;
		if (leftIndex <= lastIndex && rightIndex <= lastIndex) { // If two is available
			if (v[leftIndex] >= v[rightIndex] && v[leftIndex] >= v[current]) {
				swap(v[leftIndex], v[current]);
				current = leftIndex;
			} else if (v[rightIndex] >= v[leftIndex] && v[rightIndex] > v[current]) {
				swap(v[rightIndex], v[current]);
				current = rightIndex;
			} else {
				break;
			}
		} else if (leftIndex <= lastIndex) { // if left is available
			if (v[leftIndex] > v[current]) {
				swap(v[leftIndex], v[current]);
				current = leftIndex;
			} else {
				break;
			}
		} else if (rightIndex <= lastIndex) { // if right is available
			if (v[rightIndex] > v[current]) {
				swap(v[rightIndex], v[current]);
				current = rightIndex;
			} else {
				break;
			}
		} else {
			break;
		}
	}
}

void printHeap(vector<int> v) {
	for (int i : v) {
		cout << i << " ";
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		insertHeap(v, x);
	}
	deleteHeap(v);
	printHeap(v);

	return 0;
}





// Delete min heap
void insertHeap(vector<int>& v, int x) {
	v.push_back(x);
	int currentIndex = v.size() - 1;	
	while (currentIndex != 0) {
		int parentIndex = (currentIndex - 1) / 2;
		if (v[parentIndex] > v[currentIndex]) {
			swap(v[parentIndex], v[currentIndex]);
		} else {
			break;
		}
		currentIndex = parentIndex;
	}
}

void deleteHeap(vector<int>& v) {
	v[0] = v[v.size() - 1];
	v.pop_back();
	int current = 0;
	while (true) {
		int leftIndex = current * 2 + 1;
		int rightIndex = current * 2 + 2;
		int lastIndex = v.size() - 1;
		if (leftIndex <= lastIndex && rightIndex <= lastIndex) { // If two is available
			if (v[leftIndex] <= v[rightIndex] && v[leftIndex] < v[current]) {
				swap(v[leftIndex], v[current]);
				current = leftIndex;
			} else if (v[rightIndex] <= v[leftIndex] && v[rightIndex] < v[current]) {
				swap(v[rightIndex], v[current]);
				current = rightIndex;
			} else {
				break;
			}
		} else if (leftIndex <= lastIndex) { // if left is available
			if (v[leftIndex] < v[current]) {
				swap(v[leftIndex], v[current]);
				current = leftIndex;
			} else {
				break;
			}
		} else if (rightIndex <= lastIndex) { // if right is available
			if (v[rightIndex] < v[current]) {
				swap(v[rightIndex], v[current]);
				current = rightIndex;
			} else {
				break;
			}
		} else {
			break;
		}
	}
}

void printHeap(vector<int> v) {
	for (int i : v) {
		cout << i << " ";
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		insertHeap(v, x);
	}
	deleteHeap(v);
	printHeap(v);

	return 0;
}
