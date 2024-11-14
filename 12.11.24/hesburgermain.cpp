#include <iostream>
using namespace std;

int main() {
    
    int perimetrs;
    float width,depth;
    float hesburger, nugget;

    cout << "platums" << endl;
    cin >> width;
    cout << "dzilums" << endl;
    cin >> depth;

    perimetrs = (width * 2 + depth * 2) * 10;
    cout << "Perimetrs" << endl;
    cout << perimetrs / 10 << endl;

    hesburger = perimetrs % 87;

    cout << "Cik daudz hesburgeri:" << endl;
    cout << perimetrs / 87 << endl;
    cout << "Cik daudz nageti:" << endl;
    cout << hesburger / 56 << endl;

    return 0;
}