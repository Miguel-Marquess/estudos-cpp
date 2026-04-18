#include <iostream>
using namespace std;

int main() {
    double n[4], md;
    for (int i=0; i < 4;i++) {
        cout << "Digite a nota: ";
        cin >> n[i];
        md+=n[i];
    }

    if (md/4 >= 5) {
        cout << "Aprovado!" << endl;
    }
    else {
        cout << "Reprovado!" << endl;
    }
    return 0;
}

