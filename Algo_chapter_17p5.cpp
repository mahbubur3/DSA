// Problem one
#include <bits/stdc++.h>

using namespace std;

int func(int n, int w[], int v[], int W) {
    if (n == 0 || w == 0) return 0;

    if (w[n - 1] <= W) {
        return max(func(n - 1, w, v, W - w[n - 1]) + v[n - 1], func(n - 1, w, v, W));
    } else {
        return func(n - 1, w, v, W);
    }
}

int main() {
	int n, W;
	cin >> n >> W;

	int w[n], v[n];
	for (int i = 0; i < n; i++) {
		cin >> w[i] >> v[i];
	}
    
    cout << func(n, w, v, W) << endl;
    

	return 0;
}





// Problem three
int dp[15][15];

int func(int i, int j, int n, int m, int grid[15][15]) {
	if (i >= n || j >= m) return -1e9;
	if (i == n - 1 && j == m - 1) return grid[i][j];
	if (dp[i][j] != -1) return dp[i][j];

	int op1 = grid[i][j] + func(i, j + 1, n, m, grid);
	int op2 = grid[i][j] + func(i + 1, j, n, m, grid);

	return dp[i][j] = max(op1, op2);
}

int main() {
	int n, m;
	cin >> n >> m;

	int grid[15][15];
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    cout << func(0, 0, n, m, grid) << endl;

	return 0;
}






// Problem four
class Solution {
public:
    int dp[1005];
    int func(int n, vector<int>& cost) {
        if (n == 0 || n == 1)
        	return cost[n];
        
        if (dp[n] != -1)
        	return dp[n];

        return dp[n] = cost[n] + min(func(n - 1, cost), func(n - 2, cost));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        
        int n = cost.size();

        return min(func(n - 1, cost), func(n - 2, cost));
    }
};