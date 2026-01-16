#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,prev,curr, grp = 1;
    cin >> n >> prev;
    for(int i = 1; i < n; i++){
        cin >> curr;
        if(curr != prev){
            grp += 1;
        }
        prev = curr;
    }
    cout << grp;
    return 0;
}
