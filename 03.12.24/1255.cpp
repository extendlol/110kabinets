#include <iostream>
using namespace std;


int main() {

    int pirmskaitli[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    for(int i=0; i<25; i++) {
        cout << pirmskaitli[i] << " ";
    }
    cout << endl;
    for(int i=24; i>=0; i=i-1) {
        cout << pirmskaitli[i] << "*";
    }

    return 0;

}