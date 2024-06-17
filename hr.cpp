#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i - 1];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        
        int sum;
        if (l == 0) {
            sum = pre[r] - 0;
        } else {
            sum = pre[r] - pre[l - 1];
        }
    }
    
    return 0;
}




// case one
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    bool isDuplicate = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            isDuplicate = true;
            break;
        }
    }
    
    if (isDuplicate == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;   
}



// Case 2
int main() {
    long long n;
    cin >> n;
    
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<long long> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }
    
    reverse(pre.begin(), pre.end());
    
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
    
    return 0;    
}



// Case three
int main() {
    int t;
    cin >> t;
    
    while (t--) {  
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        // int l = 0, r = n - 1;
        // int midIndex = (l + r) / 2;
        // while (l < r) {
        //     if ()
        // }
        // if (v[midIndex - 1] > v[midIndex]) {
        //     cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }
        
        bool isSorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                isSorted = false;
                break;
            }
        }
        
        if (isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}



// case four
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int x;
    cin >> x;
    
    a.insert(a.begin() + x, b.begin(), b.end());
    
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}



// Case five
// Tests matrix
int main() {
    int n;
    cin >> n;
    
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}


int main() {
    int n;
    cin >> n;
    
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j && i + j == n - 1) {
                cout << "X";
            } else if (i == j) {
                cout << "\\";
            } else if (i + j == n - 1) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
