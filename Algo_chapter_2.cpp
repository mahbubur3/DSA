#include <bits/stdc++.h>

using namespace std;

// BFS traversal
vector<int> v[1005];
bool visited[1005];
void bfs(int src) {
	queue<int> q;
	q.push(src);
	visited[src] = true;
	while (!q.empty()) {
		int parent = q.front();
		q.pop();
		cout << parent << " ";
		for (int child : v[parent]) {
			if (!visited[child]) {
				q.push(child);
				visited[child] = true;
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

	int src;
	cin >> src;
	memset(visited, false, sizeof(visited));
	bfs(src);

	return 0;
}




// BFS traversal with level tracking
vector<int> v[1005];
bool visited[1005];
int level[1005];
void bfs(int src) {
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

	int src;
	cin >> src;
	memset(visited, false, sizeof(visited));
	memset(level, -1, sizeof(level));
	bfs(src);
	for (int i = 0; i < n; i++) {
		cout << i << " " << level[i] << endl;
	}

	return 0;
}





// Path printing using BFS
vector<int> v[1005];
bool visited[1005];
int level[1005];
int parent[1005];
void bfs(int src) {
	queue<int> q;
	q.push(src);
	visited[src] = true;
	level[src] = 0;
	while (!q.empty()) {
		int p = q.front();
		q.pop();
		for (int child : v[p]) {
			if (!visited[child]) {
				q.push(child);
				visited[child] = true;
				level[child] = level[p] + 1;
				parent[child] = p;
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

	int src, des;
	cin >> src >> des;
	memset(visited, false, sizeof(visited));
	memset(level, -1, sizeof(level));
	memset(parent, -1, sizeof(parent));
	bfs(src);

	int x = des;
	vector<int> v2;
	while (x != -1) {
		v2.push_back(x);
		x = parent[x];
	}
	
	reverse(v2.begin(), v2.end());
	for (int i : v2) {
		cout << i << " ";
    }
    
	return 0;
}
