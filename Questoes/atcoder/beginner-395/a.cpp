#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n, 0);
    for(auto& num : nums){
        cin >> num;
    }

    string ans = "Yes";
    for(int i=0; i < (int) (nums.size() - 1); i++){
        if(nums[i] >= nums[i+1]){
            ans = "No";
            break;
        }
    }

    cout << ans << "\n";
    return 0;
}
