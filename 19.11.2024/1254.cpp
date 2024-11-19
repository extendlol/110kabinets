#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int range = 50 - 20 + 1;
    
    srand(time(0));

    for(int i=1; i<=7; i++) {

        int randnum = rand()%range+20;

        cout << randnum << endl;

    }


    return 0;
}