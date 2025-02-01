// not working


#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int n, m;
    vector<vector<char>> s;
    vector<vector<char>> t;

    cin >> n >> m;
    char aux;
    vector<char> auxV;
    for(int l=0; l < n; l++){
        if(auxV.size() > 0){
            s.push_back(auxV);
            auxV.clear();
        }
        for(int c=0; c < n; c++){
            cin >> aux;
            auxV.push_back(aux);
        }
    }
    s.push_back(auxV);
    auxV.clear();

    for(int l=0; l < m; l++){
        if(auxV.size() > 0){
            t.push_back(auxV);
            auxV.clear();
        }
        for(int c=0; c < m; c++){
            cin >> aux;
            auxV.push_back(aux);
        }
    }
    t.push_back(auxV);


    pair<int, int> ans = make_pair(0, 0);
    int equal_counter = 0;
    int t_l=0, t_c=0;
    for(int tot=0; tot < n; tot++){
        equal_counter = 0;
        t_l=0;
        t_c=0;
        for(int l=tot; l < m+tot; l++){
            for(int c=0; c < m; c++){
                cout << "\n" << s[l][c] << " " << t[t_l][t_c];

                if(s[l][c] == t[t_l][t_c]){
                    t_c++;
                    if(t_c >= m){
                        t_c=0;
                        t_l++;
                        if(t_l >= m){
                            t_l=0;
                        }
                    }
                    if(equal_counter == 0){
                        ans = make_pair(l, c);
                    }
                    equal_counter++;
                }
                equal_counter = 0;
                t_l=0;
                t_c=0;
            }
        }
    }

    cout << "\n" << ans.first + 1 << " " << ans.second + 1 << "\n";
    return 0;
}
