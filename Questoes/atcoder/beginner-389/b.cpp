#include <iostream>

using namespace std;

int main(){
    long x, res = 0;
    cin >> x;
    for(long i = 2; i <= x; i++){
        if(res != 0){
            break;
        }
        long fat = i;
        for(long j = i - 1; j > 0; j--){
            if(j == 1 && fat == x){
                res = i;
                break;
            }
            fat *= j;
        }
    }

    cout << res << "\n";
    return 0;
}
