#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    srand(time(0));

    int mas[10];
    int ievadits;

    for(int i=0; i<10; i++) {
        int rnd = rand()%60+1;
        mas[i] = rnd;
    }

    cout << "ievadi skaitli: ";
    cin >> ievadits;

    for(int i=0; i<10; i++) {
        if(ievadits == mas[i]) {
            cout << "ir @ " << i << " pozicija";
        }
    }


}