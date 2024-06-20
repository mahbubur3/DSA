#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Range sum query: brute-force approach [got time limit error]
int main() {
    long long n, q;
    cin >> n >> q;
    
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    while (q--) {
    	long long l, r;
    	cin >> l >> r;
    	l--;
    	r--;

    	long long sum = 0;
    	for (int i = l; i <= r; i++) {
    		sum += a[i];
    	}

    	cout << sum << endl;
    }
    
    return 0;
}


// Range sum query: using prefix sum
int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> pre(n);
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

        cout << sum << endl;
    }

    return 0;
}


// Without test case
int main() { 
    long long n, l, r;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> l >> r;
    l--;
    r--;

    vector<long long> p(n);
    p[0] = a[0];
    for (int i = 1; i < n; i++) {
        p[i] = a[i] + p[i - 1];
    }

    long long sum;
    if (l == 0) {
        sum = p[r] - 0;
    } else {
        sum = p[r] - p[l - 1];
    }

    cout << sum << endl;

    return 0;
}
