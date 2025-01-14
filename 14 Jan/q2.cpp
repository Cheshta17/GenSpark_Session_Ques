#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Rooms(vector<pair<int, int>>& intv) {
    if (intv.empty()) return 0;
    vector<int> s, e;
    for (auto& v : intv) {
        s.push_back(v.first);
        e.push_back(v.second);
    }
    sort(s.begin(), s.end());
    sort(e.begin(), e.end());

    int cnt = 0, pnt = 0;
    for (int i = 0; i < intv.size(); i++) {
        if (s[i] >= e[pnt]) {
            pnt++; 
        } else {
            cnt++; 
        }
    }
    return cnt + 1;
}

int main() {
    int n;
    cout << "Enter the no. of meetings: ";
    cin >> n; 
    vector<pair<int, int>> intv(n);
    cout << "Enter the intv (start end) pairs for the meetings: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> intv[i].first >> intv[i].second;
    }
    int res = Rooms(intv);
    cout << "Minimum number of rooms required: " << res << endl;
    return 0;
}