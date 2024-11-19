#include <iostream>
#include <cstdlib>
using namespace std;


int main() {


    int fib[8] = {1,1,2,3,5,8,13,21};

    cout << fib[0] << endl;
    cout << fib[7] << endl;
    
    fib[3] = 6;
    fib[5] = 9;

    cout << fib[2] << endl;
    cout << fib[4] << endl;


    return 0;
}