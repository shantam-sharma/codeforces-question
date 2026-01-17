#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,cnt=0;
    cin >> n;
    vector<int> s;
    for(int i=0; i<n; i++){
        cin >> a;
        s.push_back(a);
    }
    for(int i=1; i<s.size(); i++){
        if(s[i] > s[i-1]){
            swap(s[i-1], s[i]);
            cnt += 1;
        }
        else{
            continue;
        }
    }
    for(int i=s.size()-2; i>=0; i--){
        if(s[i] < s[i+1]){
            swap(s[i+1], s[i]);
            cnt += 1;
        }
        else{
            continue;
        }
    }
    cout << cnt;
    return 0;
}
