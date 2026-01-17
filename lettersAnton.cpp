#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char>s;
    set<char> i = {'{', '}', ','};
    char c;
    //jb tk input mil rha hai
    while(cin >> c){
        //maine i me dhundha mai
        //dhundhte dhundhte end tak pauch gya
        //lekin nhi mila toh s me c insert
        if(i.find(c) == i.end()){
            s.insert(c);
        }
    }
    cout << s.size();
    return 0;
}
