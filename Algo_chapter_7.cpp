// Bellman Ford Algorithm Implementation find shortest path
class Edge {
public:
	int u, v, c;

	Edge (int u, int v, int c) {
		this->u = u;
		this->v = v;
		this->c = c;
	}
};

int dis[10005];

int main() {
	int n, e;
	cin >> n >> e;
	
	vector<Edge> edge_list;

	while (e--) {
		int u, v, c;
		cin >> u >> v >> c;
		edge_list.push_back(Edge(u, v, c));
	}

	for (int i = 0; i < n; i++) {
		dis[i] = INT_MAX;
	}

	dis[0] = 0;

	for (int i = 0; i < n - 1; i++) {
		for (Edge ed : edge_list) {
			int u, v, c;
			u = ed.u;
			v = ed.v;
			c = ed.c;

			if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
				dis[v] = dis[u] + c;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " - "<< dis[i] << " " << endl;
	}

	return 0;
}







// Negative cycle dected with Bellman Ford algorithm (directed & undirected)
class Edge {
public:
	int u, v, c;

	Edge (int u, int v, int c) {
		this->u = u;
		this->v = v;
		this->c = c;
	}
};

int dis[10005];

int main() {
	int n, e;
	cin >> n >> e;
	
	vector<Edge> edge_list;

	while (e--) {
		int u, v, c;
		cin >> u >> v >> c;
		edge_list.push_back(Edge(u, v, c));
		// edge_list.push_back(Edge(v, u, c)); // For undirected graph
	}

	for (int i = 0; i < n; i++) {
		dis[i] = INT_MAX;
	}

	dis[0] = 0;

	for (int i = 0; i < n - 1; i++) {
		for (Edge ed : edge_list) {
			int u, v, c;
			u = ed.u;
			v = ed.v;
			c = ed.c;

			if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
				dis[v] = dis[u] + c;
			}
		}
	}

	bool is_cycle = false;
	for (Edge ed : edge_list) {
			int u, v, c;
			u = ed.u;
			v = ed.v;
			c = ed.c;

			if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
				is_cycle = true;
				break;
			}
		}

	if (is_cycle) {
		cout << "Cycle found" << endl;
	} else {
		for (int i = 0; i < n; i++) {
			cout << i << " - "<< dis[i] << " " << endl;
		}
	}

	return 0;
}







// Floyd Warshall algorithm inplementaion - 
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	ll n, e;
	cin >> n >> e;
	
	ll adj[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < e; j++) {
			adj[i][j] = INT_MAX; // set infinity

			if (i == j) {
				adj[i][j] = 0;
			}
		}
	}

	while (e--) {
		int x, y, z;
		cin >> x >> y >> z;
		adj[x][y] = z;
	}

	for (int k = 0; k < n; k++) { // set middle number
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (adj[i][k] + adj[k][j] < adj[i][j]) {
					adj[i][j] = adj[i][k] + adj[k][j];
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (adj[i][j] == INT_MAX) {
				cout << "INF";
			} else {
				cout << adj[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}







// Dected cycle
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	ll n, e;
	cin >> n >> e;
	
	ll adj[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < e; j++) {
			adj[i][j] = INT_MAX; // set infinity

			if (i == j) {
				adj[i][j] = 0;
			}
		}
	}

	while (e--) {
		int x, y, z;
		cin >> x >> y >> z;
		adj[x][y] = z;
	}

	for (int k = 0; k < n; k++) { // set middle number
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (adj[i][k] + adj[k][j] < adj[i][j]) {
					adj[i][j] = adj[i][k] + adj[k][j];
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (adj[i][i] < 0) {
			cout << "Cycle found" << endl;
			break;
		}
	}

	return 0;
}
