#include <iostream>
#include <vector>
using namespace std;

int Profit(const vector<int>& sale) {
    int c = 0;

    for (int s : sale) {
        if (s > 0) {
            c++;
        }
    }
    return c;
}

int main() {
    int n;
    cout << "Enter the no. of days: ";
    cin >> n;
    vector<int> sale(n);
    cout << "Enter the sale values: ";
    for (int i = 0; i < n; ++i) {
        cin >> sale[i];
    }
    int result = Profit(sale);
    cout << "Number of profitable days: " << result << endl;
    return 0;
}


