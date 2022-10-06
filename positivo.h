#ifndef POSITIVO_H
#define POSITIVO_H

class positivo {
public:
    positivo();
    positivo(const positivo& orig);
    virtual ~positivo();
    
    void lerDados();
    int verifica(int n1);
private:

};

#endif /* POSITIVO_H */

