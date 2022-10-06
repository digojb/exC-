#include <iostream>
#include "positivo.h"

using namespace std;

positivo::positivo() {}

positivo::positivo(const positivo& orig) {}

positivo::~positivo() {}

void positivo::lerDados(){
    
    int n1;
    
    cout << "Informe um valor inteiro: ";
    cin >> n1;
    
    cout << verifica(n1);
}

int positivo::verifica(int n1){
    
    if (n1 > 0)
        return 1;
    else
        if (n1 <0)
            return -1;
        else
            if(n1 = 0)
                return 0;
}

