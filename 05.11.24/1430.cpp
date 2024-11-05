#include <iostream>
using namespace std;

int main() {

    int a;

    cin >> a;
    
    if(a<1 || a>7) {
        cout << "neder";
        return 0;
    }

    if(a>=6) {
        cout << "atputies";
    } else if(a<=5) {
        cout << "darbs";
    }
    return 0;
    
}