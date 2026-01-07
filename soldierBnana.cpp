#include <iostream>
using namespace std;

int main() {
    int k, n, w, cost = 0;
    cin >> k >> n >> w;
    cost = k * ((w * (w + 1)) / 2);
    cout << max(0, cost - n);
    return 0;
}
