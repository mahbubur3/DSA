#include <bits/stdc++.h>

using namespace std;


// Dectect cycle in undirected graph using BFS
const int n = 1e5 + 5;
bool isVisited[n];
vector<int> adj[n];
int parentArray[n];
bool isCycle;

void bfs(int src) {
	queue<int> q;
	q.push(src);
	isVisited[src] = true;

	while (!q.empty()) {
		int parentNode = q.front();
		q.pop();

		for (int childNode : adj[parentNode]) {
			if (isVisited[childNode] && parentArray[parentNode] != childNode) {
				isCycle = true;
			}

			if (!isVisited[childNode]) {
				isVisited[childNode] = true;
				parentArray[childNode] = parentNode;
				q.push(childNode);
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

	memset(isVisited, false, sizeof(isVisited));
	memset(parentArray, false, sizeof(parentArray));
	isCycle = false;

	for (int i = 0; i < node; i++) {
		if (!isVisited[i]) {
			bfs(i);
		}
	}

	if (isCycle) {
		cout << "Cycle found" << endl;
	} else {
		cout << "Cycle not found" << endl;
	}

	return 0;
}






// Dectect cycle in undirected graph using DFS
const int n = 1e5 + 5;
bool isVisited[n];
vector<int> adj[n];
int parentArray[n];
bool isCycle;

void dfs(int parentNode) {
    isVisited[parentNode] = true;
    for (int childNode : adj[parentNode]) {
        if (isVisited[childNode] && parentArray[parentNode] != childNode) {
			isCycle = true;
		}
        
        if (!isVisited[childNode]) {
            parentArray[childNode] = parentNode;
            dfs(childNode);
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

	memset(isVisited, false, sizeof(isVisited));
	memset(parentArray, false, sizeof(parentArray));
	isCycle = false;

	for (int i = 0; i < node; i++) {
		if (!isVisited[i]) {
			dfs(i);
		}
	}

	if (isCycle) {
		cout << "Cycle found" << endl;
	} else {
		cout << "Cycle not found" << endl;
	}

	return 0;
}






// Dectect cycle in directed graph using DFS
const int n = 1e5 + 5;
bool isVisited[n];
vector<int> adj[n];
bool isPathVisited[n];
bool isCycle;

void dfs(int parentNode) {
    isVisited[parentNode] = true;
    isPathVisited[parentNode] = true;
    
    for (int childNode : adj[parentNode]) {
        if (!isPathVisited[childNode]) {
            isCycle = true;
        }
        
        if (!isVisited[childNode]) {
            dfs(childNode);
        }
    }
    
    isPathVisited[parentNode] = false;
}

int main() {
	int node, edge;
	cin >> node >> edge;
	while (edge--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	
	memset(isVisited, false, sizeof(isVisited));
	memset(isPathVisited, false, sizeof(isPathVisited));
	isCycle = false;
	
	for (int i = 0; i < node; i++) {
	    if (!isVisited[i]) {
	        dfs(i);
	    }
	}
	
	if (isCycle) {
	    cout << "Cycle found" << endl;
	} else {
	    cout << "Cycle not found" << endl;
	}
	
	return 0;
}
