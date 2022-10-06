#include <iostream>
#include <valarray>
#include "cBanco.h"

using namespace std;

cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::lerDados() {

    int op, cpf;

    for (int i = 0; i < 3; i++) {
        cout << "Informe o nome: ";
        cin >> this->conta[i].nome;
        cout << "Informe o cpf: ";
        cin >> this->conta[i].cpf;
        cout << "Informe o deposito inicial: ";
        cin >> this->conta[i].deposito_inicial;
    }

    cout << "Digite 1 para depositar e 2 para sacar: ";
    cin >> op;

    cout << "Informe o cpf: ";
    cin >> cpf;
    
    this->calc(op, cpf);


}

float cBanco::calc(int op, int cpf) {

    int i, num;
    float deposito, total, saque;



    if (op == 1) {

        cout << "Informe o valor de deposito: ";
        cin >> deposito;
        for (i = 0; i < 3; i++) {
            if (cpf == this->conta[i].cpf) {
                num=i;
                total = this->conta[i].deposito_inicial + deposito;

                
            }
        }
    } else if (op == 2) {

        cout << "Informe o valor de saque: ";
        cin >> saque;
        for (i = 0; i < 3; i++) {
            if (cpf == this->conta[i].cpf) {
                num=i;
                total = this->conta[i].deposito_inicial; - saque;

                
            }
        }

    }
    cout << "Nome: " << this->conta[num].nome << endl;
    cout << "Saldo: " << total << "R$" << endl;
    
}
