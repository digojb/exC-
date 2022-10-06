#include <iostream>
#include "medias.h"

using namespace std;

medias::medias() {}

medias::medias(const medias& orig) {}

medias::~medias() {}

void medias::lerDados(){
    
    float n1, n2, n3;
    char letra;
    
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;
    cout << "Informe a letra (A para media aritmética e P para ponderada: ";
    cin >> letra;
    
    cout << "A media final é: " << calcMedia(n1, n2, n3, letra);
}

float medias::calcMedia(float n1, float n2, float n3, char letra){
    
    float mediaF;
    
    if (letra == 'a')
        mediaF = (n1+n2+n3)/3;
    else
        if (letra == 'p')
            mediaF = (n1*5+n2*3+n3*2)/10;
            
    return mediaF; 
}