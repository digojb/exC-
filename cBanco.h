#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    
    struct Conta{
        
        char nome[20];
        int cpf;
        float deposito_inicial;
        
    }conta[3];
    
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    void lerDados();
    float calc(int op, int cpf);
    
private:

};

#endif /* CBANCO_H */

