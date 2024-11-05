#include <iostream>
using namespace std;

int main() {
    int x;
    int y = 0;
    do {
        y = y+x;
        cout << "ievadi skaitli!!!";
        cin >> x;
    }
    while(x>0);
    cout << y;
    return 0;
    
}