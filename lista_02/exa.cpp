#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite o valor para a:";
    cin >> a;
    cout << "Digite o valor para b:";
    cin >> b;
    cout << "A diferenca do maior para o menor é: ";
    if (a > b){
        cout << a-b << endl;
    }
    else {
        cout << b-a << endl;

    }
    return 0;
}   