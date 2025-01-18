#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a = s.at(0) - '0', b = s.at(2) - '0';
    int c = a * b;
    cout << c << "\n";
    return 0;
}
