#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int rnd;
    int rnd10[5];
    int rndsum = 0;
    int paru = 0;
    int neparu = 0;

    srand(time(0));
    for(int i=0; i<5; i++) {
        rnd = rand()%10+1;
        rnd10[i] = rnd;
        cout << rnd10[i] << endl;
        rnd10[i] = rnd*2;
    }
    cout << endl;
    for(int i=0; i<5; i++) {
        cout << rnd10[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i += 2) {
        rnd10[i] = 1;
        rnd10[i+1] = 0;
        cout << rnd10[i]<< endl;
        cout << rnd10[i+1]<< endl;
    }

    return 0;
}