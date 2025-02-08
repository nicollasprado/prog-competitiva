#include <bits/stdc++.h>

using namespace std;

struct People{
    int looking;
    int number;
};

int main(){
    int qt_people;
    cin >> qt_people;

    vector<People> peoples(qt_people);
    for(auto& iter : peoples){
        cin >> iter.looking;
    }


    vector<People> ordened_peoples(qt_people);
    for(auto& iter : peoples){
        cin >> iter.number;

        ordened_peoples[iter.number-1] = iter;
    }


    for(auto& iter : ordened_peoples){
        cout << peoples[iter.looking-1].number << " ";
    }

    cout << "\n";
    return 0;
}
