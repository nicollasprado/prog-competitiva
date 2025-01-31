#include <iostream>
#include <vector>

using namespace std;

int main(){
    int size;
    cin >> size;
    vector<long long> seq(size);
    for (auto &x: seq) cin >> x;

    string ans = "Yes";

    for(int j = 1; j < size-1; j++){
        if(seq[j]*seq[j] != seq[j-1]*seq[j+1]){
            ans = "No";
            break;
        }
    }


    cout << ans << "\n";
    return 0;
}
