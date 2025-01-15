#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void insertPos(stack<int>& st, int x) {
    if (st.empty() || st.top() > x) {
        st.push(x);
        return;
    }
    int t = st.top();
    st.pop();
    insertPos(st, x);
    st.push(t);
}

void sorted(stack<int>& st) {
    if (st.empty()) {
        return;
    }
    int t = st.top();
    st.pop();
    sorted(st);
    insertPos(st, t);
}

int main() {
    vector<int> input = {3, 2, 1, 4, 5};
    stack<int> st;

    for (int i : input) {
        st.push(i);
    }
    cout << "Input: ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    sorted(st);
    cout << "Output: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    input = {5, 4, 1, 2, 3};
    for (int i : input) {
        st.push(i);
    }
    cout << "Input: ";
    temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    sorted(st);
    cout << "Output: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}