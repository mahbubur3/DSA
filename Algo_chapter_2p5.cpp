// Problem one
class Solution {
  public:
    vector<int> bfsTra(int src, int v, vector<int> adj[]) {
        vector<int> result;
        vector<bool> visited(v, false);
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while (!q.empty()) {
            int p = q.front();
            q.pop();
            result.push_back(p);
            for (int child : adj[p]) {
                if (!visited[child]) {
                    q.push(child);
                    visited[child] = true;
                }
            }
        }
        return result;
    }
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        return bfsTra(0, v, adj);
    }
};




// Problem two
vector<int> v[1005];
bool visited[1005];
int level[1005];
void bfsTraversal(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int c : v[p]) {
            if (!visited[c]) {
                q.push(c);
                visited[c] = true;
                level[c] = level[p] + 1;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int q;
    cin >> q;
    while (q--) {
        int s, d;
        cin >> s >> d;
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));
        bfsTraversal(s);
        
        if (level[d] == -1) {
            cout << -1 << endl;
        } else {
            cout << level[d] << endl;
        }
    }

    return 0;
}




// Problem three
vector<int> v[1005];
bool visited[1005];
int level[1005];
void bfsTraversal(int src) {
	queue<int> q;
	q.push(src);
	visited[src] = true;
	level[src] = 0;
	while (!q.empty()) {
		int parent = q.front();
		q.pop();
		for (int child : v[parent]) {
			if (!visited[child]) {
				q.push(child);
				visited[child] = true;
				level[child] = level[parent] + 1;
			}
		}
	}
}

int main() {
	int n, e;
	cin >> n >> e;
	while (e--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
    
    int l;
    cin >> l;
	memset(visited, false, sizeof(visited));
	memset(level, -1, sizeof(level));
	bfsTraversal(0);
	
	vector<int> result;
	for (int i = 0; i < n; i++) {
        if (level[i] == l) {
            result.push_back(i);
        }
	}
	
	sort(result.begin(), result.end(), greater<int>());
	for (int i : result) {
	    cout << i << " ";
	}

	return 0;
}



// Problem four
int main() {
	int n, e;
	cin >> n >> e;
	vector<int> v[n];
	while (e--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

    int node, count = 0;
    cin >> node;
	for (int i = 0; i < v[node].size(); i++) {
        count++; 
	}
	cout << count << endl;

	return 0;
}
