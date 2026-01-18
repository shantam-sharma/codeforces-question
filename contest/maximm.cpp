#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int max_val = 0; // max * length ans?
        for(int i=0; i<n; i++){
            int z; cin >> z;
            max_val = max(max_val , z);
        }
        cout << 1LL * max_val * n << endl;
    }

    return 0;
}
