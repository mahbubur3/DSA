// Problem one
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    
    int adj[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }

    for (int k = 0; k < n; k++) {
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
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}






// Problem 3
const int INF = 10000;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    
    int adj[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];

            if (adj[i][j] == -1 && i != j) {
                adj[i][j] = INF;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] + adj[k][j] < adj[i][j]) {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int max_short_dis = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && adj[i][j] < INF) {
                max_short_dis = max(max_short_dis, adj[i][j]);
            }
        }
    }

    cout << max_short_dis << endl;
}





// Problem two
class Edge {
public:
    int u, v, c;

    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int dis[105];

int main() {
    int n, e;
    cin >> n >> e;
    
    vector<Edge> edge_list;

    while (e--) {
        int u, v, c;
        cin >> u >> v >> c;
        edge_list.push_back(Edge(u - 1, v - 1, c));
    }

    for (int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (Edge ed : edge_list) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dis[i] == INT_MAX) {
            cout << 30000 << " ";
        } else {
            cout << dis[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
