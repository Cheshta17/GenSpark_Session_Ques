#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPerfectCube(int n) {
    int c = round(cbrt(n));
    return c * c * c == n;
}

int findAddAmt(int tot) {
    int nxtc = pow(round(cbrt(tot)) + 1, 3);
    return nxtc - tot;
}

int main() {
    int n;
    cout << "Enter the no. of products: ";
    cin >> n;

    vector<int> pr(n);
    cout << "Enter the pr of the products: ";
    for (int i = 0; i < n; ++i) {
        cin >> pr[i];
    }

    int tot = 0;
    for (int p : pr) {
        tot += p;
    }

    if (isPerfectCube(tot)) {
        cout << "Yes" << endl;
    } else {
        int AddAmt = findAddAmt(tot);
        cout << AddAmt << endl;
    }

    return 0;
}
