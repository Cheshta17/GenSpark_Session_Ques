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


