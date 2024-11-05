#include <iostream>
using namespace std;

int main() {

    int a;

    cin >> a;
    
    switch(a) {
        case 1:
            cout << "viens";
            break;
        case 2: 
            cout << "divi";
            break;
        case 3:
            cout << "tris";
            break;
        case 4:
            cout << "cetri";
            break;
        case 5:
            cout << "pieci";
            break;
        case 6:
            cout << "sesi";
            break;
        case 7:
            cout << "septini";
            break;
        case 8:
            cout << "astoni";
            break;
        case 9:
            cout << "devini";
            break;
        case 0:
            cout << "nulle";
            break;
        default:
            cout << "ne";
            break;
    }

    return 0;
    
}