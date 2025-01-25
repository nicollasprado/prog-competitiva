#include <iostream>

using namespace std;

bool ordened(int s[5]){
    bool ord = true;
    for(int i=0; i < 4; i++){
        if(s[i] > s[i+1]){
            ord = false;
        }
    }

    return ord;
}

int main(){
    int seq[5];
    for(int i=0; i < 5; i++){
        int aux;
        cin >> aux;
        seq[i] = aux;
    }

    string ans = "No";
    for(int j=0; j < 4; j++){
        int aux = seq[j];
        seq[j] = seq[j+1];
        seq[j+1] = aux;

        if(ordened(seq)){
            ans = "Yes";
            break;
        }

        aux = seq[j];
        seq[j] = seq[j+1];
        seq[j+1] = aux;
    }


    cout << ans << "\n";
    return 0;
}
