#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

/* int main() {
	// Initialization
	// list<int> myList(5, 2);
	// for (auto it = myList.begin(); it != myList.end(); it++) {
	// 	cout << *it << " ";
	// }


	// list<int> l = {1, 2, 3, 4, 5};
	// list<int> myList(l);
	// for (auto it = myList.begin(); it != myList.end(); it++) {
	// 	cout << *it << endl;
	// }


	// Using array
	// int a[5] = {10, 20, 30, 40, 50};
	// list<int> l(a, a + 5);
	// for (auto it = l.begin(); it != l.end(); it++) {
	// 	cout << *it << " ";
	// }


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
} */ 



// Capacity functions
/* int main() {
	list<int> l = {10, 20, 30};
	l.resize(2);
	// l.resize(5); // default set 0
	l.resize(5, 10); // 10 set remaining position
	for (int i : l) {
		cout << i << " ";
	}

	return 0;
} */



// Modifiers functions
int main() {
	// Assign to another list
	// list<int> oldList = {100, 200, 300};
	// list<int> newList;
	// newList = oldList;
	// for (int i : newList) {
	// 	cout << i << " ";
	// }



	// Insert tail
	// list<int> l = {10, 20, 30};
	// l.push_back(100);
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// Insert head
	// list<int> l = {10, 20, 30};
	// l.push_front(100);
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// Delete tail
	// list<int> l = {10, 20, 30};
	// l.pop_back();
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// Delete head
	// list<int> l = {10, 20, 30};
	// l.pop_front();
	// for (int i : l) {
	// 	cout << i << " ";
	// }



	// Insert any position
	// list<int> l = {10, 20, 30, 40};
	// l.insert(next(l.begin(), 1), 100); // O(N) cause next use loop. if use invalid index this will loop back.
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// list<int> l = {10, 20, 30, 40};
	// l.insert(next(l.begin(), 2), {100, 200, 300}); // Multiple insert
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// Insert another list
	// list<int> l = {10, 20, 30};
	// list<int> l2 = {500, 800};
	// l.insert(next(l.begin(), 1), l2.begin(), l2.end());
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// Delete any position
	// list<int> l = {10, 20, 30};
	// l.erase(next(l.begin(), 1));
	// for (int i : l) {
	// 	cout << i << " ";
	// }

	// Delete multiple
	// list<int> l = {10, 20, 30, 40, 50, 60};
	// l.erase(next(l.begin(), 1), next(l.begin(), 4));
	// for (int i : l) {
	// 	cout << i << " ";
	// }



	// Replace
	// list<int> l = {10, 20, 30, 40, 50, 10, 60};
	// replace(l.begin(), l.end(), 10, 1000);
	// for (int i : l) {
	// 	cout << i << " ";
	// }



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
