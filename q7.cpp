/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int generateOTP(int id) {
    int p = 1;
    while (id > 0) {
        int dig = id % 10; 
        p *= dig;       
        id /= 10;      
    }
    return p;
}

int main() {
    int id;
    cout << "Enter the id: ";
    cin >> id;
    int otp = generateOTP(id);
    cout << "The one-time password is: " << otp << endl;
    return 0;
}


