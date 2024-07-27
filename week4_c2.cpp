// 1047. Remove all adjacent duplicates in string
class Solution {
public:
	string removeDuplicates(string s) {
		stack<char> st;

		for (char c : s) {
			if (!st.empty() && c == st.top()) {
				st.pop();
			} else {
				st.push(c);
			}
		}

		string ans = "";
		while (!st.empty()) {
			ans = ans + st.top();
			st.pop();
		}

		reverse(ans.begin(), ans.end());
		return ans;
	}
};




// 2073. Time needed to buy tickets
queue<int> q;

int time = 0;
int n = tickets.size();
for (int i = 0; i < n; i++) {
	q.push(tickets[i]);
}

while (true) {
	q.front()--;
	time++;

	if (k == 0 && q.front() == 0) {
		break;
	}

	if (k == 0) {
		k = q.size() - 1;
	} else {
		k--;
	}

	if (q.front() != 0) {
		q.push(q.front());
	}

	q.pop();
}

return time;
