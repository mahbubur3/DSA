// Road construction
const int x = 100005;
int parent[x];
int groupSize[x];
int com, mx;

void dsuInitialize(int n) {
	for (int i = 0; i < n; i++) {
		parent[i] = -1;
		groupSize[i] = 1;
	}

	mx = INT_MIN;
	com = n;
}

int dsuFind(int node) {
	if (parent[node] == -1) {
		return node;
	} else {
		int leader = dsuFind(parent[node]);
		parent[node] = leader;
		return leader;
	}
}

void dsuUnionBySize(int node1, int node2) {
	int leaderA = dsuFind(node1);
	int leaderB = dsuFind(node2);
	
	if (leaderA == leaderB) {
		return;
	}

	if (groupSize[leaderA] > groupSize[leaderB]) {
		parent[leaderB] = leaderA;
		groupSize[leaderA] += groupSize[leaderB];
		mx = max(mx, groupSize[leaderA]);
	} else {
		parent[leaderA] = leaderB;
		groupSize[leaderB] += groupSize[leaderA];
		mx = max(mx, groupSize[leaderB]);
	}

	com--;
}

int main() {
	int n, m;
	cin >> n >> m;

	dsuInitialize(n);

	while (m--) {
		int a, b;
		cin >> a >> b;

		dsuUnionBySize(a, b);

		cout << com << " " << mx << endl;
	}

	return 0;
}






// Building roads
const int x = 100005;
int parent[x];
int groupSize[x];

void dsuInitialize(int n) {
	for (int i = 1; i <= n; i++) {
		parent[i] = -1;
		groupSize[i] = 1;
	}
}

int dsuFind(int node) {
	if (parent[node] == -1) {
		return node;
	} else {
		int leader = dsuFind(parent[node]);
		parent[node] = leader;
		return leader;
	}
}

void dsuUnionBySize(int node1, int node2) {
	int leaderA = dsuFind(node1);
	int leaderB = dsuFind(node2);

	if (groupSize[leaderA] > groupSize[leaderB]) {
		parent[leaderB] = leaderA;
		groupSize[leaderA] += groupSize[leaderB];
	} else {
		parent[leaderA] = leaderB;
		groupSize[leaderB] += groupSize[leaderA];
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	dsuInitialize(n);

	while (m--) {
		int a, b;
		cin >> a >> b;

		dsuUnionBySize(a, b);
	}

	vector<int> leaders;
	for (int i = 1; i <= n; i++) {
		if (parent[i] == -1) {
			leaders.push_back(i);
		}
	}

	cout << leaders.size() - 1 << endl;

	for (int i = 1; i < leaders.size(); i++) {
		cout << leaders[i - 1] << " " << leaders[i] << endl;
	}

	return 0;
}





// Labyrinth
bool is_visited[1005][1005];
int dis[1005][1005];
char grid[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m, si, sj, di, dj;

bool is_valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int si, int sj) {
	queue<pair<int, int>> q;
	q.push({si, sj});
	
	is_visited[si][sj] = true;
	dis[si][sj] = 0;

	while (!q.empty()) {
		pair<int, int> node = q.front();
		int x = node.first, y = node.second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ci = x + d[i].first;
			int cj = y + d[i].second;

			if (is_valid(ci, cj) && !is_visited[ci][cj] && grid[ci][cj] != '#') {
				q.push({ci, cj});

				is_visited[ci][cj] = true;
				dis[ci][cj] = dis[x][y] + 1;
				parent[ci][cj] = {x, y};
			}
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];

			if (grid[i][j] == 'A') {
				si = i;
				sj = j;
			} else if (grid[i][j] == 'B') {
				di = i;
				dj = j;
			}
		}
	}

	memset(is_visited, false, sizeof(is_visited));
	memset(dis, -1, sizeof(dis));

	bfs(si, sj);

	if (is_visited[di][dj]) {
		cout << "YES" << endl; // if visit
		cout << dis[di][dj] << endl; // show the distance of visit

		pair<int, int> p = {di, dj};
		vector<pair<int, int>> path;
		while (!(p.first == si && p.second == sj)) {
			path.push_back(p);
			p = parent[p.first][p.second];
		}
		path.push_back({si, sj});

		reverse(path.begin(), path.end());

		string ans = "";
		for (int i = 1; i < path.size(); i++) {
			if (path[i - 1].first == path[i].first) {
				if (path[i - 1].second + 1 == path[i].second) {
					ans += "R";
				} else {
					ans += "L";
				}
			} else {
				if (path[i - 1].first + 1 == path[i].first) {
					ans += "D";
				} else {
					ans += "U";
				}
			}
		}
		cout << ans << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}