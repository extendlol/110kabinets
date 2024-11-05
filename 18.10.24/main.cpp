#include <iostream>
using namespace std;

int main() {

    int a,b;

    cout << "skaitlsi 1: ";
    cin >> a;
    cout << "skaitlsi 2: ";
    cin >> b;

    if(a<b) {
        for(int i=a; i<=b; i++) {
            cout << i << endl;
        }
    } else if(a>b) {
        for(int i=a; i>=b; i--) {
            cout << i << endl;
        }
    }
    return 0;
    
}