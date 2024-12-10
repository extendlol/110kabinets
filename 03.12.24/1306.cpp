#include <iostream>
using namespace std;


int main() {

    int ievade[5];

    for(int i=0; i<5; i++) {
        cin >> ievade[i];
    }

    cout << "Tika ievaditi sadi skaitli: ";
    for(int i=0; i<5; i++) {
        cout << ievade[i] << " ";
    }
    cout << endl;
    cout << "IZVADA ";
    for(int i=4; i>=2; i--) {
        cout << ievade[i] << " ";
    }

    int sum = 0;

    for(int i=0; i<5; i++) {
        sum = sum + ievade[i];
    }

    cout << "summa: " << sum;


    return 0;

}