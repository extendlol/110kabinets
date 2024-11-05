#include <iostream>
using namespace std;

int main() {

    char atz;

    cin >> atz;

    switch(atz) {
        case 'A':
            cout << "supercilveks";
            break;
        case 'B':
            cout << "labs darbs";
            break;
        case 'C':
            cout << "ir ok";
            break;
        case 'D':
            cout << "vismaz sekmigi";
            break;
        case 'E':
            cout << "megini labak";
            break;
        case 'F':
            cout << "megini velreiz";
            break;
        default:
            cout << "slikts lietotajs!!!!!!";
            break;

    }

    return 0;
    
}