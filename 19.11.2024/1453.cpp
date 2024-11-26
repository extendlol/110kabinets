#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int rnd;
    int rnd10[10];
    int rndsum = 0;
    int paru = 0;
    int neparu = 0;

    srand(time(0));
    for(int i=0; i<10; i++) {
        rnd = rand()%50;
        rnd10[i] = rnd;
        cout << rnd10[i] << endl;
        rndsum = rndsum+rnd;
        if(rnd % 2 == 0) {
            paru++;
        } else if(rnd % 2 == 1) {
            neparu++;
        }
    }

    cout << "summa sum: " << rndsum << endl;
    cout << "paru: " << paru << endl;
    cout << "neparu: " << neparu << endl;


    return 0;
}