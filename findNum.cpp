#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> v(4);
    for (int i = 0; i < 4; ++i) cin >> v[i];
    long long S = *max_element(v.begin(), v.end());
    vector<long long> abc;
    for (int i = 0; i < 4; ++i) {
        if (v[i] != S) {
            abc.push_back(S - v[i]);
        }
    }
    cout << abc[0] << " " << abc[1] << " " << abc[2];
    return 0;
}
/*

a+b = z-c --- z-a-b = c
a+c = z-b --- z-a-c = b
b+c = z-a --- z-b-c = a
a+b+c = z

*/

