#include <iostream>
#include <cmath>

using namespace std;

// O(N) complexity program
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) { // O(N)
        cin >> a[i];
    }
    
    int sum = 0;
    
    for (int i = 0; i < n; i++) { // O(N)
        sum = sum + a[i];
    }
    
    cout << sum << endl;
    
    return 0;
}


// O(logN) complexity program
// i jodi gunitok akare agay or value ta jodi kuno kichu dara vag kore kore jay tahole logarithm complexity
int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i = i * 2) { // O(logN)
        cout << i << endl;
    }
    
    return 0;
}


// O(sqrtN) complexity program
int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= sqrt(n); i++) { // O(sqrt(N)) [i*i<=n is the same of i<=sqrt(n)]
        if (n % i == 0) {
            cout << i << " ";
            
            if (n / i != i) {
                cout << n / i << endl;
            }
        }
    }
    
    return 0; 
}


// O(N*N) or O(N^2)
// Nested loop er program e hocche O(N*N) or O(N^2) er complexity
int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) { // O(N^2)
        for (int j = 1; j <= n; j++) {
            cout << "Stone" << endl;
        }
    }
    
    return 0;
}
// abar amra je selection sort o korechi tao O(n^2) complexity



// O(NlogN) = N * logN
int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) { // O(N)
        int x = i;
        while (x > 0) { // O(logN)
            int digit = x % 10;
            cout << digit << " ";
            
            x = x / 10;
        }
        
        cout << endl;
    }
    
    return 0;
}
// ei O(N) & O(logN) milei O(NlogN)


/*
// Space complexity
- input space 
- auxiliary space
int s = a + b;
s = auxiliary space
a + b = input space
*/
