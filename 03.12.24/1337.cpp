#include <iostream>
using namespace std;


int main() {

    int masivs[10] = {1,2};

    for(int i = 2; i<10; i++) {
        masivs[i] = masivs[i-2] + masivs[i-1];
    }

    for(int i=0; i<10; i++) {
        cout << masivs[i] << endl;
    }

}