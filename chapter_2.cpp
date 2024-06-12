#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> n; // type 1 
    
    
    vector<int> n(5); // type 2
    cout << n.size() << endl;
    
    
    vector<int> n(5, 10); // type 3
    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    }
    
    
    vector<int> v(5, 100); // type 4
    vector<int> v2(v);
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    
    
    int arr[6] = {5, 3, 9, 8, 1, 4}; type 5
    vector<int> v(arr, arr + 6);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    
    vector<int> v = {5, 10, 200};
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}



// Vector capacity functions
int main() {
    vector<int> v;
    cout << v.size() << endl;
    
    
    vector<int> v;
    cout << v.max_size() << endl;
    
    
    // capacity eita sobsomoy digun kore size baray
    vector<int> v;
    cout << v.capacity() << endl;
    
    v.push_back(10);
    cout << v.capacity() << endl;
    
    v.push_back(20);
    cout << v.capacity() << endl;
    
    v.push_back(30);
    cout << v.capacity() << endl;
    
    v.push_back(40);
    cout << v.capacity() << endl;
    
    v.push_back(50);
    cout << v.capacity() << endl;
    
    
    
    // clear - eta shudhu value clear kore, memory theke kore na
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    
    v.clear();
    cout << v.size() << endl;
    cout << v[2];
    
    return 0;
}



int main() {
    // assign vector
    vector<int> a = {40, 30, 20};
    vector<int> x = {1, 6, 9};
    x = a;
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << endl;
    }
    
    
    // pop back
    vector<int> a = {40, 30, 20};
    a.pop_back();
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    
    
    // insert
    vector<int> a = {50, 30, 20};
    a.insert(a.begin() + 2, 100); // insert in 2 no. index
    for (int i : a) {
        cout << i << " ";
    }
    
    // insert in last index
    vector<int> v = {10, 20, 30, 40};
    v.insert(v.end(), 100);
    for (int i : v) {
        cout << i << " ";
    }
    
    // insert multiple 
    vector<int> a = {50, 30, 20};
    vector<int> b = {100, 500};
    a.insert(a.begin() + 2, b.begin(), b.end());
    for (int i : a) {
        cout << i << " ";
    }
    
    
    // delete value
    vector<int> a = {50, 30, 20, 40};
    a.erase(a.begin() + 2);
    for (int i : a) {
        cout << i << " ";
    }
    
    // delete multiple value
    vector<int> a = {50, 30, 20, 40, 80, 90};
    // a.erase(a.begin() + 1, a.begin() + 4);
    a.erase(a.begin() + 1, a.end() - 2);
    for (int i : a) {
        cout << i << " ";
    }
    
    return 0;
}



int main() {
    // replace
    vector<int> a = {5, 3, 2, 5, 9, 5};
    replace(a.begin(), a.end(), 5, 100); // replace with 100 where 5 is available
    // replace(a.begin(), a.end() - 1, 5, 100); // you can use also like this
    for (int i : a) {
        cout << i << " ";
    }
    
    
    // find
    vector<int> a = {5, 3, 2, 5, 9, 5, 7, 2};
    vector<int>:: iterator it;
    it = find(a.begin(), a.end(), 9);
    cout << *it;
    
    vector<int> a = {5, 3, 2, 5, 9, 5, 7, 2};
    auto it = find(a.begin(), a.end(), 19);
    // cout << *it;
    if (it == a.end()) {
        cout << "Not Found";
    } else {
        cout << "Found";
    }
    
    
    // through loop using iterator
    vector<int> a = {5, 3, 2, 5, 9, 5, 7, 2};
    // vector<int>::iterator it;
    for (auto it = a.begin(); it < a.end(); it++) {
        cout << *it << " ";
    }
    
    return 0;
}



// vector input - method 1
int main() {
    vector<int> a;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    for (int i : a) {
        cout << i << " ";
    }
    
    return 0;
}


// method 2 - regular use
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i : a) {
        cout << i << " ";
    }
    
    return 0;
}



// vector of strings - input string - method 2
int main() {
    int n;
    cin >> n;
    
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (string i : a) {
        cout << i << " ";
    }
    
    return 0;
}



// another method
int main() {
    int n;
    cin >> n;
    
    vector<string> a;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a.push_back(s);
    }
    
    for (string i : a) {
        cout << i << endl;
    }
    
    return 0;
}



// input with string space
int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        getline(cin, a[i]);
    }
    
    for (string i : a) {
        cout << i << endl;
    }
    
    return 0;
}





/* CUSTOM PROBLEMS */
int main() {
    // custom problem 1
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    
    // custom problem 2
    int n;
    cin >> n;
    vector<int> v(5, n);
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    
    // custom problem 3
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> v(a, a + 5);
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}


// custom problem 5
int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int oldVal, newVal;
    cin >> oldVal >> newVal;
    
    int findVal;
    cin >> findVal;
    
    replace(v.begin(), v.end(), oldVal, newVal);
    for (int i : v) {
        cout << i << " ";
    }
    
    cout << endl;
    
    auto it = find(v.begin(), v.end(), findVal);
    if (it == v.end()) {
        cout << -1 << endl;
    } else {
        cout<< distance(v.begin(), it) ;
    }
    
    // without distance function
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] == findVal) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << -1 << endl;
    } else {
        cout << index << endl;
    }

    return 0;
}


// custom problem 6
int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for(int i = 0; i < n; i++) {
        // v[i][0] -= 32;
        v[i][0] = v[i][0] - 32;
    }
    
    for (string s : v) {
        cout << s << endl;
    }

    return 0;
}


