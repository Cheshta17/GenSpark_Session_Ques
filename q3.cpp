/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPerfectCube(int n) {
    int c = round(cbrt(n));
    return c * c * c == n;
}

int cnt(const vector<int>& dim) {
    int count = 0;
    for (int d : dim) {
        if (isPerfectCube(d)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the no. of dim: ";
    cin >> n;

    vector<int> dim(n);
    cout << "Enter the dim: ";
    for (int i = 0; i < n; ++i) {
        cin >> dim[i];
    }

    int result = cnt(dim);
    cout << "Total perfect cubes: " << result << endl;

    return 0;
}
