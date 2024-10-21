// Get factorial [Not work with DP cause in the code no have repetition, any have option for optimize]
int fact(int n) {
	if (n == 0) {
		return 1;
	}

	return fact(n - 1) * n;
}

int main() { 
	int n;
	cin >> n;

	cout << fact(n) << endl;

	return 0;
}





// Fibonacci series
int fibo(int n) {
	if (n == 0 || n == 1) { // or (n < 2)
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n;
	cin >> n;

	cout << fibo(n) << endl;

	return 0;
}





// Fibonacci series [Applied Dynamic Programming for better optimization(Memoization) & avoid repetition]
// Top down approach
long long dp[100005];

long long fibo(ll n) {
	if (n == 0 || n == 1) { // or (n < 2)
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
	long long n;
	cin >> n;

	memset(dp, -1, sizeof(dp));

	cout << fibo(n) << endl;

	return 0;
}





// Bottom up approach
int main() {
	int n;
	cin >> n;

	int dp[n];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n] << endl;

	return 0;
}

