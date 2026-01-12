#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 2){
            cout << 2 << endl;
            continue;
        }
        int split = n % 3;
        if(split == 0)cout << 0 << endl;
        else if(split == 1)cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
