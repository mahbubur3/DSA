#include <bits/stdc++.h>

using namespace std;


// Dectect cycle in undirected graph using BFS
const int n = 1e5 + 5;
bool is_visited[n];
vector<int> adj[n];
int parent_array[n];
bool is_cycle;

void bfs_traversal(int src) {
	queue<int> q;
	q.push(src);
	is_visited[src] = true;

	while (!q.empty()) {
		int parent_node = q.front();
		q.pop();

		for (int child_node : adj[parent_node]) {
			if (is_visited[child_node] && parent_array[parent_node] != child_node) {
				is_cycle = true;
			}

			if (!is_visited[child_node]) {
				is_visited[child_node] = true;
				parent_array[child_node] = parent_node;
				q.push(child_node);
			}
		}
	}
}

int main() {
	int node, edge;
	cin >> node >> edge;
	while (edge--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	memset(is_visited, false, sizeof(is_visited));
	memset(parent_array, false, sizeof(parent_array));
	is_cycle = false;

	for (int i = 0; i < node; i++) {
		if (!is_visited[i]) {
			bfs_traversal(i);
		}
	}

	if (is_cycle) {
		cout << "Cycle found" << endl;
	} else {
		cout << "Cycle not found" << endl;
	}

	return 0;
}






// Dectect cycle in undirected graph using DFS
const int n = 1e5 + 5;
bool is_visited[n];
vector<int> adj[n];
int parent_array[n];
bool is_cycle;

void dfs_traversal(int parent_node) {
    is_visited[parent_node] = true;
    for (int child_node : adj[parent_node]) {
        if (is_visited[child_node] && parent_array[parent_node] != child_node) {
			is_cycle = true;
		}
        
        if (!is_visited[child_node]) {
            parent_array[child_node] = parent_node;
            dfs_traversal(child_node);
        }
    }
}

int main() {
	int node, edge;
	cin >> node >> edge;
	while (edge--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	memset(is_visited, false, sizeof(is_visited));
	memset(parent_array, false, sizeof(parent_array));
	is_cycle = false;

	for (int i = 0; i < node; i++) {
		if (!is_visited[i]) {
			dfs_traversal(i);
		}
	}

	if (is_cycle) {
		cout << "Cycle found" << endl;
	} else {
		cout << "Cycle not found" << endl;
	}

	return 0;
}






// Dectect cycle in directed graph using DFS
const int n = 1e5 + 5;
bool is_visited[n];
vector<int> adj[n];
bool is_path_visited[n];
bool is_cycle;

void dfs_traversal(int parent_node) {
    is_visited[parent_node] = true;
    is_path_visited[parent_node] = true;
    
    for (int child_node : adj[parent_node]) {
        if (!is_path_visited[child_node]) {
            is_cycle = true;
        }
        
        if (!is_visited[child_node]) {
            dfs_traversal(child_node);
        }
    }
    
    is_path_visited[parent_node] = false;
}

int main() {
	int node, edge;
	cin >> node >> edge;
	while (edge--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	
	memset(is_visited, false, sizeof(is_visited));
	memset(is_path_visited, false, sizeof(is_path_visited));
	is_cycle = false;
	
	for (int i = 0; i < node; i++) {
	    if (!is_visited[i]) {
	        dfs_traversal(i);
	    }
	}
	
	if (is_cycle) {
	    cout << "Cycle found" << endl;
	} else {
	    cout << "Cycle not found" << endl;
	}
	
	return 0;
}


