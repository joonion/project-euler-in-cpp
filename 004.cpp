#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool ispalindrome(int n) {
    string s = to_string(n), r = to_string(n);
    reverse(r.begin(), r.end());
    return s.compare(r) == 0;
}

int solve(int n) {
    int palindrome = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        for (int j = pow(10, n - 1); j < pow(10, n); j++) {
            if (ispalindrome(i * j) && i * j > palindrome)
                palindrome = i * j;
        }
    }
    return palindrome;
}

int main() {
    cout << solve(2) << endl;
    cout << solve(3) << endl;
}