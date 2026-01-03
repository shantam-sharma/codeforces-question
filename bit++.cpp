#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        string s;
        cin >> s;
        if(s[1] == '+') cnt+=1;
        else cnt-=1;
    }
    cout << cnt;
    return 0;
}
