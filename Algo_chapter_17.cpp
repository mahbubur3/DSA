// Knapsack
int knapsack(int n, int w[], int v[], int W) {
	if (n == 0 || w == 0) {
		return 0;
	}

	if (w[n - 1] <= W) {
		int op1 = knapsack(n - 1, w, v, W - w[n - 1]) + v[n - 1];
		int op2 = knapsack(n - 1, w, v, W);
		return max(op1, op2);
	} else {
		int op2 = knapsack(n - 1, w, v, W);
		return op2;
	}
}

int main() {
	int n;
	cin >> n;

	int w[n], v[n];
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int W;
	cin >> W;

	cout << knapsack(n, w, v, W) << endl;

	return 0;
}




// Knapsack - Optimize (Top down approach)
const int maxN = 1000, maxW = 1000;
int dp[maxN][maxW];

int knapsack(int n, int w[], int v[], int W) {
	if (n == 0 || w == 0) {
		return 0;
	}

	if (dp[n][w] != -1) {
		return dp[n][W];
	}

	if (w[n - 1] <= W) {
		int op1 = knapsack(n - 1, w, v, W - w[n - 1]) + v[n - 1];
		int op2 = knapsack(n - 1, w, v, W);
		return dp[n][W] = max(op1, op2);
	} else {
		int op2 = knapsack(n - 1, w, v, W);
		return dp[n][w] = op2;
	}
}

int main() {
	int n;
	cin >> n;

	int w[n], v[n];
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int W;
	cin >> W;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= w; j++) {
			dp[i][j] = -1;
		}
	}

	cout << knapsack(n, w, v, W) << endl;

	return 0;
}





// Knapsack - Optimize (Bottom up approach)
int main() {
	int n;
	cin >> n;

	int w[n], v[n];
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int W;
	cin >> W;

	int dp[n + 1][W + 1];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0) {
				d[i][j] = 0;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {
			if (w[i - 1] <= j) {
				int op1 = dp[i - 1][j - w[i - 1]] + v[i - 1];
				int op2 = dp[i - 1][j];
				dp[i][j] = max(op1, op2);
			} else {
				int op2 = dp[i - 1][j];
				dp[i][j] = op2;
			}
		}
	}

	// output full
	// for (int i = 0; i <= n; i++) {
	// 	for (int j = 0; j <= W; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// output last
	cout << dp[n][W] << endl;

	return 0;
}