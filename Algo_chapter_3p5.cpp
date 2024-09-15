// Problem one
class Solution {
public:
    void dfs(int src, vector<int> adj[], vector<bool>& vis, vector<int>& result) {
        vis[src] = true;
        result.push_back(src);
        
        for (int cld : adj[src]) {
            if (!vis[cld]) {
                dfs(cld, adj, vis, result);
            }
        }
    }
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int> result;
        vector<bool> vis(v, false);
        dfs(0, adj, vis, result);
        return result;
    }
};





// Custom problem 1
vector<int> v[1001];
bool is_visited[1001];
void dfs_traversal(int src, int& count) {
    is_visited[src] = true;
    count++;
    for (int cld : v[src]) {
        if (!is_visited[cld]) {
            dfs_traversal(cld, count);
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
    
    memset(is_visited, false, sizeof(is_visited));
    
    int count = 0;
    dfs_traversal(src, count);
    cout << count << endl;

    return 0;
}




// Custom problem 2
vector<int> v[1001];
bool is_visited[1001];
void dfs_traversal(int src) {
    is_visited[src] = true;
    for (int cld : v[src]) {
        if (!is_visited[cld]) {
            dfs_traversal(cld);
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

    memset(is_visited, false, sizeof(is_visited));
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!is_visited[i]) {
            dfs_traversal(i);
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}






// Custom problem 3
vector<int> v[1001];
bool is_visited[1001];
int dfs_traversal(int src) {
    is_visited[src] = true;
    int count = 1;
    
    for (int cld : v[src]) {
        if (!is_visited[cld]) {
            count = count + dfs_traversal(cld);
        }
    }
    
    return count;
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

    memset(is_visited, false, sizeof(is_visited));
    
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (!is_visited[i]) {
            int total_components = dfs_traversal(i);
            result.push_back(total_components);
        }
    }
    
    sort(result.begin(), result.end());
    
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
