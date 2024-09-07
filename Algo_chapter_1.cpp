/*
Types of graph
1. undirected graph - has no direction
2. directed graph - has direction
3. unweighted graph - has no cost or number
4. weighted graph - has cost or number
4. cycle in graph - has cycle
*/


// Adjacency matrix - if i need to find connection instantly. with works with o(1)
int main() {
	int n, e;
	cin >> n >> e;
	int m[n][n];
	memset(m, 0, sizeof(m));
	while (e--) {
		int x, y;
		cin >> x >> y;
		m[x][y] = 1;
		m[y][x] = 1; // this line cannot apply for directed graph
	}

	// check applied or not
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}

    // check connection have or not
    if (m[0][3] == 1) {
        cout << "Connected" << endl;
    } else {
        cout << "Not connected" << endl;
    }

	return 0;
}

// adjacency matrix will check duita node er moddhe connection ache ki nai
// adjacency list will find duita noder er modde ke ke connected  

// Adjacency list (vector) - better than adjacency matrix

int main() {
	int n, e;
	cin >> n >> e;
	vector<int> v[n];
	while (e--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x); // this line cannot apply for directed graph
	}

    // showed who connected with 0
	for (int i = 0; i < v[0].size(); i++) {
		cout << v[0][i] << " ";
	}

	return 0;
}





// STL pair
int main() {
	pair<string, int> p;
	p = make_pair("mahbubur", 90);
	cout << p.first << " " << p.second << endl;

	return 0;
}




// Keep edge as a list using pair
int main() {
	int n, e;
	cin >> n >> e;
	vector<pair<int, int>> v;
	while (e--) {
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}

	// for (int i = 0; i < v.size(); i++) {
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }

	// for (pair<int, int> p : v) {
	// 	cout << p.first << " " << p.second << endl;
	// }

	for (auto p : v) { // shortcut of all above
		cout << p.first << " " << p.second << endl;
	}

	return 0;
}
