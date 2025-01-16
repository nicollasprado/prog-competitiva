#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    long l, r; 
    int sum = 0;
    cin >> l >> r;
    for(; l <= r; l++){
        string val_str = to_string(l);
        int val_length = (int) val_str.length();

        for(int i = 1; i < val_length; i++){
            if((val_str.at(i) - '0') >= (val_str.at(0) - '0')){
                string substring = "";
                if(val_length == 2){
                    substring = val_str.at(0);
                }else{
                    string substring = val_str.substr(0, (i - 1));
                }
                long target_num = stol(substring) + 1;
                for(int j = 0; j < i - 1; j++){
                    target_num = target_num * 10;
                }

                long sum_val = (target_num - stol(val_str)) - 1;

                l += sum_val;
                if(l > r){
                    break;
                }
                continue;
            }
        }

        sum += ((int) val_str.at(val_length - 1) >= (int) val_str.at(0)) ? 0 : 1;
    }
    cout << sum << "\n";
    return 0;
}