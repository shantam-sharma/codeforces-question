#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a) for (int i=0; i<a; i++)
#define pb push_back

int main() {
    string s;
    cin >> s;
    vi v;
    FOR(i, s.length())
    {if(i%2==0) v.pb(s[i]-'0');}
    sort(v.begin(), v.end());

    FOR(i, v.size()){
        cout << v[i];
        if(i!=v.size()-1)
            cout<<"+";
    }
    return 0;
}
