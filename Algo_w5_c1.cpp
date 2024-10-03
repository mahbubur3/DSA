// Climbing stairs - leetcode
class Solution {
public:
	int dp[50];

	int fibo(int n) {
		if (n <= 2) {
			return n;
		}

		if (dp[n] != -1) {
			return dp[n];
		}

		return dp[n] = fibo(n - 1) + fibo(n - 2);
	}

	int climbStairs(int n) {
		memset(dp, -1, sizeof(dp));

		return fibo(n);
	}
};



// Reach value - codeforces
long long input;

bool func(long long n) {
	if (n > input)
		return false;

	if (n == input)
		return true;

	return func(n * 10) || func(n * 20);
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> input;

		if(func(1))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}

	return 0;
}




// Reach value - codeforces (Optimize version)
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dp[100005];

bool func(ll n, ll input) {
    if (n > input)
        return false;

    if (n == input)
        return true;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = func(n * 10, input) || func(n * 20, input);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll input;
        cin >> input;
        
        memset(dp, -1, sizeof(dp));
        
        if (func(1, input))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}





// House Robber - leetcode
class Solution {
public:
	int dp[105];

	int func(int n, vector<int>& nums) {
		if (n < 0)
			return 0;

		if (dp[n] != -1) {
			return dp[n];
		}

		int op1 = nums[n] + func(n - 2, nums);
		int op2 = func(n - 1, nums);
		
		return dp[n] = max(op1, op2);
	}

	int rob(vector<int>& nums) {
		memset(dp, -1, sizeof(dp));

		int n = nums.size();

		return func(n - 1, nums);
	}
};