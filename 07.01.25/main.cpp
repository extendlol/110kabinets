#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int a,b;
    int sum;
    cin >> a >> b;

    sum = a+b;
    
    if(sum%2 == 0) {
        cout << "summa skaitliem " << a << " un " << b << " ir para" << endl;
    } else {
        cout << "summa skaitliem " << a << " un " << b << " ir nepara" << endl;
    }

    if(sum%3 == 0) {
        cout << "un " << sum << " dalas ar 3" << endl;
    } else {
        cout << "un " << sum << " nedalas ar 3" << endl;
    }

}