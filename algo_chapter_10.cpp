// Disjoint Set Union (DSU) or Union-Find is a graph algorithm that is very useful in situations when you have to determine the connected components in a graph
// Find operation implementation
const int N = 1e5 + 5;
int parent[N];

void dsuInitialize(int n) {
	for (int i = 0; i < n; i++) {
		parent[i] = -1;
	}

	parent[1] = 3;
	parent[2] = 1;
}

int dsuFind(int node) {
	if (parent[node] == -1)
		return node;
	
	int leader = dsufind(parent(node));
	parent[node] = leader;

	return leader;
}

int main() {
	dsuInitialize(4);

	cout << find(0) << endl;
	cout << find(1) << endl;
	cout << find(2) << endl;
	cout << find(3) << endl;

	return 0;
}






// union by size
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
	dsuInitialize(7);

	// Create group
	dsuUnionBySize(1, 2);
	dsuUnionBySize(2, 3);
	dsuUnionBySize(4, 5);
	dsuUnionBySize(5, 6);

	cout << dsuFind(1) << endl; // Show leader of 1
	cout << dsuFind(4) << endl; // Show leader of 4

	return 0;
}





// union by rank/level
const int N = 1e5 + 5;
int parent[N], groupSize[N], level[N];

void dsuInitialize(int n) {
	for (int i = 0; i < n; i++) {
		parent[i] = -1;
		level[i] = 0;
	}
}

int dsuFind(int node) {
	if (parent[node] == -1)
		return node;
	
	int leader = dsuFind(parent(node));
	parent[node] = leader;

	return leader;
}

void dsuUnionByRank(int node1, int node2) {
	int leaderA = dsuFind(node1);
	int leaderB = dsuFind(node2);
	
	if (level[leaderA] > level[leaderB]) {
		parent[leaderB] = leaderA;
	} else if (level[leaderB] > level[leaderA]) {
		parent[leaderA] = leaderB;
	} else {
		parent[leaderA] = leaderB;
		level[leaderB]++;
	}
}

int main() {
	dsuInitialize(7);

	dsuUnionByRank(1, 2);
	dsuUnionByRank(2, 3);
	dsuUnionByRank(4, 5);
	dsuUnionByRank(5, 6);

	cout << dsuFind(1) << endl;
	cout << dsuFind(4) << endl;

	return 0;
}