#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


for(int i=0;i<N;i++){
    x++;
}
for(int i=0;i<M;i++){
    y++;
}
// O(N+M)

int a=0;
for(int i=0;i<N;i++){
    for(int j=N;j>i;j--){
        a = a+i+j;
    }
}
// O(N^2)

int i,j,k=0;
for(i = n/2;i<=n;i++){
    for(j=2;j<=n;j*=2){
        k = k+n/2;
    }
}
// O(Nlog(N))


int n = 20;
int sum = (n*(n+1))/2;
if(sum%2 == 0) { 
    cout << "EVEN";
} else {
    cout << "ODD";
}
// O(1)

for(int i=0;i<n;i++){ O(N)
    for(int j=0;j<n;j++){ O(N)
        for(int k=0;k<n;k++){ O(N)
            cout << i+j+k << endl;         
        }
    }
}
for(int j=0;j<n;j++){ O(N)
    for(int k=0;k<n;k++){ O(N)
        cout << i+j+k << endl;         
    }
}

// O(N)*O(N)*O(N) + O(N)*O(N) = O(N^3) cause left one is large

int i=1;
while(i<n){ O(N)
    int j=n;           
    while(j>0){
        j = j/2;
    }
    i = i*2;
}

// 

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << i*j << endl;
    }
}
// 

for(int i=0;i<n/2;i++){
    for(int j=1; j+n/2<=n; j++){
        for(int k=1;k<=k;k*=2){
            cout << "Phitron";
        }
    }
}
// 


for (int i = 0; i < n / 2; i += 2) { // O(N) cause n by 2 & remove constant
    for (int j = 0; j < n / 2; j += 2) { // O(N)
        for (int k = 0; k < n; k++) { // O(N)
            // operations
        }
    }
}
// Total complexity N^3


for (int i = 0; i < n; i++) { // O(N)
    for (int j = 0; j < n; j++) { // O(N)
        for (int j = 0; k < m; k++) { // O(M) cause if M value is different
            // operations
        }
    }
}
// TOTAL COMPLEXITY O(N^2*M)


for (int i = 0; i < n; i += 2) { // O(N)
    for (int j = i + 1; j < n; j++) { // O(N) - jug akare onek state komay na
        // operations
    }
}
// total complexity O(N^2)


for (int i = 0; i < n; i += 2) {  // O(N)
    for (int j = 0; j < i; j++) { // O(N)
        // operations
    }
}
// total complexity O(N^2)


for (int i = 1; i * i < n; i = i * 2) { 
    // operations
}
// total complexity O(logN)


for (int i = n / 2; i <= n; i++) { // O(N)
    for (int j = 1; j <= n; j += i) { // O(logN)
        cout << i << " " << j << endl;
    }
}
// total complexity O(Nlog(N))

