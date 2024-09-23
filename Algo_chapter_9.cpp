// Problem one
class Solution {
public:
    bool isVisited[105][105];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int n, m, ans;

    bool isValid(int cI, int cJ) {
        return cI >= 0 && cI < n && cJ >= 0 && cJ < m;
    }

    void dfs(int sI, int sJ, vector<vector<int>>& grid) {
        isVisited[sI][sJ] = true;

        for (int i = 0; i < 4; i++) {
            int cI = sI + d[i].first;
            int cJ = sJ + d[i].second;

            if (isValid(cI, cJ)) {
                if (grid[cI][cJ] == 0) {
                    ans++;
                }
            } else {
                ans++;
            }

            if (isValid(cI, cJ) && !isVisited[cI][cJ] && grid[cI][cJ] == 1) {
                dfs(cI, cJ, grid);
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        memset(isVisited, false, sizeof(isVisited));
        
        ans = 0;
        n = grid.size();
        m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!isVisited[i][j] && grid[i][j] == 1) {
                    dfs(i, j, grid);
                }
            }
        }

        return ans;
    }
};




// Problem two
class Solution {
public:
    vector<int> adj[200005];
    bool isVisited[200005];

    void dfs(int src) {
        isVisited[src] = true;

        for (auto cld : adj[src]) {
            if (!isVisited[cld]) {
                dfs(cld);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(isVisited, false, sizeof(isVisited));

        for (int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        dfs(source);

        // if (isVisited[destination]) {
        //     return true;
        // } else {
        //     return false;
        // }

        return isVisited[destination];
    }
};





// Problem three
class Solution {
public:
    bool isVisited[55][55];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int ans, n, m;

    bool isValid(int cI, int cJ) {
        return cI >= 0 && cI < n && cJ >= 0 && cJ < m;
    }

    void dfs(int sI, int sJ, vector<vector<int>>& grid) {
        isVisited[sI][sJ] = true;
        ans++;

        for (int i = 0; i < 4; i++) {
            int cI = sI + d[i].first;
            int cJ = sJ + d[i].second;

            if (isValid(cI, cJ) && !isVisited[cI][cJ] && grid[cI][cJ] == 1) {
                dfs(cI, cJ, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        memset(isVisited, false, sizeof(isVisited));

        n = grid.size();
        m = grid[0].size();
        int mx = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!isVisited[i][j] && grid[i][j] == 1) {
                    ans = 0;

                    dfs(i, j, grid);
                    
                    mx = max(mx, ans);
                }
            }
        }

        return mx;
    }
};





// Problem four
class Solution {
public:
    int n, m;
    bool isVisited[305][305];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    bool isValid(int cI, int cJ) {
        return cI >= 0 && cI < n && cJ >= 0 && cJ < m;
    }

    void dfs(int sI, int sJ) {
        isVisited[sI][sJ] = true;

        for (int i = 0; i < 4; i++) {
            int cI = sI + d[i].first;
            int cJ = sJ + d[i].second;

            if (isValid(cI, cJ) && (!isVisited[cI][cJ]) && grid[cI][cJ] == '1') {
                dfs(cI, cJ, grid);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        memset(isVisited, false, sizeof(isVisited));

        n = grid.size();
        m = grid[0].size();

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!isVisited[i][j] && grid[i][j] == '1') {
                    dfs(i, j, grid);
                    ans++;
                }
            }
        }

        return ans;
    }
}





// Problem five
class Solution {
public:
    int n, m, ans;
    bool isVisited[505][505];
    bool flag;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    bool isValid(int cI, int cJ) {
        return cI >= 0 && cI < n && cJ >= 0 && cJ < m;
    }

    void dfs(int sI, int sJ, vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        isVisited[sI][sJ] = true;

        if (grid1[sI][sJ] == 0) {
            flag = false;
        }

        for (int i = 0; i < 4; i++) {
            int cI = sI + d[i].first;
            int cJ = sJ + d[i].second;

            if (isValid(cI, cJ) && !isVisited[cI][cJ] && grid2[cI][cJ] == 1) {
                dfs(cI, cJ, grid1, grid2);
            }
        }
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        memset(isVisited, false, sizeof(isVisited));
        
        n = grid2.size();
        m = grid2[0].size();
        ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!isVisited[i][j] && grid2[i][j] == 1) {
                    flag = true;

                    dfs(i, j, grid1, grid2);

                    if (flag == true) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};





// Problem six
class Solution {
public:
    int n, m;
    bool isVisited[105][105], flag;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    bool isValid(int cI, int cJ) {
        return cI >= 0 && cI < n && cJ >= 0 && cJ < m;
    }

    void dfs(int sI, int sJ, vector<vector<int>>& grid) {
        isVisited[sI][sJ] = true;

        if (sI == 0 || sI == n - 1 || sJ == 0 || sJ == m - 1) {
            flag = false;
        }

        for (int i = 0; i < 4; i++) {
            int cI = sI + d[i].first;
            int cJ = sJ + d[i].second;

            if (isValid(cI, cJ) && !isVisited[cI][cJ] && grid[cI][cJ] == 0) {
                dfs(cI, cJ, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        memset(isVisited, false, sizeof(isVisited));

        n = grid.size(), m = grid[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!isVisited[i][j] && grid[i][j] == 0) {
                    flag = true;

                    dfs(i, j, grid);

                    if (flag == true) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};
