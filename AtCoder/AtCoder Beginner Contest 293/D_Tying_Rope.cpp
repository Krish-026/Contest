#include <bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }
    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }
    void unite(int u, int v) {
        int root_u = find(u), root_v = find(v);
        if (root_u == root_v) {
            return;
        }
        if (rank[root_u] < rank[root_v]) {
            parent[root_u] = root_v;
        } else if (rank[root_u] > rank[root_v]) {
            parent[root_v] = root_u;
        } else {
            parent[root_v] = root_u;
            rank[root_u]++;
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    DSU ds(n * 2);

    int numCycles = 0, numNonCycles = 0;
    for (int i = 0; i < m; i++) {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        a--, c--;
        int u = a * 2 + (b == 'R' ? 1 : 0);
        int v = c * 2 + (d == 'R' ? 1 : 0);
        if (ds.find(u) == ds.find(v)) {
            numCycles++;
        } else {
            ds.unite(u, v);
            numNonCycles++;
        }
    }

    int numGroups = 0;
    for (int i = 0; i < n * 2; i++) {
        if (ds.find(i) == i) {
            numGroups++;
        }
    }

    cout << numCycles << " " << numGroups - numCycles << endl;

    return 0;
}
