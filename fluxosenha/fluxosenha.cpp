#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool verificar_senha(string senha) {
    bool NUM = false, CHAR = false, LETRA = false; 
    while (true){
        for(int i=0; i <= (senha.length()-1);i++) {
            if (isdigit(senha[i])) {
                NUM = true;
            }
            else if (ispunct(senha[i])){
                CHAR = true;
            }
            else if (isalpha(senha[i])) {
                LETRA = true;
            }
        }
        if (CHAR == true and LETRA == true and NUM == true){
            return true;
        }
        else {
            return false;
        }
    }
}

int main() { //  senha um caracter e um numero
    string SENHA_ATUAL = "1234", SENHA;
    // dentro de uma funcao
    int CONT_ACESSO = 0;
    while (true) {
        cout << "ENTRE COM A SENHA: ";
        cin >> SENHA;
        if (SENHA == SENHA_ATUAL) {
            if (CONT_ACESSO < 3) {
                cout << "ABRIR PORTA" << endl;
                CONT_ACESSO = 0; // nao precisava
                break;
            }
            else {
                cout << "SENHA BLOQUEADA" << endl;
            }
        }
        else if (SENHA == "admin123") {
            cout << "ENTRE COM NOVA SENHA: ";
            cin >> SENHA;
            bool SENHA_VALIDA = verificar_senha(SENHA);
            if (SENHA_VALIDA == true){ 
                cout << "A SENHA FOI ATUALIZADA" << endl;
                SENHA_ATUAL = SENHA;
                CONT_ACESSO = 0;
            }
            else {
                cout << "A SENHA DEVE CONTER NUM E CHAR(%, 4, #...)" << endl;
                CONT_ACESSO +=1;
                cout << "TENTATIVAS: " << CONT_ACESSO << endl;
                }
        }
        else {
            cout << "SENHA INVALIDA" << endl;
            CONT_ACESSO +=1;
            cout << "TENTATIVAS: " << CONT_ACESSO << endl;
        }
    }
}