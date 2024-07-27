// 1823. Find the winner of the circular game
class Solution {
public:
    queue<int> q;
    
    int findTheWinner(int n, int k) {
        for (int i = 1; i <= n; i++) {
            q.push(i);
        }

        int count = 0;
        while (q.size() > 1) {
            int v = q.front();
            q.pop();
            count++;

            if (count == k) {
                count = 0;
            } else {
                q.push(v);
            }
        }

        return q.front();
    }
};




// 155. Min Stack 
class MinStack {
public:
    stack<int> s, m;

    MinStack() {
        
    }
    
    void push(int val) {
        if (s.empty()) {
            s.push(val);
            m.push(val);
            return;
        }
        int minVal = min(val, m.top());
        m.push(minVal);
        s.push(val);
    }
    
    void pop() {
        if (s.empty()) {
            return;
        } else {
            s.pop();
            m.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m.top();
    }
};
