#include <iostream>
#include <vector>
using namespace std;

int calScore(const vector<int>& nums, int k) {
    int score = 0;
    for (int n : nums) {
        score += n / k; 
    }
    return score;
}

int main() {
    int N, k;
    cout << "Enter the no. of elements: ";
    cin >> N;
    vector<int> nums(N);
    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    cout << "Enter the divisor (k): ";
    cin >> k;
    int score = calScore(nums, k);
    cout << "Player's score: " << score << endl;
    return 0;
}

