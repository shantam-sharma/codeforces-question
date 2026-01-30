#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long initial = 0;
        for (char c : s) if (c == '1') initial++;

        long long add = 0;

        int i = 0;
        while (i < n) {
            if (s[i] == '1') {
                i++;
                continue;
            }
            int l = i;
            while (i < n && s[i] == '0') i++;
            int r = i - 1;
            int L = r - l + 1;

            bool leftBlocked = (l - 1 >= 0 && s[l - 1] == '1');
            bool rightBlocked = (r + 1 < n && s[r + 1] == '1');

            int effective = L;
            if (leftBlocked) effective--;
            if (rightBlocked) effective--;

            if (effective > 0) {
                add += (effective + 2) / 3;
            }
        }

        cout << initial + add << '\n';
    }
    return 0;
}
