#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for(int deno : {100, 20, 10, 5, 1}){
        ans += n/deno;
        n %= deno;
    }
    cout << ans;
    return 0;
}
