#include <iostream>
using namespace std;

int main() {

    int range = 3 - 1 + 1;
    
    int rand1 = rand()%range+1;
    int rand2 = rand()%range+1;
    int rand3 = rand()%range+1;
    int rand4 = rand()%range+1;

    string dzivnieki1r[3]{"pūce", "ezis", "stirna"};
    string dzivnieki2r[3]{"vārna", "zīlīte", "krauklis"};
    string dzivnieki3r[3]{"Eži", "Āpši", "Cielavas"};
    string dzivnieki4r[3]{"pūce", "varde", "lācis"};

    cout << "Mežā malā " << dzivnieki1r[rand1] << " skrien," << endl;
    cout << "Zaļos laukos " << dzivnieki2r[rand2] << " dzied," << endl;
    cout << dzivnieki3r[rand3] << " sēž un ēŗkšķus krāj," << endl;
    cout << "Kamēr " << dzivnieki4r[rand4] << " naktī krāc" << endl;




    return 0;
}