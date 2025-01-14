#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool topologicalSort(int n, vector<vector<int>>& task, vector<int>& deg, vector<int>& res) {
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (deg[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        res.push_back(x);
        for (int t : task[x]) {
            --deg[t];
            if (deg[t] == 0) {
                q.push(t);
            }
        }
    }
    return res.size() == n;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> task(n + 1);
    vector<int> deg(n + 1, 0);
    vector<int> res;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        task[a].push_back(b);
        deg[b]++;
    }
    if (topologicalSort(n, task, deg, res)) {
        for (int task : res) {
            cout << task << " ";
        }
        cout << endl;
    } else {
        cout << "Impossible to complete all tasks" << endl;
    }
    return 0;
}
