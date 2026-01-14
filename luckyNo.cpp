#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '7' || s[i] == '4'){
            count ++;
        }
    }
    cout << ((count == 4 || count == 7)? "YES" : "NO");
    return 0;
}
