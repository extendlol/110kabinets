#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int rndmasivs[10];
    int kurs;
    int uzko;

    srand(time(0));

    for(int i = 0; i<10; i++) {
        int a = rand() % 100+1;
        rndmasivs[i] = a;
    }

    while(true) {

        for(int i = 0; i<10; i++) {
            cout << "[" << i << "] " << rndmasivs[i] << endl;
        }

        cout << endl;

        cout << "kuru pec kartas velies nomainit?: [0-9] ";
        cin >> kurs;

        cout << "uz ko?: ";
        cin >> uzko;

        rndmasivs[kurs] = uzko;

        for(int i = 0; i<10; i++) {
            cout << "[" << i << "] " << rndmasivs[i] << endl;
        }

        cout << endl;
        cout << endl;

    }
}