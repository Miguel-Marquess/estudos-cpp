#include <iostream>
using namespace std;

int main() {
    string nome, sexo;
    cout << "Digite seu nome : ";
    cin >> nome;
    cout << "Digite seu sexo [M/F]: ";
    cin >> sexo;
    if (sexo == "M"){
        cout << "Boa tarde, Sr. " << nome << endl;
    }
    else {
        if (sexo == "F") {
            cout << "Boa tarde, Sra. " << nome << endl;
        }
        else {
            cout << "Sexo não informado!" << endl;  
        }
    }
    return 0;
}