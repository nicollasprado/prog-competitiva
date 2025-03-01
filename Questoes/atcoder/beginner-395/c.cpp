#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

int table[1000000];

int main(){
    int n;
    cin >> n;

    int ans = -1;
    int min = INT_MAX;
    for(int i=0; i < n; i++){
        int aux;
        cin >> aux;

        if(table[aux] != 0){
            ans = i - table[aux] + 2;

            if(min > ans) {
                min = ans;
            }
        }

        table[aux] = i+1;
    }

    cout << (min == INT_MAX ? -1 : min);
    return 0;
}
