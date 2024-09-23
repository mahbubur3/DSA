#include <bits/stdc++.h>

using namespace std;

// Count country using 2D DFS traversal
bool is_visited[1001][1001];
char graph[1001][1001];
int arr_i[4] = {-1, 0, 1, 0};
int arr_j[4] = {0, 1, 0, -1};
int r, c;

bool is_valid(int i, int j) {
	if (i >=0 && i < r && j >= 0 && j < c && graph[i][j] == '.') {
		return true;
	}
	return false;
}

void dfs_traversal(int src_i, int src_j) {
	is_visited[src_i][src_j] = true;
	for (int i = 0; i < 4; i++) {
		int cld_i = src_i + arr_i[i]; // Row of children 
		int cld_j = src_j + arr_j[i]; // Column of children
		
		if (is_valid(cld_i, cld_j) && (!is_visited[cld_i][cld_j]) ) {
			dfs_traversal(cld_i, cld_j);
		}
	}
}


int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> graph[i][j];
		}
	}

	// dfs_traversal(0, 0);
	// cout << vis[1][1]; // Check visit or not

	int count = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (graph[i][j] == '.' && (!is_visited[i][j])) {
				dfs_traversal(i, j);
				count++;
			}
		}
	}

	cout << "Number of country: " << count << endl; 

	return 0;
}







// Is visit posible or not
bool is_visited[1001][1001];
char graph[1001][1001];
int arr_i[4] = {-1, 0, 1, 0};
int arr_j[4] = {0, 1, 0, -1};
int r, c;

bool is_valid(int i, int j) {
	if (i >=0 && i < r && j >= 0 && j < c && graph[i][j] == '.') {
		return true;
	}
	return false;
}

void dfs_traversal(int src_i, int src_j) {
	is_visited[src_i][src_j] = true;
	for (int i = 0; i < 4; i++) {
		int cld_i = src_i + arr_i[i]; // Row of children 
		int cld_j = src_j + arr_j[i]; // Column of children
		
		if (is_valid(cld_i, cld_j) && (!is_visited[cld_i][cld_j]) ) {
			dfs_traversal(cld_i, cld_j);
		}
	}
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> graph[i][j];
		}
	}

	// int count = 0;
	// for (int i = 0; i < r; i++) {
	// 	for (int j = 0; j < c; j++) {
	// 		if (graph[i][j] == '.' && (!is_visited[i][j])) {
	// 			dfs_traversal(i, j);
	// 			count++;
	// 		}
	// 	}
	// }

	int src_i, src_j, des_i, des_j;
	cin >> src_i >> src_j;
	cin >> des_i >> des_j;
	dfs_traversal(src_i, src_j);

	if (is_visited[des_i][des_j]) {
		cout << "visit possible" << endl;
	} else {
		cout << "visit not possible" << endl;
	}

	return 0;
}





// Shortest path find
bool is_visited[1001][1001];
char graph[1001][1001];
int arr_i[4] = {-1, 0, 1, 0};
int arr_j[4] = {0, 1, 0, -1};
int r, c;

bool is_valid(int i, int j) {
	if (i >=0 && i < r && j >= 0 && j < c && graph[i][j] == '.') {
		return true;
	}
	return false;
}

int level[1001][1001];

void bfs_traversal(int src_i, int src_j) {
	queue<pair<int, int>> q;
	q.push({src_i, src_j});
	is_visited[src_i][src_j] = true;

	while (!q.empty()) {
		pair<int, int> node = q.front();
		q.pop();
		int node_row = node.first;
		int node_column = node.second;

		for (int i = 0; i < 4; i++) {

		}
	}
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> graph[i][j];
		}
	}

	// int count = 0;
	// for (int i = 0; i < r; i++) {
	// 	for (int j = 0; j < c; j++) {
	// 		if (graph[i][j] == '.' && (!is_visited[i][j])) {
	// 			dfs_traversal(i, j);
	// 			count++;
	// 		}
	// 	}
	// }

	int src_i, src_j, des_i, des_j;
	cin >> src_i >> src_j;
	cin >> des_i >> des_j;
	dfs_traversal(src_i, src_j);

	if (is_visited[des_i][des_j]) {
		cout << "visit possible" << endl;
	} else {
		cout << "visit not possible" << endl;
	}

	return 0;
}
