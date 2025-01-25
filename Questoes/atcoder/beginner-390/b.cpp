#include <iostream>
#include <vector>

using namespace std;

int main(){
    int size;
    cin >> size;
    vector<double> seq;
    for(int i=0; i < size; i++){
        double aux;
        cin >> aux;
        seq.push_back(aux);
    }

    string ans = "Yes";

    double ratio = seq[1] / seq[0];
    if(size > 2){
        for(int j = 1; j < size-1; j++){
            double actual_ratio = seq[j+1] / seq[j];
            if(ratio != actual_ratio){
                ans = "No";
                break;
            }
        }
    }


    cout << ans << "\n";
    return 0;
}
