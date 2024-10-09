// Problem one (check subset sum)
class Solution {
public:
	int dp[105][10005];

	bool isSum(int n, int sum, vector<int>& arr) {
		if (n == 0) {
			if (sum == 0) return true;
			else return false;
		}

		if (dp[n][sum] != -1)
			return dp[n][sum];

		if (arr[n - 1] <= sum) {
			return dp[n][sum] = isSum(n - 1, sum - arr[n - 1], arr) || isSum(n - 1, sum, arr);
		} else {
			return dp[n][sum] = isSum(n - 1, sum, arr);
		}
	}

	bool isSubsetSum(vector<int> arr, int sum) {
		int n = arr.size();
		memset(dp, -1, sizeof(dp));
		return isSum(n, sum, arr);
	}
};


// Problem two (count subset sum)
int dp[105][1005];
int subsetSum(int n, vector<int>& arr, int k) {
	if (n == 0) {
		if (k == 0) return 1;
		else return 0;
    }
	
	if (dp[n][k] != -1)
	    return dp[n][k];

	if (arr[n - 1] <= k) {
		return dp[n][k] = subsetSum(n - 1, arr, k - arr[n - 1]) + subsetSum(n - 1, arr, k);
	} else {
		return dp[n][k] = subsetSum(n - 1, arr, k);
	}
}

int findWays(vector<int>& arr, int k) {
	int n = arr.size();
	memset(dp, -1, sizeof(dp));
	int x = 1e9 + 7;
	return subsetSum(n, arr, k) % x;
}




// Problem three (Partition equal subset sum)
class Solution {
public:
	int dp[205][20005];

	bool isSum(int n, int sum, vector<int>& arr) {
		if (n == 0) {
			if (sum == 0) return true;
			else return false;
		}

		if (dp[n][sum] != -1)
			return dp[n][sum];

		if (arr[n - 1] <= sum) {
			return dp[n][sum] = isSum(n - 1, sum - arr[n - 1], arr) || isSum(n - 1, sum, arr);
		} else {
			return dp[n][sum] = isSum(n - 1, sum, arr);
		}
	}

	bool canPartition(vector<int>& nums) {
		int n = nums.size();

		memset(dp, -1, sizeof(dp));

		int sum = 0;
		for (int i : nums)
			sum += i;

		if (sum % 2 == 1)
			return false;

		int target = sum / 2;
		return isSum(n, target, nums);
	}
};