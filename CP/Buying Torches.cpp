#include <iostream>
using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    long long coal = k;
    long long total_sticks = (coal * y) + k - 1;

    long long trades = total_sticks / (x - 1);
    if (total_sticks % (x - 1) != 0) {
        trades++;
    }

    cout << trades + k << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
