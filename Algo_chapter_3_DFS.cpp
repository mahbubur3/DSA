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

bool isValid(int i, int j) {
	if (i < 0 || i >= r || j < 0 || j >= c) {
		return false;
	}
	return true;
}

void dfs(int sI, int sJ) {
	cout << sI << " " << sJ << endl;
	vis[sI][sJ] = true;
	
	for (int i = 0; i < 4; i++) {
		int cI = sI + v[i].first;
		int cJ = sJ + v[i].second;
		if (isValid(cI, cJ) && (!vis[cI][cJ])) {
			dfs(cI, cJ);
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

	int sI, sJ;
	cin >> sI >> sJ;
	
	memset(vis, false, sizeof(vis));
	
	dfs(sI, sJ);

	return 0;
}



// BFS implementation on 2D grid (Print)
bool vis[20][20];
int dis[20][20];
char arr[20][20];
vector<pair<int, int>> vec = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;

bool isValid(int i, int j) {
	if (i < 0 || i >= r || j < 0 || j >= c) {
		return false;
	}
	return true;
}

void bfsTraversal(int sI, int sJ) {
	queue<pair<int, int>> q;
	q.push(sI, sI);
	vis[sI][sJ] = true;

	while (!q.empty()) {
		pair<int, int> par = q.front();
		q.pop();
		cout << par.first << " " << par.second << endl;

		for (int i = 0; i < 4; i++) {
			int cI = par.first + vec[i].first;
			int cJ = par.second + vec[i].second;
			if (isValid(cI, cJ) && (!vis[cI][cJ])) {
				q.push({cI, cJ});
				vis[cI][cJ] = true;
				dis[cI][cJ] = dis[par.first][par.second] + 1;
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
	
	bfsTraversal(sI, sJ);

	return 0;
}




// BFS implementation on 2D grid (shortest distance)
bool vis[20][20];
int dis[20][20];
char arr[20][20];
vector<pair<int, int>> vec = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int r, c;

bool isValid(int i, int j) {
	if (i < 0 || i >= r || j < 0 || j >= c) {
		return false;
	}
	return true;
}

void bfs(int sI, int sJ) {
	queue<pair<int, int>> q;
	q.push({sI, sI});
	vis[sI][sJ] = true;
	dis[sI][sJ] = 0;

	while (!q.empty()) {
		pair<int, int> par = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int cI = par.first + vec[i].first;
			int cJ = par.second + vec[i].second;
			if (isValid(cI, cJ) && (!vis[cI][cJ])) {
				q.push({cI, cJ});
				vis[cI][cJ] = true;
				dis[cI][cJ] = dis[par.first][par.second] + 1;
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

	int sI, sJ;
	cin >> sI >> sJ;

	memset(vis, false, sizeof(vis));
	memset(dis, -1, sizeof(dis));
	
	bfs(sI, sJ);
	
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

