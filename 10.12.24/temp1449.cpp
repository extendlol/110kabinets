#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int virs0 = 0;
    int zem0 = 0;
    int nulle = 0;

    int noverojumi[7] = {13,16,7,-1,-6,0,3};

    for(int i=0; i<7; i++) {
        if(noverojumi[i] > 0) {
            virs0++;
        } 
        if(noverojumi[i] < 0) {
            zem0++;
        }
        if(noverojumi[i] == 0) {
            nulle++;
        }
    }

    cout << virs0 << endl;
    cout << zem0 << endl;
    cout << nulle << endl;

}