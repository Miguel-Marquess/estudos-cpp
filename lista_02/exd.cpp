#include <iostream>
using namespace std;

int main() {
    double n[4], md;
    for (int i=0; i < 4; i++) {
        cout << "Digite a nota: ";
        cin >> n[i];
        md+=n[i];
    }
    
    if (md/4 >= 7) {
        cout << "Aprovado! Sua média: " << md/4 << endl;
    }
    else {
        double n5, md2;
        cout << "Digite uma quinta nota: ";
        cin >> n5;
        md2 = (md+n5)/5;
        if (md2 >= 5){
            cout << "Aprovado em exame! Sua média: " << md2 << endl;
        }
        else {
            cout << "Reprovado! Sua média: " << md2 << endl;
        }
    }
    return 0;
}