#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long num = abs(a - b);
        if(num == 0) {cout << 0 << endl;}
        else{
            long long result = floor((num + 9)/10);
            cout << result << endl;
        }
    }
    return 0;
}
