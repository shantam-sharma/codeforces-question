#include <bits/stdc++.h>
using namespace std;

bool allDistinct(int y) {
    vector<bool> seen(10, false);
    while (y > 0) {
        int d = y % 10;
        if (seen[d]) return false;
        seen[d] = true;
        y /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (allDistinct(y)) {
            cout << y;
            break;
        }
    }

    return 0;
}
