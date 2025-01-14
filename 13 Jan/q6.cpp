/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

