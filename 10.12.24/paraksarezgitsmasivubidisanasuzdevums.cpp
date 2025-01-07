#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int n = 4;
    int mas[5] = {5,6,7,8};
    int pos;
    int val;
    cout << "kur?: ";
    cin >> pos;
    cout << "uzko?: ";
    cin >> val;

    for(int i=0;i<n;i++) {
        cout<<mas[i] << endl;
    }

    for(int i=n; i>pos; i--) {
        mas[i] = mas[i-1];
    }
    cout << endl;
    n++;
    mas[pos] = val;
    for(int i=0;i<n;i++) {
        cout<<mas[i] << endl;
    }
}