#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// module 2.5 problem 6 got tle error
int main() {
    int n, q;
    cin >> n >> q;
    
    vector<int> v(n); // Create vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int t = 0; t < q; t++) { // Test case
        int l, r;
        cin >> l >> r;
        
        // Decrease for indexing
        l--;
        r--;
        
        int sum = 0; // Count sum
        for (int i = l; i <= r; i++) {
            sum = sum + v[i];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}


// Get no tle error [Prefix sum array]
int main() {
    long long n, q;
    cin >> n >> q;
    
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long preSum[n];
    preSum[0] = a[0];
    for (int i = 1; i < n; i++) {
        preSum[i] = a[i] + preSum[i - 1];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        
        long long sum;
        if (l == 0) {
            sum = preSum[r] - 0;
        } else {
            sum = preSum[r] - preSum[l - 1];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}



// Binary search
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x;
    cin >> x;
    
    bool flag = false;
    
    int l = 0; // Set left index to find mid
    int r = n - 1; // Set right index to find mid
    while (l <= r) {
        int middleIndex = (l + r) / 2; // Calculate middle index
        
        if (a[middleIndex] == x) { // if x found in middleIndex 
            flag = true;
            break;
        }
        
        if (x > a[middleIndex]) { // if not found in middleIndex then move right and left
            l = middleIndex + 1; // move right
        } else {
            r = middleIndex - 1; // move left
        }
    }
    
    if (flag == true) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    return 0;
}


// module 2.5 problem 7 got tle error
int main() {
    int n, q;
    cin >> n >> q;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    while(q--) {
        int x;
        cin >> x;
        
        bool found = false;
        int l = 0, r = n - 1;
        
        while (l <= r) {
            int middleIndex = (l + r) / 2;
            
            if (a[middleIndex] == x) {
                found = true;
                break;
            }
            
            if (x > a[middleIndex]) {
                l = middleIndex + 1;
            } else {
                r = middleIndex - 1;
            }
        }
        
        if (found == true) {
        cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}




// CUSTOM PROBLEM 1
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x;
    cin >> x;
    
    bool isDuplicate = false;
    int l = 0, r = n - 1;
    while (l <= r) {
        int middleIndex = (l + r) / 2;
        if (a[middleIndex] == x) {
            if (middleIndex > 0 && a[middleIndex - 1] == x || middleIndex < n - 1 && a[middleIndex + 1] == x) {
                isDuplicate = true;
                break;
            }
        }
        
        if (x > a[middleIndex]) {
            l = middleIndex + 1;
        } else {
            r = middleIndex - 1;
        }
    }
    
    if (isDuplicate == true) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}


// If specific number is not given. then use linear search for better complexity
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bool isDuplicate = false;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i + 1] || a[i] == a[i - 1]) {
            isDuplicate = true;
            break;
        }
    }
    
    if (isDuplicate == true) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }
    
    return 0;   
}


// CUSTOM PROBLEM 2
// demo
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int pre[n];
    pre[0] = a[0];
    
    for (int i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i - 1];
    }
    
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
    
    return 0;
}


int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> pre(n);
    pre[0] = 0;
    
    for (int i = 1; i < n; i++) {
        pre[i] = v[i - 1] + pre[i - 1];
    }
    
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
    
    return 0;
}


