#include <bits/stdc++.h>

using namespace std;

int backtrack(string s, int i, int index, char nxt_l, int j){
    if(index >= (int) s.size()) return 0;

    if(nxt_l == 'C' && s[index] == 'C'){
        if(j - i == (index+1) - j){
            return 1;
        }
    }

    int counter = 0;

    if(nxt_l == 'B' && s[index] == 'B'){
        counter += backtrack(s, i, index+1, nxt_l, j);
        j = index+1;
        nxt_l = 'C';
    }

    counter += backtrack(s, i, index+1, nxt_l, j);

    return counter;
}


int main(){
    string s;
    cin >> s;

    int counter = 0;
    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == 'A'){
            counter += backtrack(s, i+1, i, 'B', -1);
        }
    }

    cout << counter << "\n";

    return 0;
}
