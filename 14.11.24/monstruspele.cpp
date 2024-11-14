#include <iostream>
using namespace std;

int main() {

    srand(time(0));
    int range = 135 - 1 + 1;
    int hp = rand()% range + 1;
    int ureizes = rand()%13;
    int lec;
    int uzbrukums;
    string yno;
    cout << "Tu sāki ar " << hp << endl;
    switch(hp) {
        case -1 ... 135:
            cout << "Izvēlies uzbrukumu: ";
            cin >> uzbrukums;
            if(uzbrukums == 2) {
                cout << "Monstrs skrien tev virsū, vinš tev iesit tev " << ureizes << " reizes" << endl;
                hp=hp-ureizes*9;
                cout << "Tev hp tagad ir: " << hp << endl;
                if(hp <= 0) {
                    cout << "Tu nomiri 💀" << endl;
                    break;
                }
            }
            else if(uzbrukums == 1) {
                cout << "Tev uzbrūk monstrs un viņš tev atņem 70 hp, tev tagad ir: " << hp-70 << "hp" << endl;
                hp=hp-70;
                if(hp <= 0) {
                    cout << "Tu nomiri 💀" << endl;
                    break;
                }
            } 
            if(uzbrukums == 3) {
                lec=rand()%2;
                if(lec==0) {
                    cout << "Monstrs tev lec virsū Vai tu leksi?: ";
                    cin >> yno;
                    if(yno == "y") {
                        cout << "Tu palecies un pilnīgi nekas nenotiek 🤦‍♀️";
                    } else if(yno == "n") {
                        cout << "Tu paklupi un nomiri 💀" << endl;
                    }
                }
                else if(lec == 1) {
                    cout << "Pilnīgi nekas nenotiek.";
                }
            }

        
    }
    return 0;
}