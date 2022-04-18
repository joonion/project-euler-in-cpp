#include <iostream>
using namespace std;

typedef unsigned long long longint;

longint gcd(longint a, longint b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

longint lcm(longint a, longint b) {
    return a * b / gcd(a, b);
}

longint solve(int n, int m) {
    longint k = 1;
    for (int i = n; i <= m; i++)
        k = lcm(k, i);
    return k;
}

int main() {
    cout << solve(1, 10) << endl;
    cout << solve(1, 20) << endl;
}