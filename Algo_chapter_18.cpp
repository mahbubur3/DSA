#include <bits/stdc++.h>

using namespace std;


// Subset sum (Top down)
int dp[1005][1005];

bool subsetSum(int n, int a[], int s) {
	if (n == 0) {
		if (s == 0) return true;
		else return false;
	}
	
	if (dp[n][s] != -1)
	    return dp[n][s];

	if (a[n - 1] <= s) {
		bool op1 = subsetSum(n - 1, a, s - a[n - 1]);
		bool op2 = subsetSum(n - 1, a, s);
		return dp[n][s] = op1 || op2;
	} else {
		return dp[n][s] = subsetSum(n - 1, a, s);
	}
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int s;
	cin >> s;
	
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = -1;
        }
    }

	if (subsetSum(n, a, s)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}






// Subset sum (Bottom down)
int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int s;
	cin >> s;
 
	bool dp[n + 1][s + 1];

	dp[0][0] = true;
	for (int i = 1; i <= s; i++) {
		dp[0][i] =  false;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (a[i - 1] <= j) {
				dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	if (dp[n][s]) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}






// Count of subset sum
int dp[1005][1005];

int subsetSum(int n, int a[], int s) {
	if (n == 0) {
		if (s == 0) return 1;
		else return 0;
	}
	
	if (dp[n][s] != -1)
	    return dp[n][s];

	if (a[n - 1] <= s) {
		int op1 = subsetSum(n - 1, a, s - a[n - 1]);
		int op2 = subsetSum(n - 1, a, s);
		return dp[n][s] = op1 + op2;
	} else {
		return dp[n][s] = subsetSum(n - 1, a, s);
	}
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int s;
	cin >> s;
	
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = -1;
        }
    }

	cout << subsetSum(n, a, s) << endl;

	return 0;
}






// Equal sum partition using subset sum
int main() {
	int n;
	cin >> n;

	int s = 0;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}

	if (s % 2 == 0) {
		int sum = s / 2;
		int dp[n + 1][sum + 1];
		dp[0][0] = true;

		for (int i = 1; i <= sum; i++) {
			dp[0][i] = false;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= sum; j++) {
				if (a[i - 1] <= j) {
					dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
				} else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}

		if (dp[n][sum]) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	} else {
		cout << "NO" << endl;
	}

	return 0;
}





// Minimum subset sum difference
int main() {
	int n;
	cin >> n;

	int a[n], s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}

	bool dp[n + 1][s + 1];
	dp[0][0] = true;
	for (int i = 1; i <= s; i++) {
		dp[0][i] =  false;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (a[i - 1] <= j) {
				dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	vector<int> sumList;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (dp[i][j] == 1) {
				v.push_back(j);
			}
		}
	}

	int ans = INT_MAX;
	for (int v : sumList) {
		int s1 = v;
		int s2 = s - s1;
		ans = min(ans, abs(s1 - s2));
	}

	cout << ans << endl;

	return 0;
}