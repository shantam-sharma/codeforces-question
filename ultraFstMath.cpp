#include <bits/stdc++.h>
using namespace std;

int main() {
    string n,z;
    cin >> n >> z;
    for(int i=0; i<n.size(); i++){
        if(n[i] == z[i]) cout << "0";
        else cout << "1";
    }
    return 0;
}
