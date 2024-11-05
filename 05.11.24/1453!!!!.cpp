#include <iostream>
using namespace std;

int main() {

    int a;

    cin >> a;
    
    switch(a) {
    case 1 ... 5:
        cout << "darbs";
        break;
    case 6 ... 7:
        cout << "atputies";
        break;
    default:
        cout << "ne";
        break;
    }

    return 0;
    
}