#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool hasZero = false;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x==0)hasZero = true;
        }
        if(hasZero) cout << "Alice\n";
        else cout << "Bob\n";
    }
    return 0;
}
