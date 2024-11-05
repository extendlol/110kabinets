#include <iostream>
using namespace std;

int main() {

    int a,b,i;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    for(i=1; i<b; i++) {
        a++;
        cout << a << endl;
    }
    
}