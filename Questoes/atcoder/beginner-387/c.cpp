#include <iostream>
#include <string>

using namespace std;

int main(){
    long l, r, sum = 0;
    cin >> l >> r;
    for(; l <= r; l++){
        string val_str = to_string(l);
        int val_size = (int) val_str.length();
        long first_num = (long) val_str.at(0);

        if((long) val_str.at(val_size - 1) == 9){
            continue;
        }

        int qt_iterations = val_size / 2;
        qt_iterations += (val_size % 2 != 0) ? 1 : 0;

        int back_index = val_size - 1;
        for(int i = 1; i <= qt_iterations; i++){
            long iter_front = (long) val_str.at(i);
            long iter_back = (long) val_str.at(back_index);
            if((iter_front >= first_num) || (iter_back >= first_num)){
                break;
            }
            if(i == qt_iterations){
                if(first_num > iter_front && first_num > iter_back){
                    sum += 1;
                }
            }

            back_index--;
        }
    }
    cout << sum << "\n";
    return 0;
}