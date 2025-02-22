#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    for(char c : s){
        if(c == '2'){
            ans += c;
        }
    }

    cout << ans << "\n";
    return 0;
}
