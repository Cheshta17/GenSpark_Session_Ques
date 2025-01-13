/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double findArea(vector<int>& b, vector<int>& h) {
    double maxi = 0.0;

    for (size_t i = 0; i < b.size(); ++i) {
        double ar = (b[i] * h[i]) / 2.0;
        maxi = max(maxi, ar);
    }

    return maxi;
}

int main() {
    int n;
    cout << "Enter no. of triangles: ";
    cin >> n;

    vector<int> b(n), h(n);

    cout << "Enter b: ";
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << "Enter h: ";
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    double res = findArea(b, h);

    cout << "The largest truss area is: " << fixed << setprecision(6) << res << endl;
    return 0;
}

