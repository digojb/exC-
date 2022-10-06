#include "menor.h"
#include <iostream>

using namespace std;

menor::menor() {}

menor::menor(const menor& orig) {}

menor::~menor() {}

void menor::lerDados(){
    
    int n1, n2;
    
    cout << "Informe o primeiro numero: ";
    cin >> n1;
    cout << "Informe o segundo numero: ";
    cin >> n2;
    
    cout << "O menor numero é: " << this->returnMenor(n1, n2);
    
    
}

int menor::returnMenor(int n1, int n2){
    
    if (n1 < n2)
        return n1;
    else
        return n2;
    
}

