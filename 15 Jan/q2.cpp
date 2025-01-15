#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void revKelements(queue<int>& q, int K) {
    stack<int> s;
    for (int i = 0; i < K; i++) {
        if (!q.empty()) {
            s.push(q.front());
            q.pop();
        }
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    int rem = q.size() - K;
    for (int i = 0; i < rem; i++) {
        q.push(q.front());
        q.pop();
    }
}

void printQ(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    int K, n, value;
    cout << "Enter the no. of elements in the queue: ";
    cin >> n;
    cout << "Enter the elements of the queue: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        q.push(value);
    }
    cout << "Enter the value of K: ";
    cin >> K;
    revKelements(q, K);
    cout << "Modified Queue: ";
    printQ(q);
    return 0;
}
