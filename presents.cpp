#include <bits/stdc++.h>
using namespace std;
// number inputed are the friend and at what
// position they are standing is the number that is needed to be displayed.
int main() {
    int n, gift, a[100];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> gift;
        a[gift] = i;
    }
    for(int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
