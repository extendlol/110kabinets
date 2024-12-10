#include <iostream>
#include <string>
using namespace std;


int main() {

    int array[5];

    for(int i=0; i<5; i++) {
        cin >> array[i];
    }
    for(int i=0; i<5; i++) {
        cout << array[i] << endl;
    }
    array[2] = 100;
    array[4] = 100;
    for(int i=0; i<5; i++) {
        cout << array[i] << endl;
    }
    return 0;

}