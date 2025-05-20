#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

string get_winner(int n, const string& s) {
    set<char> winners;

    for (int x = 1; x <= n; ++x) {
        int a_set = 0, b_set = 0;
        int a = 0, b = 0;

        for (char c : s) {
            if (c == 'A') a++;
            else b++;

            if (a == x) {
                a_set++;
                a = 0;
                b = 0;
            } else if (b == x) {
                b_set++;
                a = 0;
                b = 0;
            }
        }

        if (a_set > b_set) winners.insert('A');
        else if (b_set > a_set) winners.insert('B');
        else winners.insert('?');
    }

    if (winners.size() == 1) {
        return string(1, *winners.begin());
    }
    return "?";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << get_winner(n, s) << endl;
    }

    return 0;
}
