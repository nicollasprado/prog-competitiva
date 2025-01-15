#include <iostream>

using namespace std;

int main(){
    int x, grid_sum = 0;
    cin >> x;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            grid_sum += (i * j != x) ? (i * j) : 0;
        }
    }
    cout << grid_sum << "\n";
    return 0;
}