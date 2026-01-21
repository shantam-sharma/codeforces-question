#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<(((i%2==0 || (i%4==1 && j==m-1) || (i%4==3 && j==0)))? '#' : '.');
        }
        cout<<endl;
    }
    return 0;
}

// why i%4 is cuz in rows like 1,5,9.. the remainder comes 1
// where we need to put # on the last cell
// in other rows like 3,7.. we need # in front which is
// i%4==3..
