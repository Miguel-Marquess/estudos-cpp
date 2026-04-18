#include <iostream>
using namespace std;

void binario(int temp, int arr[4], int n) {
    bool tneg = false;
    if (temp < 0){
        tneg = true;
        temp*=(-1);
    }
    cout << temp << endl;
    for (int i = n-1; i>=0;i--) {
        arr[i] = temp%2;
        temp/=2;
    }
    if (tneg){
        for (int i = n-1; i>=0; i--){
            if (arr[i] == 0) {
                arr[i] = 1;
            }
            else {
                arr[i] = 0;
            }
        }
        for (int i = n-1; i>=0; i--) {
            if (arr[i] == 0) {
                arr[i] = 1;
                break;
            }
            else {
                arr[i] = 0;
            }
        }
    }
}

void soma(int a[4], int m[4], int n, int q[4]){
    int soma = 0, q1 = 0, t;
    for (int i = 0; i<=n-1;i++) {
        a[i] = 0;
    }
    for(int i=1;i<=n;i++){
        int q0=q[n-1], carry = 0;
        if (q0 == 0 && q1 == 1) {
            for (int i = n-1;i>=0;i--){
                soma = a[i] + m[i] + carry;
                a[i] = soma%2;
                carry = soma/2; 
            }
        }
        for (int i=1;i<n;i++) {
            t = a[i];
            a[i] = a[i-1];
        }
        q[0] = a[n-1];
        for(int i = 1;i<=3;i++) {
            q[i] = q[i-1];
        }
        q1=q0;
    }
}

int main() {
    int m[4], q[4], a[4], temp, tempq, n=4;
    cout << "Multiplicando(Considere 4 bits): ";
    cin >> temp;
    cout << "Multiplicador(Considere 4 bits): ";
    cin >> tempq;
    binario(temp, m, n);
    binario(tempq, q, n);
    for(int i=0; i<4;i++){
        cout << m[i];
    }
    cout << endl;
    for(int i=0; i<4;i++){
        cout << q[i];
    }
    cout << endl;
    soma(a, m, n, q);
    for (int i=n-1;i>=0;i--) {
        cout << a[i];
    }
    cout << endl;
}
