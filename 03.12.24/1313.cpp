#include <iostream>
using namespace std;


int main() {

    int daymen[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    
    for(i; i<12; i++) {
        if(daymen[i] == 31) {
            cout << i+1 << "." << "menesi ir " << daymen[i] << " diena" << endl;
        } else {
            cout << i+1 << "." << "menesi ir " << daymen[i] << " dienas" << endl;
        }
    }

    return 0;

}