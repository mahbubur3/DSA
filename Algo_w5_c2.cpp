// Subset sum
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
	




// Partition equal subset sum - leetcode
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





// Target Sum - Leetcode
class Solution {
public:
	int dp[205][20005];
	int isSum(int n, int sum, vector<int>& arr) {
		if (n == 0) {
			if (sum == 0) return true;
			else return false;
		}

		if (dp[n][sum] != -1)
			return dp[n][sum];

		if (arr[n - 1] <= sum) {
			return dp[n][sum] = isSum(n - 1, sum - arr[n - 1], arr) + isSum(n - 1, sum, arr);
		} else {
			return dp[n][sum] = isSum(n - 1, sum, arr);
		}
	}

	int findTargetSumWays(vector<int>& nums, int target) {
		int n = nums.size();
		int sum = 0;

		for (int i : nums)
			sum += i;

		int s1 = (target + sum) / 2;

		if (s1 < 0)
			return 0;

		if (target > sum || (target + sum) % 2 == 1)
			return 0;

		memset(dp, -1, sizeof(dp));

		return isSum(n, s1, nums);
	}
};