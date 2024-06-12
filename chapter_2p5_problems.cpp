#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem 1
int main() {
    int n;
    cin >> n;
    
    vector<int> v1(n);
    vector<int> v2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    v2.insert(v2.end(), v1.begin(), v1.end());
    
    for (int i : v2) {
        cout << i << " ";
    }
    
    return 0;
}


// Problem 2
int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    reverse(v.begin(), v.end());
    
    for (int i : v) {
        cout << i << " ";
    }
 
    return 0;
}


// Problem 3
int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    for (int i : v) {
        if (i > 0) {
            i = 1;
        }
        
        if (i < 0) {
            i = 2;
        }
        
        cout << i << " ";
    }
 
    return 0;
}


// Problem 4
int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (find(v.begin(), v.end(), v[i] + 1) != v.end()) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}

// OR

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end()) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}


// Problem 5
int main() {
    string s;
    cin >> s;
    
    int freq[26] = {0};
    vector<int> v(freq, freq + 26);
    
    for (int i = 0; i < s.size(); i++) {
        v[s[i] - 97]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (v[i] > 0) {
            cout << char(i + 97) << " : " << v[i] << endl;;
        }
    }
    
    return 0;
}


// Problem 6
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


// Problem 7
int main() {
    int n, q;
    cin >> n >> q;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int t = 0; t < q; t++) {
        int x;
        cin >> x;
        
        auto it = find(v.begin(), v.end(), x);
        if (it == v.end()) {
            cout << "not found" << endl;
        } else {
            cout << "found" << endl;
        }
    }
    
    return 0;
}

