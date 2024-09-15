// DFS - Depth First Search
// BFS shortest path dhore jay ar DFS randomly jay
// Inplementation DFS
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
void dfs(int src) {
	cout << src << " ";
	vis[src] = true;
	for (int cld : v[src]) {
		if (!vis[cld]) {
			dfs(cld);
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

	memset(vis, false, sizeof(vis));
	dfs(0);

	return 0;
}




// Notes 2D
/* Right: i j+1 -> 0 1
Left: i j-1 -> 0 -1
Up: i-1 j -> -1 0
Down: i+1 j -> 1 0
Right up corner: i-1 j+1 -> -1 1
Left up corner: i-1 j-1 -> -1 -1
Right down corner: i+1 j+1 -> 1 1
Left down corner: i+1 j-1 -> 1 -1 */
// DFS implementation on 2D Grid
char arr[20][20];
bool vis[20][20];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;
bool is_valid(int i, int j) {
	if (i < 0 || i >= r || j < 0 || j >= c) {
		return false;
	}
	return true;
}

void dfs(int src_i, int src_j) {
	cout << src_i << " " << src_j << endl;
	vis[src_i][src_j] = true;
	for (int i = 0; i < 4; i++) {
		int cld_i = src_i + v[i].first;
		int cld_j = src_j + v[i].second;
		if (is_valid(cld_i, cld_j) && (!vis[cld_i][cld_j])) {
			dfs(cld_i, cld_j);
		}
	}
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	int src_i, src_j;
	cin >> src_i >> src_j;
	memset(vis, false, sizeof(vis));
	dfs(src_i, src_j);

	return 0;
}



// BFS implementation on 2D grid (Print)
bool vis[20][20];
int dis[20][20];
char arr[20][20];
vector<pair<int, int>> vec = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;
bool is_valid(int i, int j) {
	if (i < 0 || i >= r || j < 0 || j >= c) {
		return false;
	}
	return true;
}

void bfs_traversal(int src_i, int src_j) {
	queue<pair<int, int>> q;
	q.push(src_i, src_i);
	vis[src_i][src_j] = true;

	while (!q.empty()) {
		pair<int, int> par = q.front();
		q.pop();
		cout << par.first << " " << par.second << endl;

		for (int i = 0; i < 4; i++) {
			int cld_i = par.first + vec[i].first;
			int cld_j = par.second + vec[i].second;
			if (is_valid(cld_i, cld_j) && (!vis[cld_i][cld_j])) {
				q.push({cld_i, cld_j});
				vis[cld_i][cld_j] = true;
				dis[cld_i][cld_j] = dis[par.first][par.second] + 1;
			}
		}
	}
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	memset(vis, false, sizeof(vis));
	memset(dis, -1, sizeof(dis));
	bfs_traversal(src_i, src_j);

	return 0;
}




// BFS implementation on 2D grid (shortest distance)
bool vis[20][20];
int dis[20][20];
char arr[20][20];
vector<pair<int, int>> vec = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;
bool is_valid(int i, int j) {
	if (i < 0 || i >= r || j < 0 || j >= c) {
		return false;
	}
	return true;
}

void bfs_traversal(int src_i, int src_j) {
	queue<pair<int, int>> q;
	q.push({src_i, src_i});
	vis[src_i][src_j] = true;
	dis[src_i][src_j] = 0;

	while (!q.empty()) {
		pair<int, int> par = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int cld_i = par.first + vec[i].first;
			int cld_j = par.second + vec[i].second;
			
			if (is_valid(cld_i, cld_j) && (!vis[cld_i][cld_j])) {
				q.push({cld_i, cld_j});
				vis[cld_i][cld_j] = true;
				dis[cld_i][cld_j] = dis[par.first][par.second] + 1;
			}
		}
	}
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	int src_i, src_j;
	cin >> src_i >> src_j;

	memset(vis, false, sizeof(vis));
	memset(dis, -1, sizeof(dis));
	bfs_traversal(src_i, src_j);
	
	cout << dis[3][3];

	return 0;
}




// Components
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void dfs(int src) {
	cout << src << " ";
	vis[src] = true;

	for (int cld : v[src]) {
		if (!vis[cld]) {
			dfs(cld);
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

	memset(vis, false, sizeof(vis));

	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
			dfs(i);
		}
	}

	return 0;
}

