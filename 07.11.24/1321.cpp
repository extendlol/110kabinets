#include <iostream>
using namespace std;

int main() {

    int a,b;

    cin >> a;
    cin >> b;

    if(a<b) {
        a=a+14;
        b=b+5;
        cout << a << endl;
        cout << b << endl;
    } else {
        a=a+5;
        b=b+14;
        cout << a << endl;
        cout << b << endl;
    }

    return 0;
    
}