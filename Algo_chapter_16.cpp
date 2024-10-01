#include <bits/stdc++.h>

using namespace std;

// Get factorial [Not work with DP cause in the code no have repetition, any have option for optimize]
int fact(int n) {
	if (n == 0) return 1;

	return fact(n - 1) * n;
}

int main() {
	int n; cin >> n;

	cout << fact(n) << endl;

	return 0;
}





// Fibonacci series
int fibo(int n) {
	if (n == 0 || n == 1) return n;

	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n; cin >> n;

	cout << fibo(n) << endl;

	return 0;
}





// Fibonacci series [Top down approach][Applied Dynamic Programming for better optimization(Memoization) & avoid repetition]
long long dp[100005];

long long fibo(long long n) {
	if (n == 0 || n == 1) return n;

	if (dp[n] != -1) return dp[n];

	long long ans = fibo(n - 1) + fibo(n - 2);
	dp[n] = ans;

	return ans;
}

int main() {
	long long n; cin >> n;

	memset(dp, -1, sizeof(dp));

	cout << fibo(n) << endl;

	return 0;
}





// Fibonacchi series bottom up approach
int main() {
	int n;
	cin >> n;

	int a[n];
	a[0] = 0;
	a[1] = 1;

	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}

	cout << a[n] << endl;

	return 0;
}

