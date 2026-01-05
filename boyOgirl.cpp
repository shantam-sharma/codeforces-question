#include <iostream>
// #include <set>
using namespace std;
/*
int main() {
    string s;
    cin >> s;
    set<char> st;
    for(char c : s) st.insert(c);
    if(st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
*/
int main() {
    string s;
    cin >> s;

    bool seen[26] = {0};
    int distinct = 0;

    for(char c : s){
        if(!seen[c - 'a']){
            seen[c - 'a'] = true;
            distinct++;
        }
    }

    if(distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}

