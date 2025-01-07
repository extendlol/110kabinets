#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    srand(time(0));

    int len, lielaks15=0;
    cout << "len: ";
    cin >> len;

    int mas[len];

    for(int i=0; i<len; i++) {
        int rndval = rand()%30+1;
        mas[i] = rndval;
    }

    for(int i=0; i<len; i++) {
        cout << mas[i] << " ";
    }

    for(int i=0; i<len; i++) {
        if(mas[i] > 15) {
            lielaks15++;
        }
    }
    cout << endl;
    cout << "aa: " << lielaks15 << endl;

    for(int i=0; i<len; i++) {
        if(i%2 != 0) {
            mas[i] = mas[i] + 100;
        }
    }

    for(int i=0; i<len; i++) {
        cout << mas[i] << " ";
    }

}