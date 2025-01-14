#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>>& intv) {
    if (intv.empty()) return {};
    sort(intv.begin(), intv.end());
    vector<pair<int, int>> res;
    res.push_back(intv[0]);
    for (int i = 1; i < intv.size(); i++) {
        if (intv[i].first <= res.back().second) {
            res.back().second = max(res.back().second, intv[i].second);
        } else {
            res.push_back(intv[i]);
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the no. of intervals: ";
    cin >> n;
    vector<pair<int, int>> intv(n);
    cout << "Enter the interval (start end) pairs: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> intv[i].first >> intv[i].second; 
    }
    vector<pair<int, int>> result = mergeIntervals(intv);
    cout << "res intervals: ";
    for (const auto& r : result) {
        cout << r.first << " " << r.second << " ";
    }
    cout << endl;
    return 0;
}
