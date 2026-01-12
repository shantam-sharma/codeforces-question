#include <iostream>
#include <set>
using namespace std;
void solve() {
    long long n, k;
    cin >> n >> k;
    if (n == k) {
        cout << 0 << "\n";
        return;
    }
    set<long long> current_piles;
    current_piles.insert(n);

    int minutes = 0;

    while (!current_piles.empty()) {
        minutes++;
        set<long long> next_piles;
        bool found = false;
        bool can_continue = false;

        for (long long x : current_piles) {
            long long v1 = x / 2;
            long long v2 = (x + 1) / 2;

            if (v1 == k || v2 == k) {
                found = true;
                break;
            }
            if (v1 > k) next_piles.insert(v1);
            if (v2 > k) next_piles.insert(v2);
        }

        if (found) {
            cout << minutes << "\n";
            return;
        }

        if (next_piles.empty()) break;
        current_piles = next_piles;
    }

    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
