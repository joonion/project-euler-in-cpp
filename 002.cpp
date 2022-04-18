#include <iostream>
using namespace std;

int solve() {
    int a = 1, b = 2, c;
    int sum = b;
    while (b < 4000000) {
        c = a + b;
        a = b;
        b = c;
        if (b % 2 == 0)
            sum += b;
    }
    return sum;
}

int main() {
    cout << solve() << endl;
}