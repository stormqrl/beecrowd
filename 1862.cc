#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1000;

vector<int> adj[MAX_N];
bool visited[MAX_N];
int component_id[MAX_N];
int component_size[MAX_N];
int N;
char relationMatrix[MAX_N][MAX_N];

void dfs(int u, int cid) {
  visited[u] = true;
  component_id[u] = cid;
  component_size[cid]++;
  for (int v : adj[u]) {
    if (!visited[v]) {
      dfs(v, cid);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  for (int i = 0; i < N; ++i) {
    string line;
    cin >> line;
    for (int j = 0; j < N; ++j) {
      relationMatrix[i][j] = line[j];
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      if (relationMatrix[i][j] == 'S') {
        adj[i].push_back(j);
        adj[j].push_back(i);
      }
    }
  }

  int cid = 0;
  for (int i = 0; i < N; ++i) {
    if (!visited[i]) {
      dfs(i, cid);
      cid++;
    }
  }

  bool inconsistent = false;
  for (int i = 0; i < N && !inconsistent; ++i) {
    for (int j = i + 1; j < N && !inconsistent; ++j) {
      if (relationMatrix[i][j] == 'D') {
        if (component_id[i] == component_id[j]) {
          inconsistent = true;
        }
      }
    }
  }

  if (inconsistent) {
    cout << -1 << endl;
  } else {
    vector<int> house_sizes;
    for (int i = 0; i < cid; ++i) {
      house_sizes.push_back(component_size[i]);
    }

    sort(house_sizes.rbegin(), house_sizes.rend());

    cout << house_sizes.size() << endl;
    for (size_t i = 0; i < house_sizes.size(); ++i) {
      if (i > 0) cout << " ";
      cout << house_sizes[i];
    }
    cout << endl;
  }

  return 0;
}
