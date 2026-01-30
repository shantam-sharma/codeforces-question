#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> s(n);
        for(int i=0; i<n; i++){cin >> s[i];}
        sort(s.begin(), s.end());
        bool y = true;
        //jst hve to check if its posible to erase elem
        for(int i=1; i<n; i++){
            if(s[i] - s[i-1] > 1){
                y = false;
                break;
            }
        }
        cout << (y ? "YES" : "NO") <<endl;
    }
    return 0;
}
