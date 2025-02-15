#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int ans = -1;
    if(s1 == "sick" && s2 == "sick"){
        ans = 1;
    }else if(s1 == "fine" && s2 == "fine"){
        ans = 4;
    }else if(s1 == "sick"){
        ans = 2;
    }else if(s2 == "sick"){
        ans = 3;
    }

    cout << ans << "\n";
    return 0;
}
