// Dijkstra Naive version emplementation (BFS)
const int N = 100;
vector<pair<int, int>> v[N]; // one is node, another is cost or weight
int des[N];

void dijkstra(int src) {
	queue<pair<int, int>> q;
	q.push({src, 0});
	des[src] = 0;

	while (!q.empty()) {
		pair<int, int> parent = q.front();
		q.pop();

		int parentNode = parent.first, parentCost = parent.second;
		for (pair<int, int> child : v[parentNode]) {
			int childNode = child.first, childCost = child.second;
			if (parentCost + childCost < des[childNode]) {
				des[childNode] = parentCost + childCost; // Path relax
				q.push({childNode, des[childNode]});
			}
		}
	}
}

int main() {
	int n, e;
	cin >> n >> e;
	while (e--) {
		int x, y, z;
		cin >> x >> y >> z;
		v[x].push_back({y, z});
		v[y].push_back({x, z});
	}

	for (int i = 0; i < n; i++) {
		des[i] = INT_MAX;
	}

	dijkstra(0);

	// Print
	for (int i = 0; i < n; i++) {
		cout << i << " - " << des[i] << endl;
	}

	return 0;
}







// Dijkstra optimized version emplementation (BFS)
cont int N = 100;
vector<pair<int, int>> v[N]; // one is node, another is cost or weight
int des[N];

class cmp {
public:
	bool operator()(pair<int, int> a, pair<int, int> b) {
		return a.second < b.second;
	}
}

void dijkstra(int src) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
	pq.push({src, 0});
	des[src] = 0;
	while (!pq.empty()) {
		pair<int, int> parent = pq.front();
		pq.pop();

		int parentNode = parent.first, parentCost = parent.second;
		for (pair<int, int> child : v[parentNode]) {
			int childNode = child.first, childCost = child.second;
			
			if (parentCost + childCost < des[childNode]) {
				des[childNode] = parentCost + childCost; // Path relax
				q.push({childNode, des[childNode]});
			}
		}
	}
}

int main() {
	int n, e;
	cin >> n >> e;
	while (e--) {
		int x, y, z;
		cin >> x >> y >> z;
		v[x].push_back({y, z});
		v[y].push_back({x, z});
	}

	for (int i = 0; i < n; i++) {
		des[i] = INT_MAX;
	}

	dijkstra(0);

	// Print
	for (int i = 0; i < n; i++) {
		cout << i << "->" << des[i] << endl;
	}

	return 0;
}
