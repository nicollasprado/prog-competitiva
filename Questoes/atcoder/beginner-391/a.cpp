#include <bits/stdc++.h>

using namespace std;

int main(){
    string d; cin >> d;

    string ans = "S";
    if(d=="S") ans = "N";
    if(d=="E") ans = "W";
    if(d=="W") ans = "E";
    if(d=="NE") ans = "SW";
    if(d=="NW") ans = "SE";
    if(d=="SE") ans = "NW";
    if(d=="SW") ans = "NE";

    cout << ans << "\n";
    return 0;
}
