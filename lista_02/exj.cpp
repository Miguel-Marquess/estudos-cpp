#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    if (n%2 == 0){
        cout << "O numero é par!" << endl;
    }
    else{
        cout << "O numero é impar!" << endl;
    }
    return 0;
}
