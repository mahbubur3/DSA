// Cycle detection using DSU [Note: DSU only dectec cycle in undirected graph]
const int x = 1e5 + 5;
int parent[x];
int groupSize[x];

void dsuInitialize(int n) {
	for (int i = 0; i < n; i++) {
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
	int n, e;
	cin >> n >> e;
	
	dsuInitialize(n);
	
	bool isCycle;
	while (e--) {
		int a, b;
		cin >> a >> b;
		
		int leaderA = dsuFind(a);
		int leaderB = dsuFind(b);

		if (leaderA == leaderB) {
			isCycle = true;
		} else {
			dsuUnionBySize(a, b);
		}
	}

	if (isCycle) {
		cout << "Cycle found" << endl;
	} else {
		cout << "Cycle not found" << endl;
	}

	return 0;
}




// Kruskas's algorithm for MST (Minimum Spanning Tree - when you need to connect node with low level of total cost)
const int x = 1e5 + 5;
int parent[x];
int groupSize[x];

void dsuInitialize(int n) {
	for (int i = 0; i < n; i++) {
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

class Edge {
public:
	int u, v, w;

	Edge(int u, int v, int w) {
		this->u = u;
		this->v = v;
		this->w = w;
	}
};

bool cmp(Edge a, Edge b) {
	return a.w < b.w;
}

int main() {
	int n, e;
	cin >> n >> e;

	dsuInitialize(n);
	vector<Edge> edgeList;

	while (e--) {
		int u, v, w;
		cin >> u >> v >> w;
		edgeList.push_back(Edge(u, v, w));
	}

	sort(edgeList.begin(), edgeList.end(), cmp);

	int totalCost = 0;
	for (Edge ed : edgeList) {
		int leaderU = dsuUnionBySize(ed.u);
		int leaderV = dsuUnionBySize(ed.v);

		if (leaderU == leaderV) {
			continue;
		} else {
			dsuUnionBySize(ed.u, ed.v);

			totalCost += ed.w;
		}
	}

	cout << totalCost << endl;

	return 0;
}