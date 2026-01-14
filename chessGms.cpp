#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int D = 0, A = 0;
    for(auto c : s)
        D += (c == 'D') , A += (c == 'A');
    if(A > D) cout << "Anton";
    else if(A == D) cout << "Friendship";
    else cout << "Danik";
    return 0;
}
