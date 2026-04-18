#include <iostream>
using namespace std;

int main() {
    int n1, n2, t;
    for (int i=0;i < 4;i++) {
        cout << "Digite um numero: ";
        cin >> t;
        if (t%2==0 || t%3==0) {
            cout << t << " É divisivel por 2 ou por 3." << endl;
        }
        else {
            cout << t << " Não é divisivel por 2 ou por 3." << endl;
        }
    }
    return 0;
}