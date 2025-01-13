#include <iostream>
#include <string>
using namespace std;

bool isNonPrime(int dig) {
    return (dig == 0 || dig == 1 || dig == 4 || dig == 6 || dig == 8 || dig == 9);
}

int calEncryption(const string& msg) {
    int sum = 0;
    for (char m : msg) {
        int dig = m - '0';
        if (isNonPrime(dig)) {
            sum += dig;
        }
    }
    return sum;
}

int main() {
    string msg;
    cout << "Enter the msg: ";
    cin >> msg;

    int encryptionKey = calEncryption(msg);
    cout << "Encryption Key: " << encryptionKey << endl;

    return 0;
}


