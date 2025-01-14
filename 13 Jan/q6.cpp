#include <iostream>
using namespace std;

int calDist(int stk) {
    int c = 0;
    while (stk > 0) {
        if (stk % 2 == 0) {
            stk /= 2; 
        } else {
            stk -= 1; 
        }
        c++; 
    }
    return c;
}

int main() {
    int stk;
    cout << "Enter the stk value: ";
    cin >> stk;
    int result = calDist(stk);
    cout << "Number of distributions: " << result << endl;
    return 0;
}

