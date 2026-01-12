#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long s, k, m;
    cin >> s >> k >> m;

    long long top = s;
    long long bottom = 0;
    long long intervals = m / k;
    long long limit = min(intervals, 2LL + (intervals % 2));

    for (long long i = 0; i < limit; ++i) {
        long long falling = min(top, k);
        top -= falling;
        bottom += falling;
        swap(top, bottom);
    }
    long long remaining_time = m % k;
    long long final_fall = min(top, remaining_time);
    top -= final_fall;
    cout << top << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
