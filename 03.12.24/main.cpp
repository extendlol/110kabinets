#include <iostream>
using namespace std;


int main() {

    string ievads;

    string anglu[5] = {"duck", "computer", "phone", "wall", "chair"};
    string latviesu[5] = {"pile", "dators", "telefons", "siena", "kresls"};

    for(int i=0; i<5; i++) {
        cout << latviesu[i] << endl;
        cin >> ievads;
        if(ievads == anglu[i]) {
            cout << "pareizi" << endl;
        } else {
            cout << "nepareizi" << endl;
        }
    }

}