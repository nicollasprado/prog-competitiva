#include <bits/stdc++.h>

using namespace std;

int find_wa(string s, int start){
    int ans = -1;

    for(int i = start; 0 < i; i--){
        if(s[i-1] == 'W' && s[i] == 'A'){
            ans = i;
            break;
        }
    }

    return ans;
}

int main(){
    string s;
    cin >> s;

    int pos;
    int start_find = s.size()-1;
    while((pos = find_wa(s, start_find)) != -1){
        s[pos] = 'C';
        s[pos-1] = 'A';

        start_find = pos-1;
    }

    cout << s;
    return 0;
}
