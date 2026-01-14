#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h_fence,width = 0, height;
    cin >> n >> h_fence;
    for(int i = 0; i < n; i++){
        cin >> height;
        if(height > h_fence) width += 2;
        else width += 1;
    }
    cout << width;
    return 0;
}
