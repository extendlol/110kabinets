#include <iostream>
using namespace std;

int main() {

    for(int i=0; i <= 50; i++) {
        if(i%3 == 0) {
            continue;
        }
        if(i>=40) {
            cout << "esi sasniedzis 40";
            break;
        }
        cout << i << endl;
    }
    
    return 0;
    
}