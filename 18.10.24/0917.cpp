#include <iostream>
using namespace std;

int main() {
    int x;
    int y = 0;
    cout << y << endl;
    cout << "ievadi skaitli!!!";
    cin >> x;
    while(x>0) {  
        y = y+x;
        cout << "ievadi skaitli!!!";
        cin >> x;
    }
    cout << y;
    return 0;
    
}