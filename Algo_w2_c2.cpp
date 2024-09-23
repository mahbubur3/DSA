// Minimum knight moves
#include <bits/stdc++.h>

using namespace std;

bool is_visited[10][10];
int dis[10][10];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int row = 8, col = 8;

bool is_valid(int i, int j) {
	if (i < 0 || i >= row || j < 0 || j >= col) {
		return false;
	}
	return true;
}

void bfs_traversal(int src_i, int src_j) {
	queue<pair<int, int>> q;
	q.push({src_i, src_j});
	
	is_visited[src_i][src_j] = true;
	dis[src_i][src_j] = 0;

	while (!q.empty()) {
		pair<int, int> node = q.front();
		q.pop();

		for (int i = 0; i < 8; i++) {
			int cld_i = node.first + d[i].first;
			int cld_j = node.second + d[i].second;
			
			if (is_valid(cld_i, cld_j) && (!is_visited[cld_i][cld_j])) {
				q.push({cld_i, cld_j});
				is_visited[cld_i][cld_j] = true;
				dis[cld_i][cld_j] = dis[node.first][node.second] + 1;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string src, des;
		cin >> src >> des;

		int src_i, src_j, des_i, des_j;
		src_i = src[0] - 'a';
		src_j = src[1] - '1';
		des_i = des[0] - 'a';
		des_j = des[1] - '1';
		

		memset(is_visited, false, sizeof(is_visited));
		memset(dis, -1, sizeof(dis));
		bfs_traversal(src_i, src_j);

		cout << dis[des_i][des_j] << endl;;
	}

	return 0;
}






// Shortest routes
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const long long int INF = 1e18 + 5;

int main() {
	ll n, e, q;
	cin >> n >> e >> q;
	
	ll adj[n + 5][n + 5];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			adj[i][j] = INF;

			if (i == j) {
				adj[i][j] = 0;
			}
		}
	}

	while (e--) {
		int x, y, z;
		cin >> x >> y >> z;
		adj[x][y] = min(adj[x][y], z);
		adj[y][x] = min(adj[y][x], z);
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (adj[i][k] + adj[k][j] < adj[i][j]) {
					adj[i][j] = adj[i][k] + adj[k][j];
				}
			}
		}
	}

	while (q--) {
		int src, des;
		cin >> src >> des;

		if (adj[src][des] == INF) {
			cout << -1 << endl;
		} else {
			cout << adj[src][des] << endl;
		}
	}

	return 0;
}




// Problem three
class Solution {
public:
    vector<pair<int, int>> v[105];
    int dis[105];

    class cmp {
    public:
        bool operator()(pair<int, int> a, pair<int, int> b) {
            return a.second < b.second;
        }
    };

    void dijkstra_operation(int src) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        pq.push({src, 0});
        dis[src] = 0;
        while (!pq.empty()) {
            pair<int, int> parent = pq.top();
            pq.pop();

            int parent_node = parent.first, parent_cost = parent.second;
            for (pair<int, int> child : v[parent_node]) {
                int child_node = child.first, child_cost = child.second;
                if (parent_cost + child_cost < dis[child_node]) {
                    dis[child_node] = parent_cost + child_cost;
                    pq.push({child_node, dis[child_node]});
                }
            }
        }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for (auto x : times) {
            int s = x[0], d = x[1], w = x[2];
            v[s].push_back({d, w});
        }
        
        for (int i = 1; i <= n; i++) {
            dis[i] = INT_MAX;
        }

        dijkstra_operation(k);

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (dis[i] == INT_MAX) {
                return -1;
            }

            ans = max(ans, dis[i]);
        }

        return ans;
        }
};
