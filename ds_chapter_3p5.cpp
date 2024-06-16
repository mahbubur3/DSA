#include <iostream>
#include <vector>

using namespace std;

// Problem 1
/* int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> pre(n);
    pre[0] = v[0];
    
    for (int i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }
    
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }

    return 0;
}


vector<int> runningSum(int n, vector<int> v) {
    vector<int> pre(n);
    pre[0] = v[0];
    
    for (int i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }
    
    return pre;
}


int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> result = runningSum(n, v);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
} */


// PROBLEM 2
int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> pre(n);
    pre[0] = v[0];
    
    for (int i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }
    
    int l = 0, r = n - 1;
    int midIndex = (l + r) / 2;
    
    if (pre[midIndex - 1] == pre[r] - pre[midIndex]) {
        cout << midIndex << endl;
    } else {
        cout << "not";
    }
    
    return 0;
}
