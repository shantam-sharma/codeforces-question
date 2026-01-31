#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], cnt[101] = {0};
        for(int i=1; i<=n; i++){cin >> a[i]; cnt[a[i]]++;}
        for(int i=1; i<=n; i++){
            if(cnt[a[i]] == 1){
                cout << i << endl;
            }
        }
    }
    return 0;
}
