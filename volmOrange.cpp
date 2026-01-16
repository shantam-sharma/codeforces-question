#include <bits/stdc++.h>
using namespace std;

int main() {
    float n;
    cin >> n;
    float total = n * 100;
    float p,sum = 0;
    for(int i = 0; i < n; i++){
        cin >> p;
        sum += p;
    }
    cout << (sum / total) * 100;
    return 0;
}
