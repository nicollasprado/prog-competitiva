#include <bits/stdc++.h>

using namespace std;


void fill(vector<vector<char>>& grid, char value, int r, int j){
    for(int i = r; i < j-1; i++){
        for(int x = r; x < j-1; x++){
            grid[i][x] = value;
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<vector<char>> new_grid(n, vector<char>(n, '#'));

    for(int r = 1; r <= n; r++){
        for(int c = 1; c <= n; c++){
            int j = n + 1 - r;

            if(r <= j){
                if(r % 2 == 0) fill(new_grid, '#', r, j);
                else fill(new_grid, '.', r, j);
            }
        }
    }


    for(auto& row : new_grid){
        for(auto& column : row){
            cout << column;
        }
        cout << "\n";
    }
    return 0;
}
