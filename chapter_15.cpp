class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                } else {
                    if (c == ')' && st.top() == '(') {
                        st.pop();
                    } else if (c == '}' && st.top() == '{') {
                        st.pop();
                    } else if (c == ']' && st.top() == '[') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }

        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};





class Solution {
public:
	bool backspaceCompare(string s, string t) {
		stack<char> s1, s2;

		for (char c : s) {
			if (c == '#') {
				if (!s1.empty()) {
					s1.pop();
				}
			} else {
				s1.push(c);
			}
		}

		for (char c : t) {
			if (c == '#') {
				if (!s2.empty()) {
					s2.pop();
				}
			} else {
				s2.push(c);
			}
		}

		// return s1 == s2;
		if (s1 == s2) {
			return true;
		} else {
			return false;
		}
	}
};




// Insert an element at its bottom in a given stack
// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
stack<int> pushAtBottom(stack<int>& s, int x) {
    stack<int> s2;
    while (!s.empty()) {
    	s2.push(s.top());
    	s.pop();
    }

    s2.push(x);

    while (!s2.empty()) {
    	s.push(s2.top());
    	s2.pop();
    }

    return s;
}






int getSum(stack<int> s) {
	int sum = 0;
	while (!s.empty()) {
		sum = sum + s.top();
		s.pop();
	}
	return sum;
}

int maxSum(stack<int>& s1, stack<int>& s2, stack<int>& s3) {
	int sum1 = getSum(s1);
	int sum2 = getSum(s2);
	int sum3 = getSum(s3);

	while (true) {
		if (sum1 == sum2 && sum2 == sum3) {
			break;
		}

		if (sum1 >= sum2 && sum1 >= sum3) {
			sum1 = sum1 - s1.top();
			s1.pop();
		} else if (sum2 >= sum1 && sum2 >= sum3) {
			sum2 = sum2 - s2.top();
			s2.pop();
		} else {
			sum3 = sum3 - s3.top();
			s3.pop();
		}
	}
	return sum1;
}






queue<int> reverseQueue(queue<int> q) {
	stack<int> s;

	while (!q.empty()) {
		s.push(q.front());
		q.pop();
	}

	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}

	return q;
}




// Reverse stack using recursing
void reverseStack(stack<int>& s) {
	if (s.empty()) {
		return;
	}

	int x = s.top();
	s.pop();
	reverseStack(s);

	stack<int> s2;
	while (!s.empty()) {
		s2.push(s.top());
		s.pop();
	}
	s2.push(x);

	while (!s2.empty()) {
		s.push(s2.top());
		s2.pop();
	}
}
