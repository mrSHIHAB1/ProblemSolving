#include <iostream>
using namespace std;

void collatz(long long n) {
    cout << n << " ";
    if (n == 1) return;

    if (n % 2 == 0)
        collatz(n / 2);
    else
        collatz(3 * n + 1);
}

int main() {
    long long n;
    cin >> n;
    collatz(n);
    return 0;
}
