#include <iostream>
using namespace std;

typedef unsigned long long longint;

longint solve(longint n) {
    longint factor = 2, i;
    while (n > 1) {
        i = factor;
        while (n % i != 0)
            i++;
        n /= i;
        factor = i;
    }
    return factor;
}

int main() {
    cout << solve(13195UL) << endl;
    cout << solve(600851475143UL) << endl;
}