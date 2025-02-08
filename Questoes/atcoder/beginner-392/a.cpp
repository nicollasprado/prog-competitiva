#include <bits/stdc++.h>

using namespace std;

int main(){
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];

    string ans = "No";
    if(
       nums[0] * nums[1] == nums[2] ||
       nums[1] * nums[2] == nums[0] ||
       nums[0] * nums[2] == nums[1]
    )
        ans = "Yes";


    cout << ans << "\n";
    return 0;
}
