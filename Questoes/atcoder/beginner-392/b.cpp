#include <bits/stdc++.h>

using namespace std;

int main(){
    int limit, qt_nums;
    cin >> limit >> qt_nums;

    vector<int> blacklist(qt_nums, 0);
    for(auto& iter : blacklist) cin >> iter;

    int counter = 0;
    vector<int> ans;
    for(int i=1; i <= limit; i++){
        for(int j=0; j < qt_nums; j++){
            if(i == blacklist[j]) break;
            if(j == qt_nums-1){
                ans.push_back(i);
                counter++;
            }
        }
    }

    cout << counter << "\n";
    for(auto& iter : ans) cout << iter << " ";
    cout << "\n";
    return 0;
}
