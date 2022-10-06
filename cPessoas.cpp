#include <iostream>
#include "cPessoas.h"
#include <cmath>
#include <valarray>


using namespace std;

cPessoas::cPessoas() {
}

cPessoas::cPessoas(const cPessoas& orig) {
}

cPessoas::~cPessoas() {
}

void cPessoas::lerDados() {

    int quant;
    int cpf;

    cout << "Informe a quantidade de pessoas: ";
    cin >> quant;

    for (int i = 0; i < quant; i++) {
        cout << "Informe seu nome: ";
        cin >> this->cad[i].nome;
        cout << "Informe a altura: ";
        cin >> this->cad[i].altura;
        cout << "Informe o peso: ";
        cin >> this->cad[i].peso;
        cout << "Informe o cpf: ";
        cin >> this->cad[i].cpf;
        cout << "Informe o sexo: ";
        cin >> this->cad[i].sexo;
    }

    this->ordenacaoBolha(quant);
    this->imprimirPessoas(quant);

    cout << "Informe o cpf a ser localizado: ";
    cin >> cpf;

    if ((this->pesquisaBinaria(quant, cpf)) == -1)
        cout << "O imc é igual a: " << this->calcImc();
    else
        cout << "O imc é igual a: " << this->calcImc();


}

float cPessoas::calcImc() {

    int i;
    float imc;

    imc = this->cad[i].peso / pow(this->cad[i].altura, 2);

    return imc;
}

int cPessoas::pesquisaSequencial(int cpf_localizar, int quant) {

    int i;
    for (int i = 0; i < quant; i++) {
        if (cpf_localizar == this->cad[i].cpf) {
            cout << this->calcImc();
        }
    }
}

void cPessoas::ordenacaoBolha(int quant) {

    int i, j;
    float temp;
    for (i = quant - 1; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            if (this->cad[j].cpf > this->cad[j + 1].cpf) {
                temp = this->cad[j].cpf;
                this->cad[j].cpf = this->cad[j + 1].cpf;
                this->cad[j + 1].cpf = temp;
            }
        }
    }
}

int cPessoas::pesquisaBinaria(int quant, int cpf) {
    int inf, sup, meio;
    inf = 0;
    sup = quant - 1;
    while (inf <= sup) {
        meio = (inf + sup) / 2;
        if (cpf == this->cad[meio].cpf)
            return meio;
        else if (cpf < this->cad[meio].cpf)
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1;
}

void cPessoas::imprimirPessoas(int quant) {

    for (int i = 0; i < quant; i++) {
        cout << this->cad[i].cpf;
    }
}
