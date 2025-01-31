// This isn't completed
// Questão não completa


#include <iostream>
#include <queue>

using namespace std;

int main(){
    int qt; cin >> qt;
    queue<long long> snakes;
    for(int i=0; i < qt; i++){
        int type;
        long long l;
        cin >> type;
        if(type == 1){
            cin >> l;
            snakes.push(l);
        }
        if(type == 2){
            snakes.pop();
        }
        if(type == 3){
            cin >> l;
            long long dist = 0;
            long long* p_sn = &snakes.front();
            for(int i = 0; i < l; i++){
                dist += *p_sn;
                p_sn++;
                cout << *p_sn << " " << dist << "\n" << "\n";
            }
            cout << dist << "\n";   
        }
    }
    return 0;
}
