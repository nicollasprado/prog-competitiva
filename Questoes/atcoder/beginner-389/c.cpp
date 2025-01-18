// This isn't completed
// Questão não completa


#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int qt_query, q = 0;
    cin >> qt_query;
    queue<long> snakes;
    vector<long> res;
    for(int i=0; i < qt_query; i++){
        int type;
        long l;
        cin >> type;
        if(type == 1){
            cin >> l;
            snakes.push(l);
        }

        if(type == 2){
            snakes.pop();
        }

        long k;
        if(type == 3){
            cin >> k;
            long dist = 0;
            long* p_sn = &snakes.front();
            for(int j = 0; j < k-1; j++){
                dist += *p_sn;
                p_sn++;
            }
            res.push_back(dist);
            q++;
        }
    }

    for(int r=0; r < q; r++){
        cout << res[r] << "\n";
    }
    return 0;
}
