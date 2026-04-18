#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    double t;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    if (a < b){
        t = a;
        a=b;
        b=a;
    }
    cout << "Digite o valor de c: ";
    cin >> c;
    if (c < a){
        t = a;
        a=c;
        c=t;
    }
    if (c < b){
        t=b;
        b=c;
        c=t;
    }
    cout << "Sequencia crescente: " << a << b << c << endl;
    return 0;
}