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
			ans =+ st.top();
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




// 1598. Crawler log folder
int minOperations(vector<string>& logs) {
	stack<int> st;

	for (string s : logs) {
		if (s == "../") {
			if (!st.empty()) {
				st.pop();
			}
		} else if (s == "./") {
			continue;
		} else {
			st.push(s);
		}
	}

	return st.size();
}



// 682. Baseball game
stack<int> st;
for (string s : operations) {
	if (s == "+") {
		int prev = st.top();
		st.pop();
		int prev2 = st.top();
		st.push(prev);
		st.push(prev + prev2);
	} else if (s == "D") {
		st.push(st.top() * 2);
	} else if (s == "C") {
		st.pop();
	} else {
		st.push(stoi(s));
	}
}

int result = 0;
while (!st.empty()) {
	result += st.top();
	st.pop();
}
