#include <bits/stdc++.h>
#include <vector>

using namespace std;


int main(){
    int n;
    cin >> n;

    string ans = "";
    vector<string> strs(50, "");

    string aux;
    for(int i=0; i < n; i++){
        cin >> aux;
        strs.insert(strs.begin() + (aux.size()-1), aux);
    }


    for(string s : strs){
        cout << s;
    }
    return 0;
}
