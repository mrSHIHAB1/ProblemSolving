#include <bits/stdc++.h>
using namespace std;


bool isFair(long long x) {
    long long temp = x;
    while (temp > 0) {
        int digit = temp % 10;
        temp /= 10;
        if (digit != 0 && x % digit != 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (!isFair(n)) {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}
